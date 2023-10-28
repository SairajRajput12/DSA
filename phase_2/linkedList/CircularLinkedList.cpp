#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int data; 
    Node* next; 

    Node(int data){
        this-> data = data; 
        this -> next = NULL; 
    }

    ~Node(){
        int val = this -> data; 
        if(this-> next != NULL){
            delete next; 
            next = NULL; 
        }

        cout << "memory is freed for data = "<< val << endl; 
    }
};

void print(Node* tail){
    Node* temp = tail;      
    
    do{
        cout << tail-> data << " "; 
        tail = tail -> next; 
    }while(tail  != temp);  
    cout << endl; 
}

void insertAtHead(Node* &tail,int element,int data){
    if(tail == NULL){
        // empty list
        Node* temp = new Node(data); 
        tail = temp; 
        temp -> next = temp; // circular 
    }
    else{
        // non empty element 
        // assuming that element is present in the list. 
        Node* curr = tail; 

        while(curr->data != element){
            curr = curr -> next; 
        }
        
        // element found-> curr representing element wala node
        Node* temp = new Node(data); 
        temp -> next = curr -> next; 
        curr -> next = temp;        
    }
}

void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout << "List is empty please check again "<< endl; 
    }

    else{
        // non empty 
        // assuming that value is present in the linked list. 
        Node* prev = tail; 
        Node* curr = prev -> next; 
        while(curr -> data == value){
            prev = curr; 
            curr = curr -> next; 
        }
        prev -> next = curr -> next; 
        if(tail == curr){
            tail = prev; 
        } 
        curr -> next = NULL; 
        delete curr; 
    }
}


int main(){
    // enter the project name
    Node* tail = NULL; 
    insertAtHead(tail,5,3); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl; 
    insertAtHead(tail,3,5); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    insertAtHead(tail,5,7); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    insertAtHead(tail,7,9); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    insertAtHead(tail,5,6); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    insertAtHead(tail,9,10); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    insertAtHead(tail,3,4); 
    print(tail); 
    cout << "tail  data  : " << tail -> data << endl;
    
    deleteNode(tail,4); 
    print(tail); 
  return 0;
}