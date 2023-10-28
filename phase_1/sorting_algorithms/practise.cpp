#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> arr,int size){
    for (int i = 0; i < size; i++)
    {   
        for(int j = (i+1); j < size; j ++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]); 
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";    
    }
    
    
}

void BubbleSort(vector<int> arr,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < (size - i); j++)
        {
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]); 
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }   
}

void InsertionSort(vector<int> arr,int size){
    for (int i = 0; i < size; i++) {
        int element = arr[i];  
        int j = i - 1;         

            for (; j >= 0; j--) {  // Remove the redundant int j = (i-1);
                if (element < arr[j]) {
                    arr[j + 1] = arr[j];  
                } else {
                    break;  
                }
            }

        arr[j + 1] = element;  
    }


    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }   
      
}

void merge(vector<int> &arr,int start,int mid,int end){
    mid = 0; 
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

void mergerSort(vector<int> &arr,int low,int size){
    if(low < size){   
        int mid = low + (size - low)/2; 
        mergerSort(arr,low,mid); 
        mergerSort(arr,mid+1,size); 
        merge(arr,low,mid,size); 
    }
}

int partition(vector<int> &arr, int low, int end) {
    int cnt = 0;
    int pivot = arr[low];

    for (int i = low + 1; i <= end; i++) {  // Start from low + 1
        if (pivot >= arr[i]) {
            cnt++;
        }
    }
    int pivotIndex = cnt + low;
    swap(arr[pivotIndex], arr[low]);

    int i = low;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (i < pivotIndex && arr[i] <= pivot) {  // Compare with pivot
            i++;
        }

        while (j > pivotIndex && arr[j] > pivot) {   // Compare with pivot
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}


void quick(vector<int> &arr, int low, int high) {
    if (low < high) {  // Use '<' instead of '>='
        int pivot = partition(arr, low, high);
        quick(arr, low, pivot - 1);  // Sort left partition
        quick(arr, pivot + 1, high); // Sort right partition
    }
}


int main(){
     // enter the project name
     // selection sort
     vector<int> arr = {11,2,-93,-4,75}; 
    //  selectionSort(arr,5); 

    // bubble sort: 
    // BubbleSort(arr,5);  

    // insertion sort: 
    // InsertionSort(arr,5); 

    // merger sort: 
    mergerSort(arr,0,5); 

    // quick sort: 
    // quick(arr,0,5); 

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; 
    }  



  return 0;
}

