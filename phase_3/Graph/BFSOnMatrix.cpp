#include<bits/stdc++.h>
using namespace std;

// Declarations: 
queue<pair<int,int>> q; 
int delX[] = {0,0,-1,1}; 
int delY[] = {-1,1,0,0}; 

bool isValid(vector<vector<int>> &grid,int row, int col)
{
    // If cell lies out of bounds
    if (row < 0 || col < 0 || row >=grid.size()|| col >= grid[0].size())
        return false;
 
    // If cell is already visited
    if (grid[row][col] == 2 or grid[row][col] == 0)
        return false;
 
    // Otherwise
    return true;
}


/*
    queue<pair<int,int>> q; 
    // first add the initial pair into the queue. 
    // mark it as visited 
    // iterate while queue is not empty: 
        // pop out first element. 
        // get row and col number. 
        // and push it's adjacent elements in the queue. 
*/

int orangesRotting(vector<vector<int>> &grid,int row,int col){
    q.push({row,col}); 
    grid[row][col] = 2; 
    int cnt = 0; 
    while(!q.empty()){
        // cout << row << " " << col << endl; 
        // cout << "cnt : "<<cnt << endl; 
        // cout << grid[row][col] << endl; 
        int size = q.size(); 
        for(int i = 0; i < q.size(); i ++){
            int row = q.front().first; 
            int col = q.front().second; 
            q.pop(); 
        
            for(int i = 0; i < 4; i ++){
                int newX = row + delX[i]; 
                int newY = col + delY[i]; 

                if(isValid(grid,newX,newY)){
                    grid[newX][newY] = 2; 
                    q.push({newX,newY}); 
                }
            }
        }
        cnt ++; 
    }

    return cnt; 
}

int main(){
     // enter the project name
    vector<vector<int>> arr{{2,1,1},{0,1,1},{1,0,1}};  
    int row = 0; 
    int col = 0; 
    for(int i = 0; i < arr.size(); i ++){
        int j = 0; 
        for(j = 0; j < arr[0].size(); j ++){
            if(arr[i][j] == 2){
                row = i; 
                col = j; 
                break; 
            }
        }
        if(arr[i][j] == 2){
            row = i; 
            col = j; 
            break; 
        }
    }
    cout << orangesRotting(arr,row,col) << endl; 
  return 0;
}