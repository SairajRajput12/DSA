#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int data; 
    Node* next; 
    
    Node(int data){
        this->data = data; 
        this->next = NULL; 
    }

    // destructor: 
    ~Node(){
        int value = this -> data; 
        if(this -> next != NULL){
            delete next;  
            this -> next = NULL; 
        }

        cout << " memory is free for node with data " << data << endl; 
    }

};

// &head -> original linked list mein changes ho so refrence pass kiya. 

void InsertAtHead(Node* &head,int data){
    // create new node. 
    Node* temp = new Node(data); // new node created 
    temp -> next = head; // i did error while making it as: temp -> next = temp; 
    head = temp; 
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" "; 
        temp = temp->next; 
    }
    cout << endl; 
}

void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data); 
    tail -> next = temp; 
    tail = tail -> next;  
}

// insertion at middle

void insertInMiddle(Node* &tail,Node* &head,int data,int position){ 
    if(position == 1){
        InsertAtHead(head,data); 
        return; 
    }

    cout << "Hello" << endl; 
    Node* temp = head; 
    int i = 0; 
    while(i < (position - 1)){
        temp = temp -> next; 
        i ++; 
    }

    if(temp -> next == NULL){
        InsertAtTail(tail,data); 
        return; 
    }

    Node* nodeToInsert = new Node(data); 
    nodeToInsert -> next = temp -> next; 
    temp -> next = nodeToInsert;  
}

// deletion in the linked list: 

// case 1: by using position: 
void deleteNodeP(int position,Node* &head,Node* &tail){
    if(position == 1){
        // deleting first node: 
        Node* temp = head; 
        head = head -> next;  
        temp -> next = NULL; 
        delete temp; 
    }
    else{
        // deleting any middle or last node: 
        Node* curr = head; 
        Node* prev = NULL; 
        int cnt = 1; 
        while(cnt < position){
            prev = curr; 
            curr = curr -> next;   
            cnt ++; 
        }

        prev -> next = curr -> next;   
        curr -> next = NULL; 
        delete curr;  
    }
}

// homework: 
void deleteNodeV(Node* &head,Node* &tail,int data){
    if(head -> data == data){
        Node* temp = head; 
        head  = head -> next;  
        temp -> next = NULL; 
        delete temp; 
    }
    else{
        Node* curr = head; 
        Node* prev = NULL; 
        int cnt = 1; 
        while(curr -> data != data){
            prev = curr; 
            curr = curr -> next; 
        }

        prev -> next = curr -> next; 
        curr -> next = NULL; 
        delete curr; 
    }
}




int main(){
     // enter the project name 
     Node* node1 = new Node(10); 
    //  cout << node1 -> data << endl;  // 10 
    //  cout << node1 -> next << endl;  // 0 
     
     // head pointed to node1 
     Node* head = node1;  
     Node* tail = node1; 
     print(head);  
     InsertAtHead(head,12); 
     print(head); 
     InsertAtHead(head,14); 
     print(head); 
     InsertAtHead(head,69); 
     print(head);  

     InsertAtTail(tail,69);  // 69 14 12 10 69
     print(head); 
     InsertAtTail(tail,69); 
     print(head); 

     insertInMiddle(tail,head,65,3); 
     print(head); 

     insertInMiddle(tail,head,67,7); 
     print(head);  

     deleteNodeP(8,head,tail); 
     print(head); 
     deleteNodeV(head,tail,69);  
     
     print(head); 

     
  return 0;
}
