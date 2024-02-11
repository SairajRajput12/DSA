#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool dfs(int node,vector<int> adj[],int pathVisited[],int visited[]){
        visited[node] = 1; 
        pathVisited[node] = 1; 
        
        for(auto it : adj[node]){
            if(!visited[it]){
                if(dfs(it,adj,pathVisited,visited)){
                    return true; 
                }
            }
            else if(pathVisited[it]){
                return true; 
            }
        }
        pathVisited[node] = 0; 
        return false; 
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // using the approach of cycle detection in the directed graph 
        int visited[2000] = {0}; 
        int pathVisited[2000] = {0};
        vector<int> adj[numCourses]; 

        for(auto it : prerequisites){
            int from = it[0]; 
            int to  = it[1]; 
            adj[to].push_back(from); 
        }

        for(int i = 0; i < numCourses; i ++){
            if(!visited[i]){
                bool ans = dfs(i,adj,pathVisited,visited); 
                if(ans){
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