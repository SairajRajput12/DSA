#include<bits/stdc++.h> 
using namespace std; 

   int getLength(Node* head) {

    int length = 0;

    Node* temp =head;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }

    return length;
    }

    Node* reverseK(Node* &head, int k, int length) {
        
    //Base case
    if(head == NULL || head -> next == NULL || k == 1 || length < k)
        return head;
    
    //Step 1 : Reverse first k nodes
    Node* nxt = NULL;
    Node* curr = head;
    Node* prev = NULL;

    int count = 1;

    while(curr != NULL && count <= k) {
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }

    //Step 2 : Reverse next k nodes using recursion
    if(nxt != NULL) { 
        head -> next = reverseK(nxt, k, (length - k));
    }

    //Step 3 : Return head of the reversed linked list
    head = prev;
    
    return head;
    }

Node* kReverse(Node* head, int k) {
   int length = getLength(head); 
   return reverseK(head,k,length);
}
