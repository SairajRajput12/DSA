#include<bits/stdc++.h>
using namespace std; 


class DisjointSet{
    vector<int> rank,parent,size; 

public: 
    DisjointSet(int n){
        rank.resize(n+1,0); 
        parent.resize(n+1); 
        size.resize(n+1,1); 

        for(int i = 0; i <= n; i ++){
            parent[i] = i; 
        }
    }

    int findParent(int node){
        if(node == parent[node]){
            return node; 
        }

        return parent[node] = findParent(parent[node]); 
    }

    void unionByRank(int u,int v){
        int ulp_u = findParent(u); 
        int ulp_v = findParent(v); 

        if(ulp_u == ulp_v){
            return; 
        }

        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }

        else if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;  
        }
        else{
            parent[ulp_v] = ulp_u; 
            rank[ulp_u] ++; 
        }
    }

    void unionBySize(int u,int v){
        int ulp_u = findParent(u); 
        int ulp_v = findParent(v); 

        if(ulp_u == ulp_v){
            return; 
        }

        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else{
            parent[ulp_v] = ulp_u; 
            size[ulp_u] += size[ulp_v];  
        }
    }

};




class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& edges1) {
        // int pointsSize = edges.size(); 
        // vector<vector<pair<int,int>>> adj(pointsSize);
        // // Step 1: Create the adjacency list 
        // for(int i = 0; i < pointsSize-1; i ++){
        //     for(int j = i+1; j < pointsSize; j ++){
        //         int x1 = edges[i][0]; 
        //         int y1 = edges[i][1]; 
        //         int x2 = edges[j][0]; 
        //         int y2 = edges[j][1]; 

        //         int wt = abs(x2-x1) + abs(y2-y1); 
        //         adj[i].push_back({wt,j});
        //         adj[j].push_back({wt,i}); 
        //     }
        // }

        // // Step 2: Declarations 
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
        // pq.push({0,0});
        // int sum = 0; 
        // vector<int> vis(pointsSize,0); 

        // while(!pq.empty()){
        //     auto it = pq.top(); 
        //     pq.pop(); 
        //     int node = it.second; 
        //     int cost = it.first; 
        //     if(vis[node] == 1){
        //         continue; 
        //     }

        //     vis[node] = 1; 

        //     sum += cost; 

        //     for(auto it1 : adj[node]){
        //         int adjNode = it1.second; 
        //         int edW = it1.first; 

        //         if(!vis[adjNode]){
        //             pq.push({edW,adjNode}); 
        //         }
        //     }

        // }
        // return sum; 

        // Approach 2: using the kruskal's algorithm
        int pointsSize = edges1.size(); 
        vector<vector<pair<int,int>>> adj(pointsSize);
        for(int i = 0; i < pointsSize-1; i ++){
            for(int j = i+1; j < pointsSize; j ++){
                int x1 = edges1[i][0]; 
                int y1 = edges1[i][1]; 
                int x2 = edges1[j][0]; 
                int y2 = edges1[j][1]; 

                int wt = abs(x2-x1) + abs(y2-y1); 
                adj[i].push_back({wt,j});
                adj[j].push_back({wt,i}); 
            }
        }

        // step 1: i will create the edges vector which will store the data in the form of the wt,source,wt pair and sort them according to the wt in the assending order 
        vector<pair<int,pair<int,int>>> edges; 
        for(int i = 0; i < pointsSize; i ++){
            for(auto it : adj[i]){
                int source = i;  
                int destination = it.second; 
                int wt = it.first; 

                edges.push_back({wt,{source,destination}});
            }
        }

        // step 2: i will now create the Disjoint Set Object which will store the edges 
        DisjointSet dis(pointsSize); 
        sort(edges.begin(),edges.end()); 
        int minCostToConnect = 0; 
        for(auto it : edges){
            int wt = it.first; 
            int source = it.second.first; 
            int destination = it.second.second; 

            if(dis.findParent(source) != dis.findParent(destination)){
                // if 2 nodes are not the part of same graph then i will consider to add them in mst 
                minCostToConnect += wt; 
                dis.unionByRank(source,destination);
            }
        }
        return minCostToConnect; 
    }
};


int main(){

}