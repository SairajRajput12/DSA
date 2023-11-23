class Solution {
    ListNode* reversi(ListNode* iter, ListNode* iterf, int left, int right, ListNode* previ) {
        if (iter == iterf) {
            return iter; 
        }

        ListNode* nodeToDelete = iter;
        previ->next = iter->next;
        iter->next = NULL;
        iter = previ->next;
        ListNode* newHead = reversi(iter, iterf, left, right, previ);
        previ->next = nodeToDelete;
        nodeToDelete->next = iter;

        return newHead;
    }

public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // if (head == nullptr || left == right) {
        //     return head; 
        // }

        // ListNode* iter = head; 
        // ListNode* iterf = head;  
        // int cnt = 1;  // Start from 1, not 0
        // while (cnt < left) { 
        //     iter = iter->next; 
        //     iterf = iterf->next; 
        //     cnt++; 
        // }

        // while (cnt < right) {
        //     iterf = iterf->next;  
        //     cnt++; 
        // }

        // ListNode* previ = head; 
        // while (cnt < left - 1) {
        //     previ = previ->next; 
        //     cnt++; 
        // }

        // // Reverse the sublist between left and right
        // ListNode* newHead = reversi(iter, iterf, left, right, previ); 

        // // If left is 1, the head of the list changes
        // if (left == 1) {
        //     head = newHead;
        // }

        // return head;  

        // approach 2: 
        // if (head == nullptr || left == right) {
        //     return head;
        // }

        // // Create a stack to store values of the sublist
        // stack<int> st;

        // // Initialize pointers
        // ListNode* d = head;
        // ListNode* lefti;
        // int i = 1; // Start from 1 since position 1 corresponds to the head in the problem statement

        // while (i <= right && d != nullptr) {
        //     if (i >= left && i <= right) {
        //         // Push the value onto the stack
        //         st.push(d->val);

        //         if (i == left) {
        //             // Save the pointer to the left node of the sublist
        //             lefti = d;
        //         }
        //     }

        //     i++;
        //     d = d->next;
        // }

        // // Pop values from the stack and update the linked list nodes
        // while (!st.empty()) {
        //     lefti->val = st.top();
        //     st.pop();
        //     lefti = lefti->next;
        // }

        // return head;

        // second algo: 
        if(head == NULL || left == right || head -> next == NULL){
            return head; 
        }
        // int n = right - left;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;

        for(int i = 0; i < (left - 1); i ++){
            pre = pre -> next; 
        }

        ListNode* curr = pre -> next; 
        ListNode* forward; 
        int n = right - left; 
        while(n --) {
            forward = curr->next;
            curr->next = forward -> next;
            forward -> next = pre -> next; 
            pre -> next = forward; 
        }
        return dummy->next; 
    }
};
