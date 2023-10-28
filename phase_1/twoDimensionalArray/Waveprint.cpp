#include<bits/stdc++.h>
using namespace std; 

int main(){
    cout << "This is Coding ninjas question 1: Wave Print problem" << endl;
    vector<int> ans; 
    vector<vector<int>> arr; 
    int mCols,nRows; 
    cout << "Enter the number of the rows:" <<endl; 
    cin >> nRows; 
    cout << "Enter the number of the columns" << endl; 
    cin >> mCols; 
    cout << "Enter the elements of the matrix" << endl; 
    for (int i = 0; i < nRows; i++)
    {
        vector<int> v;
        for (int j = 0; j < mCols; j++)
        {
            int n;
            cin >> n;
            v.push_back(n);
        }
        arr.push_back(v);        
    }
    


    for(int col = 0; col < mCols; col ++){
        if(col&1){
            // odd case: bottom to top 
            for(int row = nRows - 1;row >= 0; row --){
                // cout << arr[row][col] << " "; 
                ans.push_back(arr[row][col]);
            }
        }

        else{
            // 0 or even index
            for(int row = 0;row < nRows; row ++){
                // cout << arr[row][col] << " "; 
                ans.push_back(arr[row][col]);
            }
        }
    }

    for(int i = 0; i < ans.size(); i ++){
        cout << ans[i] << " "; 
    }

    return 0; 
}

