#include<bits/stdc++.h>
using namespace std;


// implementation using class

class Stack{
public:
int *arr; 
int top; 
int size; 
	Stack(int size){
		this->size = size; 
		arr = new int[size]; 
		top = -1; 
	}
	void push(int element){
		// is space avavilable 
		if(size - top > 1){
			top ++; 
			arr[top] = element; 
		}
		else{
			cout << "Stack overflow" << endl; 
		}
	}

	void pop(){
		// check whether element is avavilable or not 
		if(top >= 0){
			top --; 
		}
		else{
			cout << "stack underflow" << endl; 
		}
	}

	int peek(){
		if(top >= 0 && top < size){
			return arr[top]; 
		}
		else{
			cout << "stack is empty" << endl; 
			return -1; 
		}
	}

	bool empty(){
		if(top == -1){
			return true; 
		}
		return false; 
	}

};




int main(){
	cout << "stack using class " << endl; 
	cout << "exit" << endl;
	Stack st(5); 
	st.push(22); 
	st.push(43); 
	st.push(44);
	st.push(45); 
	st.push(46); 
	st.push(47); 
	st.push(48); 
	cout << st.peek()<< endl; 
	st.pop(); 
	cout << st.peek()<< endl; 
	st.pop(); 
	cout << st.peek()<< endl;


}








/*
// code using stl library. 
int main(){
	// creation of stack
	stack<int> s;
	cout << "stack is declared and it's library included succesfully" << endl;

	// push operation
	s.push(2);
	s.push(3);

	// pop operation
	s.pop();
	cout << s.top() << endl;

	if(s.empty()){
		cout << "stack is empty" << endl;
	}
	else{
		cout << "stack is not empty" << endl;
	}

	return 0;
}
*/

