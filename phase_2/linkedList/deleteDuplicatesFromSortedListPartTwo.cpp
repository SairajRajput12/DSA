/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    void deleteNode(ListNode*& temp, ListNode*& newN, ListNode*& prev) {
        if (temp == nullptr || newN == nullptr) {
            return;
        } else {
            ListNode* nrc = temp;
            while (nrc != newN && nrc != nullptr) {
                nrc = nrc->next;
            }
            if (nrc != nullptr) {
                if (prev) {
                    prev->next = nrc->next;
                } else {
                    // If prev is null, it means we are deleting the head
                    // Update the head of the list
                    temp = nrc->next;
                }
                delete nrc;  // Free the memory of the deleted node
            }
        }
    }

public:
    ListNode* deleteDuplicates(ListNode* head) {
    // approach 1: using 2 pointers.     
        
        // if (head == nullptr || head->next == nullptr) {
        //     return head;
        // }

        // ListNode* temp = head;
        // ListNode* forward = head->next;
        // ListNode* stripper = nullptr;
        // ListNode* prev = nullptr;

        // while (temp != nullptr) {
        //     if (forward && temp->val == forward->val) {
        //         temp = forward;
        //         forward = temp->next;
        //     } else {
        //         stripper = temp;
        //         deleteNode(stripper, forward, prev);
        //         temp = forward;
        //         if (forward != nullptr) {
        //             forward = forward->next;
        //         }
        //     }
        // }
        // return head;

        // approach 2: using dummy list 
        // if(head == NULL || head -> next == NULL){
        //     return head; 
        // }
        // // step 1: create dummy node means hum nayi list ko construct karenge 
        // ListNode* dummy = new ListNode(0); 
        // dummy -> next = head; 
        // ListNode* prev = dummy; 
        // while(head != NULL)
        // {
        //     if(head -> next != NULL && head -> val == head -> next -> val)
        //     {
        //         while(head -> next != NULL && head -> val == head -> next -> val)
        //         {
        //             head = head -> next; 
        //         }

        //         prev -> next = head -> next; 
        //     }

        //     else{
        //         prev = prev -> next; 
        //     }

        //     head = head -> next; 
        // }

        // return dummy -> next; 

        // approach 3: using ordered map 
        if (head == NULL || head->next == NULL) {
            return head;
        }

            unordered_map<int, int> mp;
            ListNode* temp = head;

            while (temp != NULL) {
                mp[temp->val]++;
                temp = temp->next;
            }

            temp = head;
            ListNode* prev = NULL;  // Initialize prev to nullptr
            ListNode* forward = head->next;
            while (temp != NULL) {
                if (mp[temp->val] >= 2) {
                    if (prev) {
                        // If there's a previous node, update its next pointer
                        prev->next = forward;
                        delete temp;  // Free the memory of the deleted node
                        temp = forward;
                    } else {
                        // If there's no previous node, update the head
                        head = forward;
                        delete temp;  // Free the memory of the deleted node
                        temp = head;
                    }
                } else {
                    // If no deletion, update prev
                    prev = temp;
                    temp = forward;
                }
                if (forward != NULL) {
                    forward = forward->next;
                }
            }
            return head;

    }
};
