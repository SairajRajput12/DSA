#include<bits/stdc++.h> 
using namespace std; 

class Graph {
    bool bfs(int node,vector<int> adj[],int visited[]){
        queue<pair<int,int>> q;
        q.push({node,-1});
        visited[node] = 1; 

        while(!q.empty()){
            int parent = q.front().second; 
            int src = q.front().first;  
            q.pop(); 

            for(auto neighbour : adj[src]){
                if(!visited[neighbour]){
                    q.push({neighbour,src}); 
                    visited[neighbour] = 1; 
                }
                else if(visited[src] and parent != neighbour){
                    return true; 
                }
            }
        }
        return false; 
    }

public:
    bool detectCycle(int V, vector<int> adj[]) {
        // Write your code here.
        int visited[V] = {0};
        // create adjacency list
        for(int i = 0; i < V; i ++){
            if(!visited[i]){
                bool ans = bfs(i,adj,visited); 
                if(ans){
                    return true; 
                }
            }
        }
        return false; 
    }

};





int main()
{
    /* code */
    cout << "i am just a baby " << endl; 
    return 0;
}



