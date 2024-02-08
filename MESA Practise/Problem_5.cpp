#include<bits/stdc++.h> 
using namespace std; 

int main(){
	float a,b; 
	a = 10.73;
	b = -55; 
	swap(a,b);
	// task 1:  
	cout << "a => "<< a << "b=> "<< " "<< b <<  endl; 

	// task 2:
	int cnt = 1; 
	while(cnt <= 3){
		b = b*a; 
		cnt ++; 
	}

	cout << b<< endl; 

	return 0; 
}
