/**
 * Definition for a binary tree node.
 */ 

#include<bits/stdc++.h> 
using namespace std; 

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 

// approach 1: 
class Solution {
vector<int> inorder; 
    void inorderT(TreeNode* root) {
        if (root == NULL) {
            return;
        } 

        inorderT(root->left); 
        inorder.push_back(root->val); 
        inorderT(root->right); 
    }

    TreeNode* solve(int start,int end){
        if(start > end){
            return NULL; 
        }

        int mid = start + (end - start)/2; 
        int ele = inorder[mid]; 
        TreeNode* temp = new TreeNode(ele); 
        temp -> left = solve(start,mid-1); 
        temp -> right = solve(mid+1,end); 
        return temp; 
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorderT(root); 
        TreeNode* ans = solve(0,inorder.size()-1); 
        return ans; 
    }
};


