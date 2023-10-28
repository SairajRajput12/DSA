#include<bits/stdc++.h> 
using namespace std; 
struct TreeNode{ 
    int data; 
    TreeNode *left,*right; 
    TreeNode(): data(0),left(nullptr),right(nullptr){}
    TreeNode(int x): data(x),left(nullptr),right(nullptr){} 
    TreeNode(int x,TreeNode *left,TreeNode *right) : data(x),left(left),right(right) {}
};


class Solution{
    public: 
        int maxDepth(TreeNode* root){
            if(root == NULL) return 0; 
            int lh = maxDepth(root -> left); 
            int rh = maxDepth(root->right); 
            return 1+max(lh,rh);
        }

        bool isBalanced(TreeNode* root){
            return check(root) != -1; 
        }
        int check(TreeNode* node){
            if(node == NULL) return 0; 
            int lh = check(node->left); 
            if(lh == -1) return -1; 
            int rh = check(node->right); 
            if(rh == -1) return -1; 
            if(abs(lh-rh) > 1) return -1; 
            return max(lh,rh) + 1; 
            // time complexity : O(n*n)
        }

        int diameter(TreeNode *root){
    int diameter = 0; 
    findDiameter(root,diameter); 
    return diameter;
}

int findDiameter(TreeNode *root,int maxi){
    if(root == NULL){
        return 0; 
    }

    int lh = findDiameter(root->left,maxi); 
    int rh = findDiameter(root->right,maxi); 
    maxi = max(maxi,(lh+rh)); 
    return 1 + max(lh,rh); 
}



};
// Time complexity: O(n)


int main(){
    TreeNode* node = new TreeNode(5); 
    node->left = new TreeNode(3); 
    node-> right = new TreeNode(7); 
    node->left->left = new TreeNode(1); 
    node->left->right = new TreeNode(4); 
    node->right->left = new TreeNode(6); 
    node->right->right = new TreeNode(9);  
    node->left->left->left = new TreeNode(10); 
    // node->left->left->left->left = new TreeNode(100); 

    
    Solution s; 
    // int height = s.maxDepth(node); 
    // cout << "The maximum height of the binary tree is :" << height << endl; 
    cout << "Tree is balanced is ? " << s.isBalanced(node) << endl; 
    cout << "The diameter of the tree is:" << s.diameter(node) << endl; 
    return 0; 
}

/*Time complexity: O(N) && Space complexity: O(N)*/ 

