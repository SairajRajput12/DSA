#include<bits/stdc++.h> 
using namespace std; 

int  getFact(int num){
	if(num == 0 or num == 1){
		return 1; 
	}
	int fact = 1; 
	fact = num*getFact(num-1);  
	return fact; 
}

int main(){
	int num; 
	cin >> num; 
	int fact = getFact(num);
	cout << "factorial Of A Given Number is : " << fact <<endl; 
	return 0; 
}
