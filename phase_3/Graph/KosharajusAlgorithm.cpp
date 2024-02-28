#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h> 
using namespace std; 


void dfs(vector<int> &vis,vector<int> adj[],stack<int> &st,int node){
	vis[node] = 1; 
	for(auto it : adj[node]){
		if(!vis[it]){
			dfs(vis,adj,st,it); 
		}
	}
	st.push(node); 
}


void dfs3(vector<int> &vis,vector<int> adj[],stack<int> &st,int node){
	vis[node] = 1; 
	for(auto it : adj[node]){
		if(!vis[it]){
			dfs(vis,adj,st,it); 
		}
	}
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// Write your code here.
	vector<int> vis(v,0); 
	stack<int> st; 

	vector<int> adj[v]; 
	for(auto it : edges){
		int source = it[0]; 
		int destination = it[1]; 
		adj[source].push_back(destination); 
	}

	for(int i = 0; i < v; i ++){
		if(!vis[i]){
			dfs(vis,adj,st,i); 
		}
	}

	vector<int> adjT[v]; 
	for(int i = 0; i < v; i ++){
		vis[i] = 0; 
		for(auto it : adj[i]){
			adjT[it].push_back(i); 
		}
	} 


	// perform the dfs in order of finishing time 
	int scc = 0; 
	while(!st.empty()){
		int node = st.top(); 
		st.pop(); 
		if(!vis[node]){
			scc ++; 
			dfs3(vis,adjT,st,node); 
		}
	}
	return scc; 
}

// time complexity: O(V+E) 
// space complexity: O(2V)


int main(){
     // enter the project name
  return 0;
}