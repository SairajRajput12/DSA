#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& edges) {
        int pointsSize = edges.size(); 
        vector<vector<pair<int,int>>> adj(pointsSize);
        // Step 1: Create the adjacency list 
        for(int i = 0; i < pointsSize-1; i ++){
            for(int j = i+1; j < pointsSize; j ++){
                int x1 = edges[i][0]; 
                int y1 = edges[i][1]; 
                int x2 = edges[j][0]; 
                int y2 = edges[j][1]; 

                int wt = abs(x2-x1) + abs(y2-y1); 
                adj[i].push_back({wt,j});
                adj[j].push_back({wt,i}); 
            }
        }

        // Step 2: Declarations 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
        pq.push({0,0});
        int sum = 0; 
        vector<int> vis(pointsSize,0); 

        while(!pq.empty()){
            auto it = pq.top(); 
            pq.pop(); 
            int node = it.second; 
            int cost = it.first; 
            if(vis[node] == 1){
                continue; 
            }

            vis[node] = 1; 

            sum += cost; 

            for(auto it1 : adj[node]){
                int adjNode = it1.second; 
                int edW = it1.first; 

                if(!vis[adjNode]){
                    pq.push({edW,adjNode}); 
                }
            }

        }
        return sum; 
    }
};

int main(){
     // enter the project name
  return 0;
}