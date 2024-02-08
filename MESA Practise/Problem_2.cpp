#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int year; 
	cout << "enter the leap year" << endl; 
	cin >> year; 
	
	if(year%4 == 0){
		cout << "yes given year is a leap year" << endl; 
		return 0; 
	}
	
	cout << "Given year is a non-leap year" << endl; 
	return 0; 
}
