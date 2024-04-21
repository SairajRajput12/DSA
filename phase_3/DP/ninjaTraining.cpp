#include<bits/stdc++.h>
using namespace std;

int f(int day,int ind,vector<vector<int>> &points,vector<vector<int>> &dp){
    if(day == 0){
        int maxi = 0; 
        for(int i = 0; i < 3; i ++){
            if(i != ind){
                maxi = max(maxi,points[day][i]);
            }
        }
        return maxi; 
    }

    if(dp[day][ind] != -1){
        return dp[day][ind]; 
    }

    int maxi = 0; 
    for(int i = 0; i < 3; i ++){
        if(i != ind){
            int point = points[day][i] + f(day-1,i,points,dp); 
            maxi = max(maxi,point); 
        }
    }

    dp[day][ind] = maxi; 
    return maxi; 
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here. 

    // dp with memomisation
    // vector<vector<int>> dp(n,vector<int> (4,-1)); 
    // return f(n-1,3,points,dp); 

    // dp with tabulation 
    
}

int main(){
     // enter the project name
  return 0;
}