#include<bits/stdc++.h>
using namespace std; 

int main(int argc, char const *argv[])
{
    cout << "This is modulo artithmetics" << endl; 
    /*
    1] (a mod m)+(b mod m)  mod m=a+b  mod m

    2] (a mod m)−(b mod m)  mod m=a−b  mod m

    3] (a mod m)⋅(b mod m)  mod m=a⋅b  mod m    
    */

    // print ans in 10^9 + 7 
    // 1] (a+b)%m = a%m + b%m 
    // 2] a%m - b%m = (a-b)%m 
    // 3] a%m *b%m = (a*b)%m 
    int x = 3,n = 1,m = 2; 
	// Write your code here.
	int res = 1; 
	while(n > 0){ 
		// odd 
		if(n & 1){
			// odd 
			res = (1LL * (res) * (x)%m)%m; 
		} 
		x = (1LL * (x)%m * (x)%m)%m; 
		n = n >> 1; 
	}

	cout << "Answer is : " << res << endl; 

    return 0;
}
