#include<bits/stdc++.h>
using namespace std;

// singly linked list. 

// class Node{
// public: 
//     int data; 
//     Node* next; 
//     Node(int data){
//         this-> data = data; 
//         this-> next = NULL; 
//     }

//     ~Node(){
//         int value = this -> data; 
//         if(this -> next != NULL){
//             delete next;  
//             this -> next = NULL; 
//         }

//         cout << " memory is free for node with data " << data << endl; 
//     }
// };

// void insertAtHead(Node* &head,int data){
//         Node* temp = new Node(data); 
//         temp -> next = head; 
//         head = temp; 
// }

// void print(Node* &head){
//     Node* temp = head; 
//     while(temp -> next != NULL){
//         cout << temp -> data << " ";  
//         temp = temp -> next; 
//     }
//     cout << endl; 
// }


// void insertAtTail(Node* &tail,int data){
//     Node* temp = new Node(data); 
//     if (tail == NULL) {
//         // If the list is empty, set both head and tail to the new node
//         tail = temp;
//         return;
//     }

//     tail -> next = temp; 
//     tail = tail -> next; 
// }

// void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
//     if(position == 1){
//         insertAtHead(head,data); 
//         return; 
//     }
//     Node* temp = head; 
//     int cnt = 1; 
//     while(cnt < position - 1 && temp->next != NULL){
//         temp = temp -> next; 
//         cnt ++; 
//     }
    
//     // i found that element
//     if(temp -> next == NULL){
//         insertAtTail(tail,data); 
//         return; 
//     }

//     Node* nodeToInsert = new Node(data); 
//     nodeToInsert -> next = temp -> next; 
//     temp -> next = nodeToInsert; 
// }

// void deleteNode(int position,Node* &head){
//     if(position == 1){
//         Node* temp = head; 
//         head = head -> next; 
//         temp -> next = NULL; 
//         delete temp; 
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL; 
//         int cnt = 1; 
//         while(cnt < position){
//             prev = curr; 
//             cnt = cnt + 1; 
//             curr = curr -> next; 
//         }

//         // node mil gaya. 
//         prev -> next = curr -> next; 
//         curr -> next = NULL; 
//         delete curr; 

//     }

// }

// int main(){
//      // enter the project name
//      Node* node1 = new Node(10);  
//      Node* head = node1; 
//      Node* tail = node1; 
//      insertAtHead(head,69);  
//      print(head); 
//      insertAtHead(head,55); 
//      print(head); 
//      insertAtHead(head,53); 
//      print(head); 
//      insertAtHead(head,50);
//      print(head);  
//      insertAtHead(head,48);
//      print(head); 

//      // now go for inserting at tail. 
//      insertAtTail(tail,56); 
//      print(head); 

//      insertAtTail(tail,57); 
//      print(head); 

//      insertAtTail(tail,53); 
//      print(head); 
     
//      // now go for inserting element at middle of linked list. 
//      insertAtMiddle(head,tail,58,9); 
//      print(head);
//      insertAtMiddle(head,tail,75,5);  
//      print(head); 

//      // let's delete these nodes: 






//   return 0;
// }


// doubly linked list
// class Node{
// public: 
//     int data; 
//     Node* next; 
//     Node* prev; 
//     Node(int data){
//         this -> data = data; 
//         this -> next = NULL; 
//         this -> prev = NULL; 
//     }

//     ~Node(){
//         int val = this -> data; 
//         if(next != NULL){
//             delete next; 
//             next = NULL; 
//         }
        
//         cout << "Node with value : "<< val << " deleted succesfully " << endl;
//     }
// };


// void insertAtTail(Node* &head,int data,Node* &tail){
//     Node* temp = new Node(data); 
//     if(tail == NULL){
//         tail = temp; 
//         head = temp; 
//         return; 
//     }
//     tail->next = temp; 
//     temp -> prev = tail; 
//     tail = temp; 
// }

// void insertAtHead(Node* &head,int data,Node* &tail){
//     if(head == NULL){
//         Node* temp = new Node(data); 
//         head = temp; 
//         tail = temp; 
//         return; 
//     }

