#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val = this -> data; 
        if(next != NULL){
            delete next; 
            next = NULL; 
        }
        
        cout << "Node with value : "<< val << " deleted succesfully " << endl;    
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* h1 = new Node(data);
    if (head == NULL) {
        head = h1;
        tail = h1;
    }
    else {
        h1->next = head;
        head->prev = h1;
        head = h1;
    }
}

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);
    if (tail == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtAnyPosition(Node*& head, Node*& tail, int data, int position) {
    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int c = 1;
    while (c < (position - 1)) {
        temp = temp->next;
        c++;
    }
    if (temp->next == NULL) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* temp1 = new Node(data);
    temp1->prev = temp;
    temp1->next = temp->next;
    temp->next = temp1;
    temp->next->prev = temp1;
}

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node* temp = head; 
        head -> next -> prev = NULL; 
        head  = head-> next; 
        temp -> next = NULL; 
        delete temp; 
    }
    else{
        // middle or last node
        Node* curr = head; 
        Node* prev = NULL; // represents previous node
        int cnt = 1; 
        while(cnt < position){
            prev = curr; 
            curr = curr -> next; 
            cnt ++; 
        }
        curr -> prev = NULL; // shows previous pointer of node from Node class
        prev -> next = curr -> next; 
        curr -> next = NULL; 
        delete curr; 
    }
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head, tail, 11);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(head, tail, 13);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(head, tail, 8);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtTail(head, tail, 25);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtAnyPosition(head, tail, 100, 2);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtAnyPosition(head, tail, 101, 1);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtAnyPosition(head, tail, 102, 7);
    print(head);
    cout << "head  " << head->data << endl;
   
    cout << "tail  " << tail->data << endl;
    deleteNode(head,1); 
    print(head); 
    cout << "Sabkuch changa si !!" << endl;
    return 0;
   }
    
    
    
    
    
    
    
    
    
    
