#include <bits/stdc++.h> 
void solve(stack<int> &myStack,int x){
    // base case: when the stack is empty 
    if(myStack.empty()){
        // base case is reached
        myStack.push(x); 
        return; 
    }
    int m = myStack.top(); 
    myStack.pop();  
    solve(myStack,x); 
    myStack.push(m); 
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here. 
    solve(myStack,x); 
    return myStack; 
}
