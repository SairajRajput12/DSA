#include<bits/stdc++.h>
using namespace std; 

class Heap{
public: 
    int arr[1000];
    int size = 0; 
    
    void insert(int val){
        // increment the size 
        size = size + 1; 
        int index = size; 
        arr[index] = val; 

        while(index > 1){
            int parent = index/2; 
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]); 
                index = parent; 
            }
            else{
                return; 
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i ++){
            cout << arr[i] << " "; 
        }
        cout << endl; 
    }

    void deletionInHeap(){
        if(size == 0){
            cerr << "cannot remove more elements from empty heap" << endl; 
            return; 
        }

        arr[1] = arr[size]; 
        size --; 
        int i = 1; 
        while(i < size){
            int leftIndex = 2*i;  
            int rightIndex = 2*i+1; 
            if(leftIndex < size and arr[i] < arr[leftIndex])
            {
                swap(arr[leftIndex],arr[i]); 
                i = leftIndex; 
            }
            else if(rightIndex < size and arr[i] < arr[rightIndex])
            {
                swap(arr[rightIndex],arr[i]); 
                i = rightIndex; 
            }
            else{
                return; 
            }
        }
    }
};

void heapify(int arr[],int size,int i){
    int largest = i; 
    int leftChild = 2*i; 
    int rightChild = 2*i + 1; 

    if( leftChild < size and arr[largest] < arr[leftChild]){
        // swap(arr[leftChild],arr[largest]); 
        largest = leftChild; 
    }
    else if(rightChild < size and arr[largest] < arr[rightChild]){
        largest = rightChild; 
    }
    
    if(largest != i){
        swap(arr[largest],arr[i]); 
        heapify(arr,size,largest); 
    }
}

int main(){
     Heap h; 
     h.insert(100); 
     h.insert(50); 
     h.insert(60); 
     h.insert(30); 
     h.insert(20);  
     h.insert(10);  
     h.insert(70);  
     h.insert(80);  
     h.print(); 

     int arr[6] = {-1,54,53,55,52,50}; 
     int n = 5; 
     for(int i = (n/2); i > 0; i --){
        heapify(arr,n,i); 
     }

     cout << "printing the heap now" << endl; 
     for (int i = 1; i <= n; i++)
     {
            cout << arr[i] << " "; 
     }
     int nums[4]= {5,2,3,1}; 
     int size = 3; 
     // now sorting the heap 
     for(int i = (size+1)/2-1; i >= 0; i --){
        heapify(nums,i,size);
     }

     for(int i = size; i > 0; i --){
        swap(nums[0],nums[i]); 
        heapify(nums,0,i); 
     }
     cout << endl; 

     for(int i = 0; i <= size; i ++){
        cout << nums[i] << " "; 
     }

     
}