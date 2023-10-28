#include<bits/stdc++.h> 
using namespace std; 


// bigger problem = n*smaller problem 
// base case: return mandatory 
// why important ?? - stack overflow.

/*
int fact(int x){
	if(x == 0){
		return 1; 
	}
	
	int smallerProblem = fact(x-1); 
	int biggerProblem = x; 
	return smallerProblem*biggerProblem; 

}


int main(){
int n; 
cin >> n; 
int ans = fact(n); 

cout << "Answer is : " <<  ans << endl; 
return 0;  
}
*/ 

// another example 
int ans(int n){
	if(n == 0){
		return 1; 
	}
	
	// recursive relation 
	int smallerProblem = ans(n-1); 
	int boggerProblerm = 2*smallerProblem; 
	
	return  boggerProblerm; 
}

// head recursion 
/*
void print(int n){
	if(n == 0){
		return; 
	}
	
	cout << n << endl; 
	print(n-1); 
}
*/ 

void print(int n){
	if(n == 0){
		return; 
	}
	print(n-1); 
	cout << n << endl; 
}

int main(){
	// int n; 
	// cin >> n; 
	
	// int f = ans(n); 
	// cout << f << endl; 
	// printing all 5 digits from 1 to n
	
	int n; 
	cin >> n; 
	print(n); 	
	return 0;	
}