//     Node* temp = new Node(data); 
//     temp -> next = head; 
//     head -> prev = temp; 
//     head = temp; 
// }


// void insertAtAnyPosition(Node* &head,int data,Node* &tail,int position){
//     if(position == 1){
//         insertAtHead(head,data,tail); 
//         return; 
//     }
//     else{
//         Node* temp = head; 
//         int cnt = 1; 
//         while(cnt < (position - 1)){
//             temp = temp -> next; 
//             cnt ++; 
//         }

//         //ending wala node ala tar ??
//         if(temp -> next == NULL){
//             insertAtTail(head,data,tail); 
//             return; 
//         }

//         // position wala node ala. 
//         Node* nodeToInsert = new Node(data); 
//         nodeToInsert -> next = temp -> next; 
//         temp -> next -> prev = nodeToInsert; 
//         temp -> next = nodeToInsert; 
//         nodeToInsert -> prev = temp; 
//     }
// }
// void print(Node* head){
//     Node* temp = head; 
//     while(temp != NULL){
//         cout << temp -> data << " "; 
//         temp = temp -> next; 
//     }
//     cout << endl; 
// }


// void deletingNode(Node* &head,int position){
//     if(position == 1){
//         Node* temp = head; 
//         temp -> next -> prev = NULL;
//         head = head -> next; 
//         temp -> next = NULL; 
//         delete temp; 
//     }
//     else{
//         Node* curr = head; 
//         Node* prev1 = NULL; 
//         int cnt = 1; 

//         while(cnt < (position - 1)){
//             prev1 = curr; 
//             curr = curr -> next; 
//             cnt ++; 
//         }

//         prev1-> next = curr -> next;
//         curr -> next -> prev = prev1; 
//         curr -> next = NULL; 
//         curr -> prev = NULL; 
//         delete curr;    
//     }
// }

// int main(){
//     Node* head = NULL; 
//     Node* tail = NULL;

//     // inserting at head 
//     insertAtHead(head,69,tail); 
//     print(head); 

//     // inserting another node: 
//     insertAtHead(head,70,tail); 
//     print(head); 

//     insertAtHead(head,57,tail); 
//     print(head); 


//     // inserting at any position: 
//     insertAtAnyPosition(head,65,tail,2); 
//     print(head); 

//     // inserting at any position 
//     insertAtAnyPosition(head,68,tail,5); 
//     print(head); 

//     // deleting node
//     deletingNode(head,5);     
//     print(head); 
//     cout << "sab changa si "<< endl; 
// }



// circular linked list: 
class Node
{
    public:
    /* data */
        Node* next; 
        int data; 

        Node(int data);
        ~Node();
};

    Node::Node(int data){
        this -> data = data; 
        this -> next = NULL; 
    }

    Node::~Node(){
        int val = this -> data; 
        if(this-> next != NULL){
            delete next; 
            next = NULL; 
        }

        cout << "memory is freed for data = "<< val << endl;         
    }


    void insert(Node* &tail,int element,int data){
        if(tail == NULL){
            Node* temp = new Node(data); 
            tail = temp; 
            temp -> next = temp; 
        }

        else{
            Node* curr = tail; 
            while(curr-> data  != element){
                curr = curr -> next; 
            }
            // element tak poch gaye
            Node* temp = new Node(data); 
            temp -> next = curr -> next; 
            curr -> next = temp;             
          }
    }

    void print(Node* tail){
        Node* temp = tail;      
        
        do{
            cout << tail-> data << " "; 
            tail = tail -> next; 
        }while(tail  != temp);  
        cout << endl; 
    }


    void deleteMyNode(Node* tail,int value){
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
    insert(tail,5,3); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl; 
    insert(tail,3,5); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    insert(tail,5,7); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    insert(tail,7,9); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    insert(tail,5,6); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    insert(tail,9,10); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    insert(tail,3,4); 
    print(tail); 
    // cout << "tail  data  : " << tail -> data << endl;
    

    // deleting my node: 
    deleteMyNode(tail,10);
    print(tail); 
    deleteMyNode(tail,9);
    print(tail); 


  return 0;
}