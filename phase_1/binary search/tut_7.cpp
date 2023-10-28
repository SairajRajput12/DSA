#include <bits/stdc++.h> 
#include<vector>
using namespace std; 

int search(vector<int> v, int key){
	int start = 0; 
	int end = v.size(); 
	int mid = start + (end - start)/2; 
		while(start <= end){
				if(v[mid] == key){
					return mid; 
				}
				
				else if(v[mid] < key){
					end = mid - 1; 
				} 
			
				else{
					start = mid + 1; 
				}
			mid = start + (end - start)/2; 
		}
	return -1; 	
}


int main(){
	// you have given an array in desending order 
	// return the index of the key element 
	
	vector <int> arr {20,17,15,14,13,12,10,7,8,4}; 
	cout<<"The index of the key element is :"<<search(arr,4)<<endl; 
}
