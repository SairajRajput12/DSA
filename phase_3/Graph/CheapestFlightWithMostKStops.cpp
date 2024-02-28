#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        // this problem can be solved using Dijkstra's algorithm 
        // vector<int> dist(n, 1e9); 
        // dist[src] = 0; 
        // vector<pair<int,int>> adj[n]; 
        // for(auto it : flights){
        //     int from = it[0]; 
        //     int to = it[1]; 
        //     int cost = it[2]; 
        //     adj[from].push_back({to,cost}); 
        // }

        // priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq; 
        // pq.push({0,{src,k+1}});

        // while(!pq.empty()){
        //     auto it = pq.top();
        //     int cost = it.first; 
        //     int node = it.second.first; 
        //     int hops = it.second.second; 
        //     pq.pop();

        //     if(node == dst){
        //         return cost; 
        //     }

        //     if(hops > 0){
        //         for(auto it1 : adj[node]){
        //             int adjNode = it1.first; 
        //             int adjCost = it1.second;

        //             if(cost + adjCost < dist[adjNode]){
        //                 dist[adjNode] = cost + adjCost; 
        //                 pq.push({cost + adjCost,{adjNode,hops-1}});
        //             }
        //         }
        //     }
        // }
        // return -1; 

        vector<int> dist(n,INT_MAX); 
        dist[src] = 0; 

        for(int i = 0; i <= K; i ++){
            vector<int> tmp(dist); 
            for( auto flight : flights ) {
                if( dist[ flight[0] ] != INT_MAX ) {
                    tmp[ flight[1] ] = min( tmp[flight[1]], dist[ flight[0] ] + flight[2] );
                }
            }
            dist = tmp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
