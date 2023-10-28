#include <bits/stdc++.h> 
using namespace std;

int main(){
     // enter the project name
     cout << "Wave transversal in 2D array :" << endl; 
    int row,column; 
    cin >> row >> column; 
    int arr[row][column];
    // vector<vector<int>> arr;

    for (int i = 0; i < row; i++)
    {
            for (int j = 0; j < column; j++)
            {
               cin >> arr[i][j];  
            }
    }

    for (int i = 0; i < column; i++)
    {
        if(i%2 == 0){
                for(int j = 0; j < row; j ++){
                        cout << arr[j][i] << " "; 
                }
                // cout  << endl; 
        }   

        else{
                for(int j = (row - 1); j >= 0; j --){
                    cout << arr[j][i] << " "; 
                }
                // cout << endl; 
        }
    }
    
     /*
     
     Note that using a fixed-size array in this way can be risky because if the input row and column values are too large, it can cause a stack overflow. In general, it's safer to use a vector instead of a fixed-size array.
    
    */


  return 0;
}

// #include <bits/stdc++.h> 
// using namespace std;

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans; 
//     for(int col = 0; col < mCols; col ++){
//         if(col&1){
//             // odd case: bottom to top 
//             for(int row = nRows - 1;row >= 0; row --){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             // 0 or even index
//             for(int row = 0;row < nRows; row ++){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans; 
// }

// int main(){
//     cout << "Wave transversal in 2D array :" << endl; 
//     int row,column; 
//     cin >> row >> column; 
//     vector<vector<int>> arr(row, vector<int>(column, 0));
    
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < column; j++){
//             int element; 
//             cin >> element; 
//             arr[i][j] = element;  
//         }
//     }

//     vector<int> result = wavePrint(arr, row, column);

//     cout << "Wave traversal of given array: " << endl;
//     for(int i = 0; i < result.size(); i++){
//         cout << result[i] << " ";
//     }

//     return 0;
// }
