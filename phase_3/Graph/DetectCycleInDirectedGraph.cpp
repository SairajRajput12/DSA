#include<bits/stdc++.h>
using namespace std;

// Declarations: 
/*
	1. array of vectors(adjcency list for the directed graph). 
	2. path visited array for 1000 nodes 
	3. node visited array 
*/


bool dfs(vector<int> arr[],int visited[],int pathVisited[],int node){
	visited[node] = 1; 
	pathVisited[node] = 1; 

	for(auto it : arr[node]){
		if(!visited[it]){
			if(dfs(arr,visited,pathVisited,it) == true){
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


bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	
	int pathVisited[1000] = {0}; 
	int visited[1000] = {0}; 
	// Write your code here 
	vector<int> arr[v]; 
	for(auto it : edges){
		int from = it[0]; 
		int to = it[1]; 
		arr[from].push_back(to); 
	} 

	// this graph is the directed 
	for(int i = 0; i < v; i ++){
		if(!visited[i]){
			bool ans = dfs(arr,visited,pathVisited,i); 
			if(ans == true){
				return true; 
			}
		}
	}

	return false; 
}



int main(){
     // enter the project name
  return 0;
}