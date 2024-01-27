#include<bits/stdc++.h>
using namespace std;

int main(){
  // approach 1: using matrix 
  int no_of_nodes,no_of_edges; 
  cout << "enter the number of the nodes" << endl;
  cin >> no_of_nodes; 
  cout << "enter the number of edges" << endl; 
  cin >> no_of_edges; 

  // declaring the array with 1-based indexing 
  int arr[no_of_nodes+1][no_of_nodes+1]; 

  for(int i = 0; i <= no_of_nodes; i ++){
    for(int j = 0; j <= no_of_nodes; j ++){
        arr[i][j] = 0; 
    }
  } 

  // addign edges 
  for(int i = 0; i < no_of_edges; i ++){
    int u,v; 
    cout << "enter the edges connecting the undirected graph" << endl; 
    cin >> u >> v; 
    arr[u][v] = 1; 
    arr[v][u] = 1;  
  }

  for(int i = 0; i <= no_of_nodes; i ++){
    for(int j = 0; j <= no_of_nodes; j ++){
        cout << arr[i][j] << " "; 
    }
    cout << endl; 
  } 
  cout << endl; 
  
  return 0;
}