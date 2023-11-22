class MyCircularQueue {
    int *arr; 
    int front; 
    int rear; 
    int size; 
public:
    MyCircularQueue(int k) {
        size = k; 
        arr = new int[size]; 
        rear = -1; 
        front = -1; 
    }
    
    bool enQueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (front == rear + 1 )) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }
    
    bool deQueue() {
        if(front == -1){
            cerr << "queue is empty" << endl; 
            return false; 
        }
        
        if(front == rear){
            // it contains single element
            front = rear = -1; 
        }
        else if(front == (size-1)){
            front = 0; 
        }
        else{
            front ++; 
        }
        return true; 
    }
    
    int Front() {
        if(front == -1){
            return -1; 
        }
        else{
            return arr[front]; 
        }
    }
    
    int Rear() {
        if(rear == -1){
            return -1; 
        }
        else{
            return arr[rear]; 
        }
    }
    
    bool isEmpty() {
        if(rear == -1 && front == -1){
            return true; 
        }
        return false; 
    }
    
    bool isFull() {
        if((front == 0 && rear == (size-1)) || (front == rear + 1 )){
            return true; 
        }
        return false; 
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
