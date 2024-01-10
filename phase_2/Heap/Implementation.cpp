#include<bits/stdc++.h>
#include<queue> 

using namespace std;
class Heap{
public: 
int arr[100]; 
int size = 0; 

    void insert(int val){
        size = size + 1; 
        int index = size; 
        arr[index] = val; 

        while(index > 1){
            int parent = index/2; 
            if(arr[parent] < arr[index]){
                // max heap condition 
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

    void deleteFromHeap(){
        if(size == 0){
            cerr << "cannot delete the element of heap which having the size equal to 0" << endl; 
            return; 
        }
        arr[1] = arr[size]; 
        size --; 


        // take root node to it's correct position 
        int i = 1; 
        while(i < size){
            int leftIndex = 2*i; 
            int rightIndex = 2*i+1; 
            if(leftIndex < size and arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]); 
                i = leftIndex;
            }

            else if(rightIndex < size and arr[i] < arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]); 
                i = rightIndex; 
            }
            else{
                return; 
            }
        }
    }



};


void heapify(int arr[],int n,int i){
    int largest = i; 
    int left = 2*i; 
    int right = 2*i + 1; 

    if(left < n and arr[largest] < arr[left]){
        largest = left; 
    }


    if(right < n and arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]); 
        heapify(arr,n,largest); 
    }
}

int main(){
     // enter the project name
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
     h.deleteFromHeap(); 
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

     cout << "using priority queue" << endl; 

     priority_queue<int> pq; 
     pq.push(4); 
     pq.push(2); 
     pq.push(5); 
     pq.push(3); 

     cout << "element at top " << pq.top() << endl; 
     pq.pop(); 
     cout << "element at top " << pq.top() << endl; 
     cout << "size is : " << pq.size() << endl; 

     if(!pq.empty()){
        cout << "priority queue is not empty" << endl; ; 
     }
     else{
        cout << "priority queue is empty";
     }
     
    // min heap 
    priority_queue<int,vector<int>,greater<int>> minHeap; 
     minHeap.push(4); 
     minHeap.push(2); 
     minHeap.push(5); 
     minHeap.push(3); 
     cout << "element at top " << minHeap.top() << endl; 
     minHeap.pop(); 
     cout << "element at top " << minHeap.top() << endl; 
     cout << "size is : " << minHeap.size() << endl; 

     if(!minHeap.empty()){
        cout << "priority queue is not empty" << endl; ; 
     }
     else{
        cout << "priority queue is empty";
     }


  return 0;
}