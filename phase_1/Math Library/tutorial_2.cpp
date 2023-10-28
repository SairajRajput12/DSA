#include <bits/stdc++.h> 
using namespace std; 
int main(){
    cout << "This is tutorial number 2 of Math library Question number 1:count primes " << endl; 
    cout << "We are going to use sieve of eratosthenes theorem" << endl; 
    // complexity: O(n*(log(log(n)))); 
    int n ; 
    cout << "Enter the integer number " << endl; 
    cin >> n; 
    int cnt = 0; 
            vector < bool > prime(n+1,true); 
            prime[0] = prime[1] = false; 

            for(int i = 2; i < n; i ++){
                if(prime[i]){
                    cnt ++; 
                    for(int j = 2*i; j < n;j = j + i){
                        prime[j] = 0; 
                    }
                }
            }
        cout << "There are " << cnt << " number of the prime number in the range of 1 to " << n << endl;     

    
    return 0; 
}