#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n <= 1){
            return n; 
        }

        if(dp[n] != -1){
            return dp[n]; 
        }

        dp[n] = solve(n-1,dp) + solve(n-2,dp); 
        return dp[n];
    }


    int fib(int n) {
        // using recursion 
        if(n == 0 or n == 1) return n; 
        return fib(n-2) + fib(n-1); 
        // Time complexity: O(N^2).

        // using dynamic programming 
        vector<int> dp(n+1,-1); 
        return solve(n,dp); 
    }
};

int main(){
     // enter the project name
  return 0;
}
