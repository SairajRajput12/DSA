#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(int source,int destination,vector<int> arr[],int visited[]){
        visited[source] = 1; 
        for(auto it : arr[source]){
            if(it == destination){
                return true; 
            }
            if(!visited[it]){
                bool x = dfs(it,destination,arr,visited);
                if(x){
                    return true; 
                }
            }
        }

        return false; 
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // using dfs 
        if(edges.size() == 0){
            return true; 
        }

        vector<int> arr[n]; 
        int visited[200000] = {0}; 
        for(auto it : edges){
            int from = it[0]; 
            int to = it[1]; 
            arr[to].push_back(from); 
            arr[from].push_back(to); 
        }
        // dfs: 
        bool ans = dfs(source,destination,arr,visited); 
        return ans; 
        // bfs: 
        // queue<int> q; 
        // q.push(source); 
        // visited[source] = 1; 
        // while(!q.empty()){
        //     int curr = q.front(); 
        //     q.pop(); 

        //     if(curr == destination){
        //         return true; 
        //     }

        //     for(auto &node : arr[curr]){
        //         if(!visited[node]){
        //             visited[node] = 1; 
        //             q.push(node); 
        //         }
        //     }

        // }

        // return false; 
    }
};

int main(){
     // enter the project name
  return 0;
}