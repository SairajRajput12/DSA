#include<bits/stdc++.h>
using namespace std; 

int modularExponantion(int a,int b, int m){
        // (x^n)%m. 
        int res = 1; 
        while(b > 0){
                if(b & 1){
                    // odd 
                    res = ((res) * (a)%m)%m; 
                }
                a = ((a)%m * (a)%m)%m; 
                b = b >> 1; // divided by 2. (right shift matlab divided by 2 hota hai). 

        }
        return res; 
}

int ModularFactorial(int n,int p){
    if(n >= p){
        return 0; 
    }
    int res  = 1; 
    for (int i = 1; i <= n ; i++)
    {
            res = (res * i)%p; 
    }
    return res; 
}
int main(){
     // enter the project name 
    //  (a + b) %m  = a % m + b % m. 
    // e.g find a^b = ? 
    // a^b -----> (a ^ (b/2))^2. if b is even. 
    //      |---> (a ^ (b/2)^2) * a. if b is odd. 
    // so we will go for iterative way: 
    // x,n,m ----> (x^n) % m. 
    // O(log(n)). ---> Time Complexity. 
    //  cout << modularExponantion(3,1,2) << endl; 
    cout << ModularFactorial(25,29) << endl; 
  return 0;
}