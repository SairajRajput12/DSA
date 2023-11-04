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

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
