#include<bits/stdc++.h>
using namespace std;


// using array
class Stack{
public: 
    int top; 
    int *arr; 
    int size; 

    Stack(int n){
        top = -1;
        size = n;  
        arr = new int[n];         
    }

    void push(int val){
        if(size - top > 1){
			top ++; 
			arr[top] = val; 
		}
        else{
            cerr << "Stack overflow" << endl; 
        }
    }

    void pop(){
        if(top >= 0){
            top --; 
            return; 
        }
        cerr << "stack underflow has occured" << endl; 
        return; 
    }

    int topI(){
        if(top >= 0 and top < size){
            return arr[top]; 
        }

        return -1; 
    }

    bool isEmpty(){
        return (top == -1); 
    }
};

int main(){
     // enter the project name
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
    cout << st.topI()<< endl; 
	st.pop(); 
	cout << st.topI()<< endl; 
	st.pop(); 
	cout << st.topI() << endl;
  return 0;
}