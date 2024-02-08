#include<bits/stdc++.h> 
using namespace std; 

int getAdd(int a,int b){return a+b; }
int getSub(int a,int b){return a-b;}
int getMul(int a,int b){return a*b;}
float  getDiv(int a,int b){return a/b;}

int main(){
	// calculator 

	// addition:
	int a,b; 
	cin >> a >> b; 
	cout << "This is the basic calculator" << endl; 
	cout << "Addition of 2 numbers are: " << getAdd(a,b)<<endl; 
	cout << "Substraction of 2 numbers are: "<< getSub(a,b) << endl; 
	cout << "Multiplication of 2 numbers are: "<<getMul(a,b)<<endl; 
	cout << "Division of 2 numbers are: " << getDiv(a,b)<<endl; 
	
	return 0; 
}
