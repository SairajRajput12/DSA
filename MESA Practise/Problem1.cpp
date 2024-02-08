#include<bits/stdc++.h>
using namespace std;

// write a programme to calculate the largest numbers between 1,2,3 and solve LCM. 
int main(){
    int a,b,c; 
    cin >> a >> b >> c; 

    int minimum = min(a,min(b,c)); 
    
     // enter the project name
     
     // Find the LCM of a,b,c 
    int maximum = max(a,max(b,c)); 
    
    int lcm = 1;
    int i = maximum; 
    while(i >= minimum){

    	if(a%i == 0 and b%i == 0 and c%i == 0){
    		lcm = lcm*i; 
    	}
    	i --; 
    }
    
    cout << "minimum element in a,b,c are " << minimum << endl; 
    cout << "Lcm of a,b,c are : " << lcm << endl; 
    
  return 0;
}
