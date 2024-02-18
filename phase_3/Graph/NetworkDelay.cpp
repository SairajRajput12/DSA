#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // appraoch 1: using djkstra's algorithm: 
        
        // we will solve this problem using djkstra's algortihm 

        // step 1: storing the given data into the adjacency list 
        // vector<pair<int,int>> adj[n+1]; 
               
        // for(auto it : times){
        //     int sourceNode = it[0]; 
        //     int destinationNode = it[1]; 
        //     int timeTakenToTravel = it[2]; 
        //     adj[sourceNode].push_back({destinationNode,timeTakenToTravel}); 
        // }

        // // step 2: now second step is to create the graph 
        // priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
        // pq.push({0,k}); 
        // vector<int> ans(n+1,INT_MAX); 
        // ans[k] = 0; 
        // while(!pq.empty()){
        //     auto it = pq.top();
        //     int sourceFromQueue = it.second; 
        //     int costTakenFromSourceNode = it.first; 
        //     pq.pop(); 


        //     for(auto it2 : adj[sourceFromQueue]){
        //         int neighbourNode = it2.first; 
        //         int neighbourCost = it2.second;  

        //         int calculatedCost = costTakenFromSourceNode + neighbourCost; 
        //         if(calculatedCost < ans[neighbourNode]){
        //             ans[neighbourNode] = calculatedCost; 
        //             pq.push({ans[neighbourNode],neighbourNode});
        //         }
        //     }
        // }

        // // now we have computed the path to each and every vertex and for getting max path we will traverse through each element and get the max element. 
        // int answer = INT_MIN; 
        // for(int i = 1; i < ans.size(); i ++){
        //     answer = max(answer,ans[i]); 
        // }

        // return (answer == INT_MAX ? -1 : answer);

        // approach 2: using bellmand  for algorithm 
        vector<int> dist(n+1,INT_MAX);
        dist[k] = 0; 
        for(int i = 1; i < n; i ++){
            for(auto it : times){
                int u = it[0]; 
                int v = it[1]; 
                int wt = it[2]; 
                if(dist[u] != INT_MAX and dist[u] + wt < dist[v]){
                    dist[v] = dist[u] + wt; 
                }
            }
        }

        int answer = INT_MIN; 
        for(int i = 1; i < dist.size(); i ++){
            answer = max(answer,dist[i]); 
        }

        return (answer == INT_MAX ? -1 : answer);
        

    }
};



int main(){
     // enter the project name
  return 0;
}