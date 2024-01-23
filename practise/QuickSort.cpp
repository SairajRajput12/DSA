#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int start,int end){
    // int pivot = arr[start]; 
    int pivotIndex = 0; 
    // step 1: getting the pivot index 
    for(int i = (start+1); i <= end; i ++){
        if(arr[start] >= arr[i]){
            pivotIndex ++; 
        }
    }

    pivotIndex += start; 
    swap(arr[start],arr[pivotIndex]); 
    int startP = start; 
    int endP = end; 
    while(startP < pivotIndex and endP > pivotIndex)
    {
        while(arr[startP] < arr[pivotIndex])
        {
            startP ++;   
        }

        while(arr[endP] > arr[pivotIndex])
        {
            endP --; 
        }

        if(startP < pivotIndex and endP > pivotIndex)
        {
            swap(arr[startP],arr[endP]); 
            startP ++; 
            endP --; 
        }
    }

    return pivotIndex; 
}

void quickSort(vector<int> &arr,int start,int end){
    if(start > end){
        return; 
    }

    int pivotIndex = partition(arr,start,end); 
    quickSort(arr,start,pivotIndex-1); 
    quickSort(arr,pivotIndex+1,end); 
}

void sortAnArray(vector<int> &arr){
    quickSort(arr,0,arr.size()-1); 
}


int main(){
     // enter the project name 
    vector<int> arr{30,12,25,43,24,65,34}; 
    sortAnArray(arr); 
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "; 
    }
    
  return 0;
}