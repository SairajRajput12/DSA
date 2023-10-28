#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name 
    cout << "Dynamic memory allocation in 2-D Arrays" << endl; 
    int arr[5][5]; // in stack memory ---------> in static way 
    int *arrb = new int[10]; // in dynamic way for 2D array 
    int rows,column; 
    cin >> rows >> column; 
    // Dynamic memory ---------------> for 2D array. 
    int** arrc = new int*[column]; // array with size n and value is int* type. 
    for(int i = 0; i < rows; i ++){
            arrc[i] = new int[column]; 
    }

    // creation done: 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j ++)
        {
            cin >> arrc[i][j];  
        }
    }
    
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j ++)
        {
            cout << arrc[i][j] << " "; 
        }
        cout << endl;   
    }
    // releasing memory
    for (int i = 0; i < rows; i++)
    {
            delete[] arrc[i]; 
            cout << "memory freed succesfully" << endl;
    }

    delete []arrc;    
  return 0;
}
