#include <bits/stdc++.h> 
using namespace std; 

int ans(int a,int b){

    if(a == 0) return b; 
    if(b == 0) return a; 

    while(a != b){
            if(a > b){
                a = a - b; 
            }

            else{
                b = b - a; 
            }
    }
    return a; 
}

int main(int argc, char const *argv[])
{
    cout << "This is problem number 2: Finding the GCD and HCF" << endl; 
    // gcd = gcd(a-b,b) ot gcd(a%b,b) 
    // gcd(72,24) ---> gcd(48,24) ---> gcd(24,24) ---> gcd(0,24) 
    int a,b; 
    cin >> a >> b; 
    int ans = gcd(a,b); 
    cout << "The GCD of " << a << " & " << b <<" is: " << ans << endl; 
    return 0;
}
