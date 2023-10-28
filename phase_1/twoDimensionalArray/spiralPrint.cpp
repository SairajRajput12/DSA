#include<iostream>
#include<vector> 
using namespace std; 

void print(vector<int> ans){
    for (int i = 0; i < ans.size(); i++)
    {
            cout << ans[i] << " "; 
    }
    cout << endl;    
}

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> ans; 
            int row = matrix.size(); 
            int column = matrix[0].size(); 
            int count = 0; 
            int total = row*column; 

            // initialising the indexes 
            int starting_row  = 0; 
            int starting_column = 0; 
            int ending_row = row - 1; 
            int ending_col = column - 1;

                while(count < total)
                {
                    // printing first row 
                    for(int  i = starting_column; count < total && i <= ending_col; i ++){
                            ans.push_back(matrix[starting_row][i]); 
                            count ++; 
                    }
                    starting_row ++; 

                    // printlng ending column 
                    for(int i = starting_row; count < total && i <= ending_row; i ++){
                            ans.push_back(matrix[i][ending_col]); 
                             count ++; 
                    }
                    ending_col --; 

                    // printlng ending row 
                    for(int  i = ending_col; count < total && i >= starting_column; i --){
                            ans.push_back(matrix[ending_row][i]); 
                            count ++; 
                    }

                    ending_row --; 

                    // printing the starting column 
                    for(int  i = ending_row; count < total && i >= starting_row; i --){
                            ans.push_back(matrix[i][starting_column]);
                            count ++; 
                    }

                    starting_column ++; 

                }
            return ans; 
    }


int main(){
    cout << "This is problem 2: Spiral print"<< endl;
    cout << "Asked in amazon interviews" << endl;
    vector<vector<int>> v1{{1,2,3},{4,5,6},{7,8,9}}; 
    cout << "The resultanting answer vector is :" << endl; 
    vector<int> ans = spiralOrder(v1); 
    print(ans); 
    cout << "Everything is well"<<endl;     

}