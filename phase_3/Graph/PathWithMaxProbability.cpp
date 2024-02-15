#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        // step 1: first create the adjacency list 
        vector<pair<int,double>> adj[n]; 
        for(int i = 0; i < edges.size(); i ++){
            int from = edges[i][0];
            int to = edges[i][1]; 
            double prob = succProb[i]; 
            adj[from].push_back({to,prob}); 
            // due to it's undirected nature as given in the question. 
            adj[to].push_back({from,prob}); 
        }

        // step 2: now i will going to create the priority queue and store it's probabilites according to the order
        priority_queue<pair<double,int>> q; 
        q.push({1.0,start_node});

        vector<double> ans(n, 0.0);  
        // step 3: now find the probability using the djkstra's algo by visiting all of the node
        while(!q.empty()){
            auto it = q.top(); 
            int node = it.second; 
            double probabilityFromTopNode = it.first; 
            q.pop(); 
            


            // if my current node matches with the adjacent node then i will return the probability
            if(node == end_node){
                return probabilityFromTopNode; 
            }

            for(auto it : adj[node]){
                int adjNode = it.first; 
                double adjProb = it.second; 
                if(probabilityFromTopNode*adjProb > ans[adjNode]){
                        ans[adjNode] = probabilityFromTopNode*adjProb; 
                        q.push({probabilityFromTopNode*adjProb,adjNode});
                }
            } 
        }

        // means i have not get any pair so i will return the probability
        return 0.0; 
    }
};


int main(){
     // enter the project name
  return 0;
}