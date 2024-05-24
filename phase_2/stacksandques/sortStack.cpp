#include <bits/stdc++.h> 
using namespace std;

void sortedInsert(stack<int> &stack,int m){
	if(stack.empty()){
		stack.push(m);
		return; 
	}

	if(stack.top() > m){
		int n = stack.top(); 
		stack.pop(); 
		sortedInsert(stack,m); 
		stack.push(n); 
	}
	else{
		stack.push(m); 
	}
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return; 
	}

	int m = stack.top(); 
	stack.pop(); 
	sortStack(stack); 
	sortedInsert(stack,m); 
}

int main()
{
	/* code */
	return 0;
}

