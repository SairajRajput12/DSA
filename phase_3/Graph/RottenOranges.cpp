#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isValid(int row,int col,vector<vector<int>> grid){
        
        if(row < 0 or col < 0 or row >= grid.size() or col >= grid[0].size())
        {
            return false; 
        }

        if(grid[row][col] == 2 or grid[row][col] == 0){
            return false; 
        }

        return true; 
    }

        void solve(int delRow[], int delCol[], int &fresh, queue<pair<int,int>> &q, int &cnt, vector<vector<int>>& grid, vector<vector<bool>>& visited){
            if(q.empty()){ 
                cout << "base case reached" << endl; 
                return; 
            }

            int row = q.front().first; 
            int col = q.front().second; 
            q.pop(); 

            for(int i = 0; i < 4; i++){
                int newX = row + delRow[i]; 
                int newY = col + delCol[i]; 
                if(isValid(newX, newY, grid) && !visited[newX][newY]){
                    q.push({newX, newY}); 
                    visited[newX][newY] = true;
                    solve(delRow, delCol, fresh, q, cnt, grid, visited); 
                }
            }
            cnt++; 
        }



public:
    int orangesRotting(vector<vector<int>>& grid) {
        // queue<pair<int,int>> q; 
        // int cnt = -1; 
        // int fresh = 0; 
        // int delRow[] = {0,0,-1,1}; 
        // int delCol[] = {-1,1,0,0}; 

        // for(int i = 0; i < grid.size(); i ++){
        //     for(int j = 0; j < grid[0].size(); j ++){
        //         if(grid[i][j] == 2){
        //             q.push({i,j}); 
        //         }
        //         if(grid[i][j] == 1){
        //             fresh ++; 
        //         }
        //     }
        // }

        // while(!q.empty()){
        //     // pick out the size of the queue first 
        //     int size = q.size(); 
        //     while(size --){
        //         int row = q.front().first; 
        //         int col = q.front().second; 
        //         q.pop(); 
        //         for(int i = 0; i < 4; i ++){
        //             int newRow = row + delRow[i]; 
        //             int newCol = col + delCol[i]; 

        //             if(isValid(newRow,newCol,grid)){
        //                 q.push({newRow,newCol}); 
        //                 grid[newRow][newCol] = 2; 
        //                 fresh --; 
        //             }
        //         }
        //     }
        //     cnt ++; 
        // }

        // if(fresh > 0){
        //     return -1; 
        // }

        // if(cnt == -1){
        //     return 0; 
        // }

        // return cnt; 

        int cnt = -1; 
        int n = grid.size(); 
        int m = grid[0].size(); 
        queue<pair<int,int>> q;  
        int fresh = 0; 
        int delRow[] = {0,0,-1,1}; 
        int delCol[] = {-1,1,0,0}; 

        for(int i = 0; i < grid.size(); i ++){
            for(int j = 0; j < grid[0].size(); j ++){
                if(grid[i][j] == 2){
                    q.push({i,j}); 
                }

                if(grid[i][j] == 1){
                    fresh ++; 
                }
            }
        } 

        cout << "before solve" << endl; 
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        solve(delRow,delCol,fresh,q,cnt,grid,visited); 
        return cnt; 
    }
};


int main(){
     // enter the project name
    Solution s; 
    vector<vector<int>> arr{{2,1,1},{0,1,1},{1,0,1}};  
    int row = 0; 
    int col = 0; 
    cout << s.orangesRotting(arr) << endl; 

  return 0;
}