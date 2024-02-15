#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h> 

using namespace std; 




void topoSort(int node, vector < pair < int, int >> adj[],
      int vis[], stack < int > & st) {
      //This is the function to implement Topological sort. 
      vis[node] = 1;
      for (auto it: adj[node]) {
        int v = it.first;
        if (!vis[v]) {
          topoSort(v, adj, vis, st);
        }
      }
      st.push(node);
    }

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    vector<pair<int,int>> adj[n]; 

    for(int i = 0; i < n; i ++){
        int u = edges[i][0]; 
        int v = edges[i][1]; 
        int wt = edges[i][2]; 

        adj[u].push_back({v,wt}); 
    }

    int visited[n] = {0};
    stack<int> st; 

    for(int i = 0; i < n; i ++){
        if(!visited[i]){
            topoSort(i,adj,visited,st); 
        }
    }

    // do the distance thing 
    vector < int > dist(n);
    for (int i = 0; i < n; i++) {
       dist[i] = 1e9;
    }

    dist[0] = 0; 
    while(!st.empty()){
        int node = st.top(); 
        st.pop(); 
        // cout << node << endl; 
        // cout<<"inside loop"<< endl; 

        for(auto it : adj[node]){
            int v = it.first; 
            int wt = it.second; 
            if(dist[node] + wt < dist[v]){
                dist[v] = dist[node] + wt; 
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dist[i] == 1e9) dist[i] = -1;
    }

    return dist; 
}

















int main(){
     // enter the project name
  return 0;
}