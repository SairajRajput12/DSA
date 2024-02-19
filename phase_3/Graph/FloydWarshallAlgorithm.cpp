#include<bits/stdc++.h>
using namespace std;

int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    // approach 1: using floyd's warshall algorithm 

    int d[n+1][n+1]; 

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            if(i == j){
                d[i][j] = 0; 
            }
            else{
                d[i][j] = 1e9; 
            }
        }
    }

    for (int i = 0; i < m; i++)
	{
		int u = edges[i][0];
		int v = edges[i][1];
		int w = edges[i][2];
		d[u][v] = w;
	}

    for(int via = 1; via <= n; via ++){
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= n; j ++){
                if(d[i][via] != 1e9 and d[via][j] != 1e9){
                    d[i][j] = min(d[i][j],d[i][via]+d[via][j]);
                } 
            }
        }
    }
    return d[src][dest]; 
}

int main(){
     // enter the project name
  return 0;
}