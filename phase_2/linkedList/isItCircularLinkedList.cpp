#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool circularLL(Node* head)
{
    // Write your code here '
	// Note: 
	// 1] no null pointer.  
	// 2] an empty list also consider as circular. 
	// 3] all integers in lined list is unique. 
	// 4] ith node points to (i+1)th node. 
	if(head == NULL){
		return true; 
	}

	// single node: 
	if(head->next == NULL){
		return false; 
	}

	int data1 = head->data; 
	Node* trav = head->next; 
	if(trav->next == head){
		return true; 
	}
	while(trav->next != NULL && trav != head){
		trav = trav->next; 
	}

	if(trav == head){
		return true; 
	}

	return false; 
}



// another approach:

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool circularLL(Node* head)
{
    // Write your code here '
	// Note: 
	// 1] no null pointer.  
	// 2] an empty list also consider as circular. 
	// 3] all integers in lined list is unique. 
	// 4] ith node points to (i+1)th node. 
	// Time complexity: O(N) 
	// space complexity: O(1). 

	// if(head == NULL){
	// 	return true; 
	// }

	// // single node: 
	// if(head->next == NULL){
	// 	return false; 
	// }

	// int data1 = head->data; 
	// Node* trav = head->next; 
	// if(trav->next == head){
	// 	return true; 
	// }
	// while(trav->next != NULL && trav != head){
	// 	trav = trav->next; 
	// }

	// if(trav == head){
	// 	return true; 
	// }

	// return false;  


	// Approach 2: using map. 
	map<Node*,bool> mp; 
	Node* temp = head; 
	if(head == NULL){
		return true; 
	}


	while(temp != NULL){
		if(temp == NULL){
			return false; 
		}

		if (mp.find(temp) != mp.end()) {
            return true;
        }

		mp[temp] = true; 
		temp = temp -> next; 
	}

	return false; 
}

// another code: 

#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

void sortMe(Node* &head){
    Node* temp = head; 
    while(temp != NULL){
        Node* newc = temp -> next; 
        int val = temp -> data; 
        while(newc != NULL){
            if(newc->data < val){
                // do swap operation. 
                int v = newc -> data; 
                newc -> data = val; 
                temp -> data = v; 
            }
            newc = newc -> next; 
        }
        temp = temp -> next; 

    }
}


Node *removeDuplicates(Node *&head)
{
    // Write your code here
    // brute force approach: time limit exceeded.  
    // if(head == NULL || head -> next == NULL){
    //     return head;
    // }

    // Node* first = head; 
    // Node* another = NULL; 
    // while(first != NULL){
    //         another = first -> next; 
    //         Node* prev = first; 
    //         while(another != NULL){
    //             if(another -> data == first -> data){
    //                 // yes duplicate element is found. 
    //                 prev->next = another->next; 
    //                 delete another; 
    //                 another = prev -> next;   
    //             }
    //             else{
    //                 prev = another; 
    //                 another = another -> next; 
    //             }
    //         }
    //     first = first -> next; 
    // }
    // return head; 



    // approach 2 using maps: 
    // unordered_map<int , bool> visited;  
    // Node* temp = head; 
    // Node* prev = NULL; 
    // while(temp != NULL){
    //     if(visited[temp->data] == true){ 
    //         prev-> next = temp->next;
    //         temp = prev -> next;
    //     }
    //     else{
    //         visited[temp->data] = true; 
    //         prev = temp; 
    //         temp = temp -> next;    
    //     }
    // }
    // return head; 


    // approach 3: using sorting method do it after solving sorting method. 
    // it works but fails in some cases. 
    // if(head == NULL){
    //         return NULL; 
    // }

    // sortMe(head); 

    // Node* temp = head; 
    //     while(temp != NULL){
    //         if((temp->next != NULL) && temp->data == temp -> next->data){ 
    //             Node* newa = temp -> next -> next; 
    //             // Node* nodeToDelete = temp -> next; 
    //             // delete(nodeToDelete); 
    //             temp -> next = newa; 
    //         }
    //         else{
    //             temp = temp -> next; 
    //         }
    //     }

    // return head; 
}





















