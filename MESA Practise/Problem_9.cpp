#include<bits/stdc++.h> 
using namespace std; 


bool isItPrime(int x){
	if(x == 0 or x == 1){
		return false; 
	}

	for(int i = 2; i <= (x/2); i ++){
		if(x%i == 0){
			return false; 
		}
	}
	
	return true; 
}

bool isItWhole(int x){
	for(int i = 1; i <= 5; i ++){
		if(x%i != 0){
			return false; 
		}
	}

	return true; 
}

int main(){
	int n = 25; 
	int sumP = 0; 
	int sumW = 0; 
	for(int i = 1; i <= 25; i ++){
		if(isItPrime(i)){
			sumP += i; 
		}
		
		if(isItWhole(i)){
			sumW += i; 
		}
	}

	cout << "sum of whole numbers are: "<<sumW << endl; 
	cout << "sum of prime numbers are: "<<sumP << endl; 

	return 0; 
}
