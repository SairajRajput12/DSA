#include<bits/stdc++.h>
using namespace std; 

class Node{

public: 
int data; 
Node* next; 
    Node(int data){
        this -> next = NULL; 
        this -> data = data; 
    }

    ~Node(){
        cout << "memory has been free for the data = " << this -> data << endl; 
    }
};

class Queue{
public: 
    Node* front; 
    Node* rear; 
    int size; 
    int cnt; 
    
    Queue(int size){
        front = NULL; 
        rear = NULL; 
        this -> size = size; 
        cnt = 0; 
    }

    // insertion operation 
    void push(int data){
        // check whether the queue is full or not 
        if(cnt >= size){
            cerr << "Queue overflow has occured cannot insert elements" << endl; 
            return; 
        }
        
        // if the Queue is empty means there is single node to insert 
        Node* nodeToInsert = new Node(data); 
        if(cnt == 0){
            front = nodeToInsert; 
            rear = nodeToInsert; 
            cnt ++; 
        }
        else{
            // means it is not single node  
            rear-> next = nodeToInsert; 
            rear = nodeToInsert;  
            cnt ++;     
        }
    }

    void pop(){
        cout << "inside desicion statement" << endl; 
        if(cnt == 0){
            // means no element is entered means it is empty 
            cerr << "we cannot insert elements in this queue" << endl; 
            return; 
        }
        else if(cnt == 1){
            // means it contains single element 
            front = NULL; 
            rear = NULL; 
            cnt = 0; 
        }
        else{
            Node* nodeToDelete = front; 
            front = front -> next; 
            nodeToDelete -> next = NULL; 
            delete(nodeToDelete); 
            cnt --; 
        }
    }

    void display(){
        cout << "inside display function " << endl; 
        Node* iter = front; 
        while(iter != NULL){
            cout << iter -> data << " "; 
            iter = iter -> next; 
        }
        cout << endl; 
    }

    int Front(){
        if(cnt == 0){
            return -1; 
        }
        else{
            return front -> data; 
        }
    }

};
int main() {
    // Create a Queue of size 5
    Queue myQueue(5);

    // Push elements into the Queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);
    myQueue.display(); 

    // Try pushing more elements than the size of the Queue
    myQueue.push(6);
    myQueue.display(); 

    // Print the front element of the Queue
    cout << "Front element: " << myQueue.Front() << endl;

    // Pop an element from the Queue
    myQueue.pop();

    // Print the front element again after popping
    cout << "Front element after pop: " << myQueue.Front() << endl;

    return 0;
}
