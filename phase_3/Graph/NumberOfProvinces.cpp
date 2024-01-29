#include<bits/stdc++.h>

using namespace std; 

class Solution {
private: 
    void DFS(vector<vector<int>>& graph,vector<bool> &visited,int node)
    {
        visited[node] = true; 
        for(int neighBour = 0; neighBour < graph[node].size(); neighBour ++)
        {
            if(graph[node][neighBour] == 1 and !visited[neighBour]){
                DFS(graph,visited,neighBour); 
            }
        }
    }

    void dfs(int vis[],vector<int> adj[],int node){
        vis[node] = 1; 
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(vis,adj,it); 
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        // // step 1: calculate the number of the nodes in the matrix  and check whether the matrix is empty or not(means graph is empty or not)
        // int numberOfNodes = isConnected.size(); 

        // if(numberOfNodes == 0){
        //     return 0; 
        // }
        

        // // step 2: now make some declarations 
        // vector<bool> visited(numberOfNodes,false);  
        // int ans = 0; 

        // // step 3: now visit each node 
        // for(int i = 0; i < numberOfNodes; i ++){
        //     if(!visited[i]){
        //         ans ++; 
        //         DFS(isConnected,visited,i); 
        //         // when DFS function executes then i node will mark all nodes which are connected to it as visited to it recursively beacuse we are passing the visited vector as a reference 
        //         // and those nodes which are not marked will be considered as a another graph. 
        //     }
        // }

        // // step 4: return the answer

        // return ans;

        // striver's approach: 
        int v = 0; 
        int n = isConnected.size(); 
        vector<int> adjls[n]; 
        for(int i = 0; i < isConnected.size(); i ++){
            for(int j = 0; j < isConnected[i].size(); j ++){
                if(isConnected[i][j] == 1 and i != j)
                {
                    adjls[i].push_back(j); 
                    adjls[j].push_back(i);
                    v ++; 
                }
            }
        }

        int vis[n];
        for(int i = 0; i < n; i ++){
            vis[i] = 0; 
        } 
        int cnt = 0; 
        for(int i = 0; i < isConnected.size(); i ++){
            if(!vis[i]){
                cnt ++; 
                dfs(vis,adjls,i); 
            }
        }

        return cnt; 

    }
};

/*
Space complexity: O(N) + O(N) 
Time Complexity: O(N) + O(V+2E) which is near about O(N)
*/

int main()
{
    /* code */
    return 0;
}
