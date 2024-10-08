#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 


void solve(int node,int visited[],stack<int> &st,vector<int> arr[]){
    visited[node] = 1; 
    for(auto it : arr[node]){
        if(!visited[it]){
            solve(it,visited,st,arr); 
        }
    }
    st.push(node); // i explored it 
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    int visited[v] = {0}; 
    vector<int> ans; 
    stack<int> st; 
    vector<int> adj[v];

    for(auto it : edges){
        int from = it[0]; 
        int to = it[1]; 
        adj[from].push_back(to); 
    }

    for(int i = 0; i < v; i ++){
        if(!visited[i]){
            solve(i,visited,st,adj); 
        }
    }

    while(!st.empty()){
        int top = st.top(); 
        st.pop(); 
        ans.push_back(top); 
    }

    return ans; 

}

int main(){
     // enter the project name
  return 0;
}