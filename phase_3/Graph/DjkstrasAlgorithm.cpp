#include<bits/stdc++.h>
using namespace std;


class Solution{
public: 
    vector<int> DjkstrasAlgo(int V, vector<vector<int>> adj[], int S){
        vector<int> dist(V,1e9); 
        dist[S] = 0; 
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, S});

        while(!q.empty()){
            auto it = q.top(); 
            q.pop(); 

            int node = it.second; 
            int distanceFromNode = it.first; 

            for(auto it1 : adj[node]){
                int v = it1[0]; 
                int w = it1[1]; 

                if(distanceFromNode + w < dist[v]){
                    dist[v] = w + distanceFromNode; 
                    q.push({w+distanceFromNode,v}); 
                }
            }
        }
        return dist; 
    }
};



int main(){
     // enter the project name
     // Driver code.
    int V = 3, E = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    Solution obj;
    vector<int> res = obj.DjkstrasAlgo(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
  return 0;
}