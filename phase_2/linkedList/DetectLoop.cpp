/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { 
    ListNode* FCycle(ListNode* head){
        if(head == NULL){
            return head; 
        }

        ListNode *fast = head, *slow = head; 
        while(fast != NULL && fast->next != NULL){
            fast = fast -> next->next; 
            slow = slow -> next; 
            if(fast == NULL)  return NULL; 
            if(slow == fast)  break; 
        }
        return slow;
    }

    ListNode* getStartingNode(ListNode* head){
        if(head == NULL){
            return head; 
        }

        ListNode* intersaction = FCycle(head);  
        ListNode* slow = head; 

        while(slow != intersaction){
            slow = slow -> next; 
            intersaction = intersaction -> next; 
        }
        return slow; 
    }

public:
    bool hasCycle(ListNode *head) {
        // use map data structure to detect the cycle in the ll.  
        // approach 1
        // if(head == NULL){
        //     return false; 
        // }

        // // time complexity : O(N). 

        // map<ListNode* , bool> visited; 
        // ListNode* temp = head; 
        // while(temp != NULL){
        //     if(visited[temp] == true){
        //         // cycle is present. 
        //         return true; 
        //     }
        //     visited[temp] = true; 
        //     temp = temp -> next; 
        // }
        // return false; 


        // approach 2: floyd's algorithm. 
        // time complexity: O(N). 
        // space complexity: O(1). 
        // if(head == NULL){
        //     return false; 
        // }

        // ListNode *fast = head, *slow = head; 
        // while(fast != NULL && fast->next != NULL){
        //     fast = fast -> next->next; 
        //     slow = slow -> next; 
        //     if(fast == NULL) return false; 
        //     if(slow == fast) return true; 
        // }
        // return false; 


        // approach 3: starting node. 
        // step 1 :FCD laga do.and return the slow.  
        // step 2 :slow = head.  
        // if(head  == NULL) return false; 

        // if(head -> next == NULL){
        //     return false; 
        // }

        // ListNode* n = getStartingNode(head); 
        // if(n == NULL){
        //     return false; 
        // }
        // else{
        //     return true; 
        // }
    
        // approach 4: using backtracking. 
        // if(head == NULL) {return false;} 
        // else if(head->val == INT_MAX){
        //     return true; 
        // } 
        // else{
        //     head->val = INT_MAX; 
        //     return hasCycle(head->next); 
        // }

        // approach 5: counting the number of iterations. 
        // int limit = 1e4; 
        // ListNode* temp = head; 
        // int i; 
        // for(i = 0; i <= 1e4 && temp != NULL; i ++){
        //     temp = temp -> next; 
        // }

        // if(i > 1e4){
        //     return true; 
        // }
        // return false; 

        // approach 6: using string. 
        set<string> s; 
        string m = ""; 
        while(head != NULL){
            m.push_back(head->val+""); 
            if(s.find(m) == true){
                return true; 
            }
            else{
                s.add(m); 
                head = head -> next; 
            }
        }

        return false; 
    }
}; 
