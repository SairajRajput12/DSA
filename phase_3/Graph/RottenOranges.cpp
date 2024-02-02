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
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q; 
        int cnt = -1; 
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

        while(!q.empty()){
            // pick out the size of the queue first 
            int size = q.size(); 
            while(size --){
                int row = q.front().first; 
                int col = q.front().second; 
                q.pop(); 
                for(int i = 0; i < 4; i ++){
                    int newRow = row + delRow[i]; 
                    int newCol = col + delCol[i]; 

                    if(isValid(newRow,newCol,grid)){
                        q.push({newRow,newCol}); 
                        grid[newRow][newCol] = 2; 
                        fresh --; 
                    }
                }
            }
            cnt ++; 
        }

        if(fresh > 0){
            return -1; 
        }

        if(cnt == -1){
            return 0; 
        }

        return cnt; 
    }
};


int main(){
     // enter the project name
    Solution s; 
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
    cout << s.orangesRotting(arr) << endl; 

  return 0;
}