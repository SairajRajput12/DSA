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
            fast = fast -> next; 
            if(fast != NULL){
                fast = fast -> next; 
            } 
            slow = slow -> next; 
            if(slow == fast)  return slow; 
        }
        return NULL;
    }

    ListNode* giveAns(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return NULL; 
        }

        ListNode* intersaction = FCycle(head); 
        ListNode* slow = head; 

        while(slow != intersaction){
            slow = slow -> next; 
            if(intersaction != NULL){
                intersaction = intersaction -> next;  
            }
        }

        return slow; 
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans = giveAns(head); 
        return ans; 
    }
};
