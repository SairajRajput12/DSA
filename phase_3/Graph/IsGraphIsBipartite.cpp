#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(int node,vector<vector<int>>& adj,int visited[]){
        queue<pair<int,int>> q;
        q.push({node,-1});
        visited[node] = 1; 

        while(!q.empty()){
            int parent = q.front().second; 
            int src = q.front().first;  
            q.pop(); 

            for(auto neighbour : adj[node]){
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

    bool neverGiveUp(vector<vector<int>>& graph){
        int visited[100] = {0}; 
        queue<int> q; 
        for(int i = 0; i < graph.size(); i ++){
            if(visited[i]){
                continue; 
            }

            visited[i] = 1; 
            q.push(i); 
            while(!q.empty()){
            int front = q.front(); 
            q.pop(); 
            
            for(auto it : graph[front]){
                if(visited[it] == 0){
                    visited[it] = -visited[front]; 
                    q.push(it); 
                }
                else if(visited[it] == visited[front]){
                    return false;
                }
            }
            }
        }

        return true; 

    }

    bool isBipartite(vector<vector<int>>& graph) {
        // for(auto it : graph){
        //     if(it.size() == (graph.size()-1)){
        //         return false; 
        //     }
        // }

        // step 1: i got a solution 
        // int nodes = graph.size(); 
        // int visited[100] = {0};
        // for(int i = 0; i < nodes; i ++){
        //     if(!visited[i]){
        //         bool ans = solve(i,graph,visited); 
        //         if(ans){
        //             return true; 
        //         }
        //     }
        // }

        // return false; 
        // you can do it using giving different color to each vertices 
        // mark inital with one color and others  adjacent node with different colours. 
        
        return neverGiveUp(graph); 
    }
};

int main(){
     // enter the project name
  return 0;
}