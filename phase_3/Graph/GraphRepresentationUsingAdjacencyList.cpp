#include<bits/stdc++.h>
using namespace std;


int main(){
     // enter the project name
     int n,m; 
     cout << "enter the number of the nodes" << endl; 
     cin >> n; 
     cout << "enter the number of the edges in the graph" << endl; 
     cin >> m; 

     // now declare the graph 
     vector<int> mp[n+1]; 
     for(int i = 0; i < m; i ++){
        int u,v; 
        cout << "enter the edges " << endl; 
        cin >> u >> v; 
        mp[u].push_back(v); 
        mp[v].push_back(u); 
     } 

     for(int i = 1; i <= n; i ++){
        cout << i << " -> "; 
        for(auto it : mp[i]){
            cout << it << " "; 
        }
        cout << endl; 
     }
  return 0;
}