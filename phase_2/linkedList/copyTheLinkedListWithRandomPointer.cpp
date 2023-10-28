/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void run(Node* &head,Node* &tail,int data)
    {
        if(head == NULL)
        {
            Node* newNode = new Node(data); 
            head = newNode; 
            tail = newNode; 
            return; 
        }
        else
        {
            tail -> next = new Node(data); 
            tail = tail -> next; 
        }
    }

    Node* copyRandomList(Node* head) {
        // approach 1: using maps.
        // Node* cloneHead = NULL; 
        // Node* cloneTail = NULL; 
        // Node* temp = head; 
        
        // while(temp != NULL)
        // {
        //     run(cloneHead,cloneTail,temp->val); 
        //     temp = temp -> next; 
        // }

        // // step 2: create the maps. 
        // unordered_map<Node*,Node*> newM; 
        // Node* temp1 = head; 
        // Node* temp2 = cloneHead;

        // while(temp1 != NULL && temp2 != NULL)
        // {
        //     newM[temp1] = temp2; 
        //     temp1 = temp1 -> next; 
        //     temp2 = temp2 -> next; 
        // }


        // // copy the random pointers. 
        // temp1 = head; 
        // temp2 = cloneHead;
        // while(temp1 != NULL)
        // {
        //     temp2 -> random = newM[temp1 -> random]; 
        //     temp1 = temp1 -> next; 
        //     temp2 = temp2 -> next;  
        // }
        // return cloneHead; 
    
        // approach 2: using links. 

        // creating the cloned liked list. 
       
        Node* cloneHead = NULL; 
        Node* cloneTail = NULL; 
        Node* temp = head; 

        while(temp != NULL)
        {
            run(cloneHead,cloneTail,temp->val); 
            temp = temp -> next; 
        }

        // now add clone node in between original lists. 
        Node* originalNode = head; 
        Node* cloneList = cloneHead; 

        while(originalNode != NULL && cloneList != NULL)
        {   
            Node* d = originalNode -> next; 
            originalNode -> next = cloneList; 
            originalNode = d; 

            d  = cloneList -> next;  
            cloneList -> next = originalNode;  
            cloneList = d;  
        } 

        // now go for copying these pointers. 
        Node* pre = head; 
        while(pre != NULL)
        {
            if(pre -> random != NULL) pre -> next -> random = pre -> random -> next; 
            else pre -> next -> random = NULL; 
            pre = pre -> next -> next; 
        }

        // now revert the linked list.
        originalNode = head; 
        cloneList = cloneHead; 

        while(originalNode != NULL && cloneList != NULL)
        {
            originalNode -> next = cloneList -> next; 
            originalNode = originalNode -> next; 

            if(originalNode != NULL)
            {
                cloneList -> next = originalNode -> next; 
            }            
            cloneList = cloneList -> next;
        }
        return cloneHead; 
    }
};
