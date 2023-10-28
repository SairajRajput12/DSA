// #include<bits/stdc++.h> 
// using namespace std; 

// class Solution {
// public:
//     // bool isValid(int i, int j, vector<vector<int>> &grid,vector<vector<bool>> &ves){
//     //     int n = grid.size(); 
//     //     int m = grid[0].size(); 
//     //     if(i >= 0 && j >= 0 && j < n && i < m && ves[i][j] == true){
//     //         return true; 
//     //     }
//     //     return false; 
//     // }

//     // void getNumberOfIsland(int i, int j,vector<vector<int>> &grid,vector<vector<bool>> &ves,int &ans){
//     //     ves[i][j] = false; 
//     //     // int ans = 0; 
//     //     if(isValid(i+1,j,grid,ves)){
//     //         ans ++; 
//     //         getNumberOfIsland(i+1,j,grid,ves,ans); 
//     //     }

//     //     if(isValid(i-1,j,grid,ves)){
//     //         ans ++; 
//     //         getNumberOfIsland(i-1,j,grid,ves,ans); 
//     //     }

//     //     if(isValid(i,j+1,grid,ves)){
//     //         ans ++; 
//     //         getNumberOfIsland(i,j+1,grid,ves,ans); 
//     //     }

//     //     if(isValid(i,j-1,grid,ves)){
//     //         ans ++; 
//     //         getNumberOfIsland(i,j-1,grid,ves,ans); 
//     //     }
//     //     // return ans; 
//     // }

//     // int maxAreaOfIsland(vector<vector<int>>& grid) {
//     //     int n = grid.size(); 
//     //     int m = grid[0].size(); 
//     //     vector<vector<bool>> ves(n,vector<bool>(m,true)); 
//     //     if(n == 0){
//     //         return 0; 
//     //     } 
//     //     cout << "hello" <<endl; 
//     //     int ans = 0; 
//     //     for(int i = 0; i < n; i ++){
//     //         int newlyFounded = 0; 
//     //         for(int j = 0; j < m; j ++){
//     //             if(grid[i][j] == 1 && ves[i][j] == true){
//     //                 getNumberOfIsland(i,j,grid,ves,newlyFounded);  
//     //             }
//     //         }
//     //         ans = max(ans,newlyFounded); 
//     //     }
//     //     return ans; 
//     // }
//     int getNumberOfIsland(int i, int j, vector<vector<int>>& grid, int& L) {
//     int n = grid.size();
//     int m = grid[0].size();

//     if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 1) {
//         return 0;
//     }

//     grid[i][j] = 0; 

//     int count = 1; // Increment count for the current cell

//     // Check the neighbors and recursively count the island cells
//     count += getNumberOfIsland(i - 1, j, grid, L); // Up
//     count += getNumberOfIsland(i + 1, j, grid, L); // Down
//     count += getNumberOfIsland(i, j - 1, grid, L); // Left
//     count += getNumberOfIsland(i, j + 1, grid, L); // Right

//     return count; // Return the total count
// }


//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//         int n = grid.size(); 
//         int m = grid[0].size(); 
//         int ans = 0; 
//         for(int i = 0; i < n; i ++){
//             for(int j = 0; j < m; j ++){
//                 int newlyFounded = 1;
//                 if(grid[i][j] == 1){
//                     getNumberOfIsland(i,j,grid,newlyFounded);  
//                     ans = max(ans,newlyFounded); 
//                 }
//             }
//         }
//         return ans; 
//     }
// };

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void getNumberOfIsland(int i, int j, vector<vector<int>>& grid, int& area) {
        int n = grid.size();
        int m = grid[0].size();

        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) {
            return;
        }

        grid[i][j] = 0; // Mark current cell as visited

        area++; // Increment area

        // Recursively check the neighboring cells
        getNumberOfIsland(i - 1, j, grid, area); // Up
        getNumberOfIsland(i + 1, j, grid, area); // Down
        getNumberOfIsland(i, j - 1, grid, area); // Left
        getNumberOfIsland(i, j + 1, grid, area); // Right
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    int area = 0;
                    getNumberOfIsland(i, j, grid, area);
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};

