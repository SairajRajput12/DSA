#include<bits/stdc++.h> 
using namespace std; 

bool isItPerfect(int num){
	for(int i = 1; i <= num; i ++){
		if(i*i == num){
			return true; 
		}
	}

	return false; 
}

int main(){
	int num; 
	cin >> num; 

	if(isItPerfect(num)){
		cout << "yes it is perfect number" << endl; 
		return 0; 
	}

	cout << "No the given number is not a perfect number" <<endl; 
	

	return 0; 
}
