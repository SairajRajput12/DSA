#include<bits/stdc++.h> 
using namespace std; 

bool sortedHai(int arr[],int size){
bool ans = true; 
	if(size <= 1){
		return true; 
	}
	
	if(arr[1] < arr[0]){
		return false; 
	}

	else{
		ans = sortedHai(arr+1,size-1); 	
	}
	return ans; 		
}



int main(){
	int arr[5]; 
	for(int i = 0; i < 5; i ++){
		int n; 
		cin >> n; 
		arr[i] = n; 
	}
	
	bool s = sortedHai(arr,5);  
	if(s == true){
		cout << "array is sorted" << endl;  
	}
	else{
		cout << "no it is not sorted" << endl; 
	}
	return 0; 
}
