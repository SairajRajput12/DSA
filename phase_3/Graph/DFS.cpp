#include<bits/stdc++.h> 
using namespace std; 

void dfs(int node,vector<int> adj[],vector<int> &temp,int visited[])
{
    visited[node] = 1; 
    temp.push_back(node); 

    for(auto it : adj[node])
    {
        if(!visited[it]){
            dfs(it,adj,temp,visited); 
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Declaration
    vector<vector<int>> output; 
    vector<int> adj[V]; 
    int visited[V] = {0}; // used to keep track of the visited or non visited node in the graph

    // first create the graph 
    for(auto it : edges){
        adj[it[0]].push_back(it[1]); 
        adj[it[1]].push_back(it[0]); 
    }



    // now go through each edge and store the travesal of each edge
    for(int i = 0;i < V; i ++)
    {
        if(!visited[i]){
            vector<int> temp; 
            dfs(i,adj,temp,visited); 
            output.push_back(temp);
        }
    }

    // return the answer 2D vector
    return output; 
}



int main(){
    cout << "Hello" << endl; 
    return 0; 
}






