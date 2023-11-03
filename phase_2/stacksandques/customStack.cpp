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
