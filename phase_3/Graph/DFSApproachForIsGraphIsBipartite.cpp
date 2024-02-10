#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    bool neverGiveUp(vector<vector<int>>& graph){
        int visited[100] = {0}; 
        queue<int> q; 
        q.push(0); 
        for(int i = 0; i < graph.size(); i ++){
            if(visited[i]){
                continue; 
            }
            q.push(i);  
            visited[i] = 1; 
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

    bool dfs(int visited[],vector<vector<int>>& graph,int node,int currentColor){
        visited[node] = currentColor; 
        for(auto x : graph[node]){
            if(visited[x] == 0){
                if(!dfs(visited,graph,x,-currentColor)){
                    return false; 
                }
            }
            else if(visited[x] == visited[node]){
                return false; 
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
        
        // return neverGiveUp(graph); 

        // approach 3: using dfs 
        int number_of_nodes  = graph.size(); 
        int visited[100] = {0}; 
        for(int i = 0; i < number_of_nodes; i ++){
            if(!visited[i]){
                bool ans = dfs(visited,graph,i,1);
                cout << ans << endl; 
                if(!ans){
                    return false; 
                }
            }
        }

        return true; 

    }
};













int main(){
     // enter the project name
  return 0;
}