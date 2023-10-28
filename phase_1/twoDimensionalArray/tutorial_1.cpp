#include<iostream>
using namespace std; 

bool isPresent(int arr[2][5],int target,int m,int n){
    for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            /* code */
            if(target == arr[i][j]){
                return true; 
            }
        }
        // cout << endl;        
    }

    return false; 
}

int main(){

    cout << "this is tutorial number 1: two dimensional array"<<endl; 
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,15}; 
    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{0,0,0,0,100000},{0,0,0,0}}; // way to initialise the 2D array directly
    // for (int  i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         /* code */
    //         cout << arr[i][j]<<" "; 
    //     }
    //     cout << endl;
        
    // }
    // PROBLEM 1: Linear search in 2D Array. 
    // int target;
    // cout << "enter the target element"<< endl;
    // cin >> target; 
    // if(isPresent(arr,target,2,5)){
    //     cout << "element found" << endl;
    // } 

    // else{
    //     cout << "Not Found" << endl;
    // }


    // PROBLEM 2: ROW-WISE SUM & PROBLEM 3: Largest row sum 
    int sum = 0,maxi = INT8_MIN,index = 0; 
     for (int  i = 0; i < 5; i++)
    {
        sum = 0; 
        for (int j = 0; j < 5; j++)
        {
            /* code */
            // cout << arr[i][j]<<" ";
            sum += arr[i][j];  
            
        }
            // cout << "The sum at :"<<i<<"column is :"<<sum<<endl;
            if(sum > maxi){
                index = i; 
            }
            maxi = max(maxi,sum); 
        // cout << endl;
    }

    cout << "The largest row sum is :" << maxi <<"which is at row number :"<<(index + 1)<< endl;



    cout << "Everything is well..."<<endl; 

    return 0;
}