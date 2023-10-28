#include<bits/stdc++.h> 
using namespace std; 

void mergerUs(int arr[],int end,int start){
	int mid = 0; 
	mid = start + (end -start)/2; 
	
	int len1 = mid - start + 1; 
	int len2 = end - mid; 
	
	int *arr1 = new int[len1]; 
	int *arr2 = new int[len2]; 
	int index = start; 
	
	for(int i = 0; i < len1; i ++){
		arr1[i] = arr[index ++]; 
	}	


	index = mid + 1; 
	
	for(int i = 0; i < len2; i ++){
		arr2[i] = arr[index ++]; 
	}
	
	index = start;
	int index1 = 0, index2 = 0;  
	while(index1 < len1 && index2 < len2){
		if(arr1[index1] < arr2[index2]){
			arr[index ++] = arr1[index1 ++];  
		}
		else{
			arr[index ++] = arr2[index2 ++]; 
		}
	}
	
	while(index1 < len1){
		arr[index ++] = arr1[index1 ++]; 
	}
	
	while(index2 < len2){
		arr[index ++] = arr2[index2 ++]; 
	}	
	
	delete []arr1; 
	delete []arr2; 
}



void sortUs(int arr[],int start,int end){
	if(start >= end){
		return; 
	}

	// start -> start of the hypothetical sub array 
	// end ->  end of the hypothetical sub array 
	int mid = start + (end-start)/2;  // we are making the array during each recursion call means 
	
	// spliting the left part recursively 
	sortUs(arr,start,mid); 
	
	// splitting the right part recursively 
	sortUs(arr,mid+1,end); 
	
	// now mergint both of them  
	
	mergerUs(arr,end,start); 
}


int main(){
	cout << "this is merger sorting algorithm" << endl; 
	int arr[] = {4,5,3,6,8,2,3,8,1,9}; 
	sortUs(arr,0,9); 
	for(int i = 0; i < 10;i ++){
		cout << arr[i] << " "; 
	} 
	return 0; 
	  
}
