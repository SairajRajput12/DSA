
// Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    // approach 1: using recursion 
        // if(root == NULL){
        //     root = new TreeNode(val); 
        //     return root; 
        // }

        // if(val > root -> val){
        //     root -> right = insertIntoBST(root->right,val); 
        // }
        // else{
        //     root -> left = insertIntoBST(root->left,val); 
        // }
        // return root;

    // approch 2: using iterative method 
        if(root == nullptr){
            root = new TreeNode(val); 
            return root; 
        }
         TreeNode* temp = root; 
         while(root){
             if(root -> val <= val){
                 if(root -> right != nullptr){
                     root = root -> right; 
                 }
                 else{
                     root -> right = new TreeNode(val); 
                     break; 
                 }
             }

             else{
                 if(root -> left != nullptr){
                     root = root -> left; 
                 }
                 else{
                     root -> left = new TreeNode(val); 
                     break; 
                 }
             }
         }
         return temp; 
    }
};