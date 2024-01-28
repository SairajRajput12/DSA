#include<bits/stdc++.h> 
using namespace std; 

void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
{
    vis[node] = 1; 
    ls.push_back(node); 

    // traverse through each neighbour
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> adj[V]; 
    for(auto it : edges){
        adj[it[0]].push_back(it[1]); 
        adj[it[1]].push_back(it[0]); 
    }

    int visited[V] = {0}; 

    vector<vector<int>> output; 
    for(int i = 0; i < V; i ++)
    {
        if(!visited[i]){
            vector<int> v; 
            dfs(i,adj,visited,v); 
            output.push_back(v); 
        }
    } 
    return output; 
}


int main(){
    cout << "Hello" << endl; 
    return 0; 
}






