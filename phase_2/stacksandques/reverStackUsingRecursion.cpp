void insertAtBottom(stack<int> &myStack,int x){
    // base case: when the stack is empty 
    if(myStack.empty()){
        // base case is reached
        myStack.push(x); 
        return; 
    }
    int m = myStack.top(); 
    myStack.pop();  
    insertAtBottom(myStack,x); 
    myStack.push(m); 
}


void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return; 
    }
    int num = stack.top(); 
    stack.pop(); 

    reverseStack(stack); 
    insertAtBottom(stack,num); 
}
