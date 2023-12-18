/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
    // approach 1: using inorder traversal
        // if(root == NULL){
        //     return 0; 
        // }
        // int cnt = 0; 
        // queue<TreeNode* > q; 
        // q.push(root); 

        // while(!q.empty()){
        //     int size = q.size(); 
        //     for(int i = 0; i < size; i ++){
        //         TreeNode* temp = q.front(); 
        //         q.pop(); 
        //         if(temp -> left != NULL){
        //             q.push(temp -> left); 
        //         }
                
        //         if(temp -> right != NULL){
        //             q.push(temp -> right); 
        //         }

        //     }
        //     cnt ++; 
        // }

        // return cnt; 
    
    // approach 2: using love babbar appraoch 
        // agar aapko ye approach badi lag rahi hai to mere pass ek aur approach hai
        // aap recursion ka use karo 

        // to hamara base case kya hoga ?? 
        if(root == NULL)
        {
            return 0; // jab hamara root null hoga to 0 return karo. means jab mein recursive call through node tak pohoch jaunga tab zero return karunga 
        }
        
        // to mein subtree ki height kaise nikalunga ?? 
        // using recursion .
        int left_subtree_ki_height = maxDepth(root -> left); 
        int right_subtree_ki_height = maxDepth(root -> right); 
        int ans = max(left_subtree_ki_height,right_subtree_ki_height) + 1; 
        return ans; 
    }
};
