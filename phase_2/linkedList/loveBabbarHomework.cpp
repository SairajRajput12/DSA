#include<bits/stdc++.h>
using namespace std; 

class Node{
public: 
    int data; 
    Node* next; 
    Node(int data){
        this -> data = data; 
    }

    ~Node(){
        int val = this -> data; 
        if(this-> next != NULL){
            delete next; 
            next = NULL; 
        }
        cout << "the node with data " << val << " is deleted succesfully!!" << endl;  
    }
};


void insertAtTail(Node* &tail,int data,int prev){
    if(tail == NULL){
        Node* temp = new Node(data); 
        temp -> next = temp; 
        tail = temp; 
        return; 
    }

    // if it is not null. 
    Node* NodeToBeInsert = new Node(data); 
    Node* temp = tail; 
    while(temp->data != prev){
        temp = temp -> next; 
    }
    // element found represented by temp node. 
    NodeToBeInsert -> next = temp -> next; 
    temp -> next =NodeToBeInsert; 
}

int print(Node* tail){
    int cnt = 0; 
    Node* temp = tail;      
    do{
        cout << tail-> data << " "; 
        tail = tail -> next; 
        cnt ++; 
    }while(tail  != temp);  
    cout << endl;

    return cnt;  
}

void split_them(Node* arr[],Node* tail,int len){
    int cnt = 1; 
    Node* temp = tail;  
    while(cnt < (len/2)){
        temp = temp -> next; 
        cnt ++; 
    }

    Node* an = temp; 
    cnt = 1; 
    while(an->next != tail){
        cnt ++; 
        an = an -> next; 
    }

    // creating first ll, 
    Node* secondFirst = temp -> next; 
    temp -> next = tail; 

    // creat second. 
    an -> next = secondFirst; 
    arr[0] = temp -> next; 
    arr[1] = an -> next; 
}
int main(){
     // enter the project name
    Node* tail = NULL; 
    insertAtTail(tail,1,1);
    insertAtTail(tail,2,1); 
    insertAtTail(tail,3,2); 
    insertAtTail(tail,4,3); 
    insertAtTail(tail,5,4); 
    insertAtTail(tail,6,5); 
    cout << "changa si" << endl; 

    // SPLIT THE ABOVE CIRCULAR LINKED LIST IN TWO CIRCULAR. 
    int len = print(tail); 
    Node* arr[2]; 
    split_them(arr,tail,len);  
    Node* first = arr[0]; 
    Node* second = arr[1]; 
    print(first); 
    print(second); 
  return 0;
}