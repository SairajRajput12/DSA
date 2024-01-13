#include<bits/stdc++.h>
using namespace std;

class node{
public: 
    int data; 
    int i; 
    int j; 

    node(int data,int row,int col){
        this->data = data; 
        i = row; 
        j = col; 
    }
}; 

class compare{
    public: 
        bool operator()(node* a,node* b){
            return a -> data > b -> data; 
        }
};


int main(){
    // create answer wala array 
    vector<vector<int>> arr = {{4,5,6},{1,2,3},{10,11,12},{7,8,9}}; 
    // vector<int> ans; 
    // // insert all elements [n*k] into  answer array 
    // for(int i = 0; i < arr.size(); i ++){
    //     for(int j = 0; j < arr[i].size(); j ++){
    //         ans.push_back(arr[i][j]); 
    //     }
    // }

    // sort(ans.begin(),ans.end()); 
    // for(int i = 0; i < ans.size(); i ++){
    //     cout << ans[i] << " "; 
    // }

    int k = arr.size(); 
    priority_queue<node*,vector<node*>,compare> minHeap; 
    for(int i = 0; i < k; i ++){
        node* tmp = new node(arr[i][0],i,0);
        minHeap.push(tmp); 
    }

    vector<int> ans; 
    while(minHeap.size() > 0){
        node* tmp = minHeap.top(); 
        ans.push_back(tmp -> data); 
        minHeap.pop(); 

        int i = tmp -> i; 
        int j = tmp -> j; 
        if((j + 1) < arr[i].size()){
            node* next = new node(arr[i][j+1],i,j+1); 
            minHeap.push(next); 
        }
    } 

    for(int i = 0; i < ans.size(); i ++){
        cout << ans[i] << " "; 
    }
    
  return 0;
}