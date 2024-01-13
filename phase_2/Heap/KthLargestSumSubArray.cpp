#include<bits/stdc++.h>
using namespace std;

// you will given an array 
// {1,2,6,4,3}
int getSum(int start,int end,vector<int> arr){
    int sum = 0; 
    for(int i = start; i <= end; i ++){
        sum += arr[i]; 
    }
    return sum; 
}

int main(){
     // enter the project name
     // find kth largest sequence of the subarray 
     
     priority_queue<int> maxHeap; 
     int k = 3;
     vector<int> arr = {1,2,6,4,3}; 
     for(int i = 0; i < arr.size(); i ++){
        int sum = 0; 
        for(int j = i; j < arr.size(); j ++){
            sum += getSum(i,j,arr); 
            if(maxHeap.size() > k){
                if(maxHeap.top() < sum){
                    maxHeap.pop(); 
                    maxHeap.push(sum); 
                }
            }
            else{
                maxHeap.push(sum); 
            }
            // cout << "max heap" << endl; 
        }
     }

     
     
     cout << "The Kth Sum Of An Array Is : "<< maxHeap.top() << endl; 


  return 0;
}