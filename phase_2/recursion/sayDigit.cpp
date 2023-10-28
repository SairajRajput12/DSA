#include<bits/stdc++.h> 
using namespace std; 

void sayDigit(int n,string arr[]){
	if(n == 0){
		return ;
	}
	
	int digit = n % 10; 
	n = n / 10; 
	sayDigit(n,arr); 
	cout << arr[digit] << " "; 
	
}


int main(){
	int input; 
	cin >> input; 
	string arr[10] = {"zero","one","two","three","four","five","six","seven","eigth","nine"}; 
	cout << endl; 
	sayDigit(input,arr); 
	return 0; 
}
