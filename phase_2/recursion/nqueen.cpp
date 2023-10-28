#include<bits/stdc++.h>
using namespace std;

// my appraoch: 

// failed 

// int main(){
//      // enter the project name
//     int n = 4; 

//     int** arr = new int*[2]; // array with size n and value is int* type.
//     for(int i = 0; i < n; i ++){
//         arr[i] = new int[n]; 
//     }

//     for(int i = 0; i < n ; i ++){
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j] = 0; 
//         }
//     }

//     cout << "initial matrix" << endl; 
    
//     for(int i = 0; i < n ; i ++){
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " "; 
//         }
//         cout << endl; 
//     }

//     // int flag = 0;

//     for(int i = 0; i < n; i ++){
//         for(int j = 0; j < n; j ++){
//         cout << "Hello" << endl; 
//             if(arr[i][j] == 0){
//                 if(i > 0 && j > 0 && (i) < n && (j) < n){
//                     if(arr[j-1][i] == 0 && arr[j+1][i] == 0 && arr[j][i-1] == 0 && arr[j][i+1] == 0 && arr[j-1][i-1] == 0 && arr[j+1][i+1] == 0 && arr[j+1][i-1] == 0  && arr[j-1][i+1] == 0){
//                         arr[j][i] = 1; // place queen 
//                     }
//                 }                
//             }
//             else{
//                 break; 
//             }
//         }
//     }

//     // result
//     for(int i = 0; i < n ; i ++){
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " "; 
//         }
//         cout << endl; 
//     }

//     delete arr;
//   return 0;
// }

// solution: 
bool isSafe(int row,int col,vector<string> & board,int n){ 
        int duprow = row; 
        int dupcol = col; 
        while(row >= 0 && col >= 0){ // i am checking in upper direction digonally 
            if(board[row][col] == 'Q') return false; 
            row --; 
            col --; 
        }

        row = duprow; 
        col = dupcol; 


        while(col >= 0){ // then checking to the left
            if(board[row][col] == 'Q') return false; 
            col --; 
        }

        row = duprow; 
        col = dupcol; 

        while(row < n && col >= 0){ // then go to lower digonally
            if(board[row][col] == 'Q') return false; 
            row ++; 
            col --; 
        }
        return true; 
}


void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n){
    // arr[0][0] = 69; 
    if(col == n){
        ans.push_back(board); 
        return; 
    }

    for(int row = 0; row < n; row ++){
        if(isSafe(row,col,board,n)){
            board[row][col] = 'Q'; 
            solve(col+1,board,ans,n); 
            board[row][col] = '.'; 
        }
    }
}



int main(){
     // enter the project name
    int n = 4; 
    vector<vector<string>> ans;  
    vector<string> board(n); 
    string s(n,'.'); 
    // cout << s << endl; 
    for(int i = 0; i < n; i ++){
        board[i] = s; 
    }

    solve(0,board,ans,n); 
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            cout << ans[i][j] << " "; 
        }
        cout << endl;
    }
  return 0;
}