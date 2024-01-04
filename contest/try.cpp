
#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 */

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} 
};


 
class Solution {
    bool callForSmall(TreeNode* root,int k,int sum){
        if(sum > k || root == NULL){
            return false; 
        }

        if(sum == k){
            return true; 
        }
        bool ans1,ans2; 

        if(root->left != NULL){
            ans1 = callForSmall(root->left,k,sum+root->val);
        }

        if(root -> right != NULL){
            ans2 = callForSmall(root->right,k,sum+root->val); 
        }

        return ans1 || ans2; 
    }
public:
    bool findTarget(TreeNode* root, int k) {
            // then the target will be present in the left subtree 
            bool ans = callForSmall(root,k,0); 
            return ans; 
        
    }
};

int main(){
     // enter the project name
    TreeNode* root = new TreeNode(5); 
    root -> left = new TreeNode(3); 
    root -> left -> left = new TreeNode(2); 
    root -> left -> left -> left = NULL; 
    root -> left -> left -> right = NULL; 
    root -> left -> right = new TreeNode(4); 
    root -> right = new TreeNode(6); 
    root -> right -> left = NULL; 
    root -> right -> right = new TreeNode(7); 
    root -> right -> right -> right = NULL; 
    
    Solution s; 
    cout << s.findTarget(root,9) << endl; 

  return 0;
}