#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
     cout << "2-D array questions: Matrix multiplication " << endl;  
    //  matrix multiplication: 
    int row1,column1; 
    cin >> row1 >> column1; 
    int row2,column2;
    cin >> row2 >> column2; 
    int arr1[row1][column1],arr2[row2][column2]; 

        cout << "enter the elements of the first matrix :" << endl; 
        for (int i = 0; i < row1; i++)
        {
                for (int j = 0; j < column1; j++)
                {
                    cin >> arr1[i][j]; 
                }
                
        }
        
        cout << "enter the elements of the second matrix :" << endl; 
        for (int i = 0; i < row2; i++)
        {
                for (int j = 0; j < column2; j++)
                {
                    cin >> arr2[i][j]; 
                }
                
        }

        if(column1 == row2){
                int ans[row1][column2];
                    for(int i = 0; i < row1; i ++){
                        for(int j = 0; j <  column2; j ++){
                        //  cout << "i :" << i << "j :" << j << endl; 
                            // ans[i][j] += arr1[i][j]*arr2[j][i]; 
                            // cout << "ans[i][j]" << ans[i][j] << endl;
                            int sum = 0;   
                            for (int k = 0; k < column1; k++)
                            {
                                    sum += arr1[i][k]*arr2[k][j]; 
                            }
                            ans[i][j] = sum; 
                            
                        }
                    } 

                    cout << "answer is :"<< endl;

                    for (int i = 0; i < row1; i++)
                    {
                            for (int j = 0; j < column2; j++)
                            {
                                cout << ans[i][j] << " "; 
                            }
                            cout <<  endl;                        
                    }
        }
        else{
            cout << "Multiplication cannot be performed" << endl; 
            
        }
        
  return 0;
}