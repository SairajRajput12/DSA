#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
     cout <<"exit point of the matrix:"<< endl; 
     /*
            0   0   1   0
            1   0   0   0   
            0   0   0   0   
            1   0   1   0   

            this matrix represents the maze.The man starts travelling in west side in horizontal direction and make his ways as follows: 
            1] if he encounters with 0 then he go straight otherwise turn by 90 degree right turn.
            tell matrix ka exit point kya hoga ?? 
            ans: i = 1,j = 3.      
     */

    int row,column,ans_row = 0,ans_column = 0,dir = 0; //  0 - e, 1 - s,2 - w and 3 - n.  
    cin >> row >> column; 

    int arr[row][column]; 
    for(int i = 0; i < row; i ++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j]; 
        }        
    }
    /*
        solution: 
            east --------> i , j = j +1; 
            south -------> i + 1, j; 
            west -------> i, j - 1; 
            north -------> i - 1,j; 
    
    */

    while(true){ 
        dir = (dir + arr[ans_row][ans_column])%4; 
        if(dir == 0){// east
            ans_column ++; 
        }
        else if(dir == 1){ //south 
            ans_row ++; 
        }

        else if(dir == 2){// west
            ans_column --; 
        }

        else if(dir == 3){// north
            ans_row --; 
        }

        if(ans_row < 0){
            ans_row ++; 
            break; 
        }
        else if(ans_column < 0){
            ans_column ++; 
            break; 
        }
        else if(ans_row == row){
            ans_row --; 
            break; 
        }
        else if(ans_column == column){
            ans_column --; 
            break; 
        }
    } 
    cout << "answer :" << ans_row << " " << ans_column << endl; 
    cout << "sab kuch changa si "<< endl; 
  return 0;
}