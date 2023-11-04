


// approach 1: using dynamic array
// class MinStack {
// private:
//     vector<int> arr;
//     vector<int> minStack; // Additional stack to keep track of minimum values
// public:
//     MinStack() {}

//     void push(int val) {
//         arr.push_back(val);
//         if (minStack.empty() || val <= minStack.back()) {
//             minStack.push_back(val);
//         }
//     }

//     void pop() {
//         if (!arr.empty()) {
//             if (arr.back() == minStack.back()) {
//                 minStack.pop_back();
//             }
//             arr.pop_back();
//         }
//         else{
//             cerr << "Error : stack underflow "<< endl; 
//         }
//     }

//     int top() {
//         return arr.empty() ? -1 : arr.back();
//     }

//     int getMin() {
//         return minStack.empty() ? -1 : minStack.back();
//     }
// };


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 // approach 2: using linked list 
 /*
 class Node{
public: 
int data; 
Node* next; 
	Node(int data){
		this -> data = data; 
		this -> next = NULL; 	
	}
};

class MinStack {
public:
Node* topElement; 
int cnt; 
    MinStack() {
        cnt = 0; 
        topElement = NULL; 
    }
    
    void push(int val) {
        if(topElement == NULL){
            Node* temp = new Node(val); 
            topElement = temp; 
            cnt ++; 
        }
        else{
            Node* newNode = new Node(val); 
            newNode -> next = topElement; 
            cnt ++; 
            topElement = newNode; 
        }
    }
    
    void pop() {
        if(topElement == NULL){
            cerr << "Error: stack underflow has occured " << endl; 
        }
        else{
            Node* nodeToDelete = topElement; 
            topElement = topElement -> next; 
            cnt --; 
            delete nodeToDelete;
        }
    }
    
    int top() {
        return topElement->data; 
    }
    
    int getMin() {
        Node* iter = topElement; 
        int min = INT_MAX; 
        while(iter != NULL){
            if(min > iter -> data){
                min = iter -> data; 
            }
            iter = iter -> next; 
        }
        return min; 
    }
};
 */


 // approach 2: another design
/*
class MinStack {
private:
    struct Node {
        int data;
        int minVal;
        Node* next;
        Node(int val, int min) : data(val), minVal(min), next(nullptr) {}
    };
    
    Node* topElement;

public:
    MinStack() : topElement(nullptr) {
    }

    void push(int val) {
        if (topElement == nullptr) {
            topElement = new Node(val, val);
        } else {
            int minVal = min(val, topElement->minVal);
            Node* newNode = new Node(val, minVal);
            newNode->next = topElement;
            topElement = newNode;
        }
    }

    void pop() {
        if (topElement) {
            Node* toDelete = topElement;
            topElement = topElement->next;
            delete toDelete;
        }
    }

    int top() {
        return topElement ? topElement->data : -1;
    }

    int getMin() {
        return topElement ? topElement->minVal : -1;
    }
};


*/
