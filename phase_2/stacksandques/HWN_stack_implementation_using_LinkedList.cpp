#include<bits/stdc++.h> 
using namespace std; 

// side 2 implementation:  
// 10 -> 20 -> 30 -> 40 -> NULL
// linked list: NULL 
// NULL -> 10 
// NULL -> 10 -> 20 
// NULL -> 10 -> 20 -> 30

/*
push: 
	ek asnar head -> bottom of stack 
	ek asnar top -> top of the stack 
	if(top == NULL){
		// special case: 
		top = new Node(data); 
		head = top; 
		return; 
	}
	else{
		if(cnt == size){
			cout << "stack overflow" << endl; 
		}
	}
	
pop: 
	take temp node iterate upto prev node of the top and assign it the prev value. 
	delete it. 
while other functions are same.
*/

class Node{
public: 
int data; 
Node* next; 
	Node(int data){
		this -> data = data; 
		this -> next = NULL; 	
	}
};

class Stack{
	Node* top;
	int size; 
	int cnt;  
	Node* bottom; 
public:
	Stack(int size){
		top = NULL;
		this -> size = size; 
		cnt = 0; 
		bottom = NULL; 
	}

	void push(int data){
		// ek naya node create karo then check whether the heap is full or not. 
		// first check overflow condition 
		if(top == NULL){
			Node* temp = new Node(data); 
			top = temp; 
			bottom = temp;
			return; 
		}
		else{
			Node* temp = new Node(data); 
			if(cnt == size){
				// stack overflow condition
				cout << "stack overflow" << endl; 
			}
			else{
				// tab hoga insertion 
				Node* temp = new Node(data); 
				top -> next = temp; 
				top = temp; 
				cnt ++; 
			}
		}
	}

	void pop(){
		// first check stack underflow condition.
		if(top == NULL){
			cout << "stack underflow condition" << endl;
			return;
		}
		else{
			Node* iter = bottom; 
			while(iter -> next != top){
				iter = iter -> next; 
			}  	
			Node* n =  top; 
			top = iter; 
			cnt --; 
			delete n;
		}
	}

	bool empty(){
		if(top == NULL){
			return true; 
		}
		else{
			return false; 
		}
	}

	int peek(){
		if(top == NULL){
			cout << "please insert the element" << endl; 
			return -1; 
		}
		else{
			return top -> data; 
		}

	}
};
// our linked list will be 10 <- 20 <- 30 <- 40 <- 50 <- 60 <- 70 <- 80 <- 90 <- 100 <- 110  <- NULL
// so stack will be looked like: 
// 10 20 30 40 50 60 70 80 90 100 110 
// where 110 is top and 10 is bottom
int main(){
	cout << "here is the implementation of stack using linked list"<< endl; 
	Stack s(10);
	cout << "is stack empty"<<s.empty()<< endl; 
	s.pop(); 
	s.push(10); 
	cout << s.peek()<< endl; 
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	s.push(100);
	s.push(110);
	s.push(120);
	cout << s.peek()<< endl; 
}






/*
#include<bits/stdc++.h> 
using namespace std; 

// linked list is the discreate type of data structures it does not stores the indexed elements. 
// require : node
//	   : tail : will be the top pointer.
//	   : size.

// side 1 implementation: 
// head is now the top of the stack. 
// stack empty: if top == NULL then it is empty. 
// stack full: theorotically  it never get full but practically it will full when the heap memory get exausted. 
// we can also add custome condition. 

class Node{
public: 
int data; 
Node* next; 
	Node(int data){
		this -> data = data; 
		this -> next = NULL; 	
	}
};

class Stack{
	Node* top;
	int size; 
	int cnt;  
public:
	Stack(int size){
		top = NULL;
		this -> size = size; 
		cnt = 0; 
	}

	void push(int data){
		// ek naya node create karo then check whether the heap is full or not. 
		// first check overflow condition 
		Node* temp = new Node(data); 
		if(cnt == size){
			// stack overflow condition
			cout << "stack overflow" << endl; 
		}
		else{
			// tab hoga insertion 
			temp -> next = top; 
			top = temp; 
			cnt ++; 
		}
	}

	void pop(){
		// first check stack underflow condition.
		if(top == NULL){
			cout << "stack underflow condition" << endl;
			return;
		}
		else{
			Node* n =  top; 
			top = top -> next; 
			cnt --; 
			delete n;  	
		}
	}

	bool empty(){
		if(top == NULL){
			return true; 
		}
		else{
			return false; 
		}
	}

	int peek(){
		if(top == NULL){
			cout << "please insert the element" << endl; 
			return -1; 
		}
		else{
			return top -> data; 
		}

	}
};
// our linked list will be 10 <- 20 <- 30 <- 40 <- 50 <- 60 <- 70 <- 80 <- 90 <- 100 <- 110  <- NULL
// so stack will be looked like: 
// 10 20 30 40 50 60 70 80 90 100 110 
// where 110 is top and 10 is bottom
int main(){
	cout << "here is the implementation of stack using linked list"<< endl; 
	Stack s(10);
	cout << "is stack empty"<<s.empty()<< endl; 
	s.pop(); 
	s.push(10); 
	cout << s.peek()<< endl; 
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	s.push(100);
	s.push(110);
	s.push(120);
	cout << s.peek()<< endl; 
}

*/ 


