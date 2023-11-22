#include<bits/stdc++.h>
using namespace std;

class Queue{
public: 
int *arr; 
int rear; 
int front; 
int size; 

    Queue(int size){
        this -> size = size; 
        rear = 0;
        front = 0; 
        arr = new int[size]; 
    }

    void push(int x){
        if(rear == size){
            cerr << "Queue is full " << endl; 
        }
        else{
            arr[rear] = x; 
            rear ++; 
        }
    }

    int dequeue(){
        if(front == rear){
            return -1; 
        }
        else{
            int ans = arr[front]; 
            arr[front] = -1; 
            front ++; 
            if(front == rear){
                front = 0; 
                rear = 0; 
            }
            return ans; 
        }
    }

    int Front(){
        if(front == rear){
            return -1; 
        }
        else{
            return arr[front]; 
        }
    }
};


int main() {
    // Testing the Queue class
    Queue myQueue(5);

    // Pushing elements into the queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // Dequeue elements from the queue
    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;

    // Front of the queue
    cout << "Front of the queue: " << myQueue.Front() << endl;

    // Pushing more elements into the queue
    myQueue.push(4);
    myQueue.push(5);

    // Front of the queue after pushing more elements
    cout << "Front of the queue: " << myQueue.Front() << endl;

    return 0;
}