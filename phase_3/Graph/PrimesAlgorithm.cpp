#include<bits/stdc++.h>
using namespace std;

int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
  /*
    Don't write main().
    Don't read input, it is passed as function argument.    
    No need to print anything.
    Taking input and printing output is handled automatically.
  */
  priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq; 
  vector<int> vis(n,0); 
  vector<pair<int,int>> adj[n]; 

  for(auto it : edges){
    int from = it[0]; 
    int to  = it[1]; 
    int wt = it[2]; 

    adj[from].push_back({to,wt}); 
    adj[to].push_back({from,wt}); 
  }
  int sum = 0; 

  // (wt,node)
  pq.push({0,0});
  while(!pq.empty()){
    auto it = pq.top(); 
    pq.pop(); 

    int node = it.second; 
    int wt = it.first; 

    if(vis[node] == 1){
        continue; 
    }

    vis[node] = 1; 
    sum += wt; 

    for(auto it1 : adj[node]){
        int adjNode = it1.first; 
        int edW = it1.second; 
        if(!vis[adjNode]){
          pq.push({edW,adjNode}); 
        }
    }
  }
  return sum; 
}

int main(){
     // enter the project name
  return 0;
}
