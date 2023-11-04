class CustomStack {
public:
int *arr; 
int top; 
int maxSize; 

    CustomStack(int maxSize) {
        top = -1; 
        this->maxSize = maxSize; 
        arr = new int[maxSize];         
    }
    
    void push(int x) {  
        // check the overflow condition 
        if(maxSize - top > 1){
            // not overflow 
            top ++;  
            arr[top] = x; 
        }
        else{
            // then print error message 
            cerr << "error: stack overflow has occured" << endl; 
        }
    }
    
    int pop() {
        // check underflow condition 
        if(top == -1){
            // it is underflow condition 
            cerr << "error: stack underflow has occured beacuse the given stack is empty " << endl; 
            return -1; 
        }
        else{
            int a = arr[top]; 
            top --; 
            return a; 
        }
    }
    
    void increment(int k, int val) {
        // 1 2 3 4 -> top 
        // 2 case : 1] when the k > maxSize 
        //          2] when the k < maxSize 
        if(k > maxSize){
            int i = 0; 
            while(i < maxSize){
                arr[i] += val; 
                i ++; 
            }
        }
        else{
            int i = 0; 
            while(i < k){
                arr[i] += val; 
                i ++; 
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
 
 
/*
class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
class CustomStack {
    Node* top;
    int size;
    int cnt;
public:
    CustomStack(int size) {
        top = nullptr;
        this->size = size;
        cnt = 0;
    }

    void push(int data) {
        // Check for overflow condition
        if (cnt == size) {
            cout << "Stack overflow" << endl;
            return;
        }

        // Create a new node
        Node* temp = new Node(data);

        if (top == nullptr) {
            top = temp;
        } else {
            temp->next = top;
            top = temp;
        }

        cnt++;
    }

    int pop() {
        // First check for the stack underflow condition.
        if (top == nullptr) {
            cout << "Stack underflow condition" << endl;
            return -1;
        } else {
            Node* n = top;
            top = top->next;
            cnt--;
            int m = n->data;
            delete n;
            return m;
        }
    }

    bool empty() {
        return top == nullptr;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Please insert an element" << endl;
            return -1;
        } else {
            return top->data;
        }
    }

    void increment(int k, int val) {
        Node* tar = top;

        if (k >= size) {
            // Increment all elements
            while (tar != nullptr) {
                tar->data += val;
                tar = tar->next;
            }
        } else {
            // Find the k-th node
            for (int i = 0; i < (k-1); i++) {
                if(tar == NULL){
                    return; 
                }
                tar = tar->next;
            }

            // Increment elements from k onwards
            while (tar != nullptr) {
                tar->data += val;
                tar = tar->next;
            }
        }
    }
};


*/
