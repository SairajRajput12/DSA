#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
     int data; 
     struct TreeNode *left,*right; 
     TreeNode() : data(0),left(NULL),right(NULL){}  
     TreeNode(int x): data(x),left(NULL),right(NULL){} 
     TreeNode(int x,TreeNode *left,TreeNode *right): data(x),left(left),right(right){}
}; 


class Solution{
    public: 

    int widthOfBinaryTree(TreeNode* root){
        if(root == NULL){
            return 0; 
        }
        int ans = 0; 
        queue<pair<TreeNode*, int>> q; 
        q.push({root,0});
        while(!q.empty()){
            int size = q.size(); 
            int min = q.front().second; //minimum index possible in this variable. 
            int first,last; 
            for (int i = 0; i < size; i++)
            {
                int cur_id = q.front().second - min; 
                TreeNode *node = q.front().first; 
                q.pop(); 
                if(i == 0) first = cur_id; 
                if(i == size - 1) last = cur_id; 
                if(node->left) 
                    q.push({node->left,cur_id*2+1}); 
                if(node->right)
                    q.push({node->right,cur_id*2+2}); 
            }
            ans = max(ans,last-first+1);            
        } 

        return ans; 
    }


    TreeNode* buildTree(vector<int> &preorder,vector<int> &inorder)
    {
        map<int , int> inMap; 
            for (int i = 0; i < inorder.size(); i++)
            {
                inMap[inorder[i]] = i; // put it into the hashmap 
            }

        // inorder -> {40,20,50,10,60,30}
        // preorder -> {10,20,40,50,30,60} 

        // pre-order -> 9 3 15 20 7----------------> 0 1 2 3 4 
        // in-order -> 3 9 20 15 7 
        TreeNode* root = buildTree(preorder,0,preorder.size() - 1,inorder,0,inorder.size() - 1,inMap); 
        return root;         
    }

    TreeNode* buildTree(vector<int> &preorder, int preStart,int preEnd, vector<int> &inorder,int inStart,int inEnd, map<int , int> inMap){
        if(preStart >preEnd || inStart > inEnd){
            return NULL; 
        }
        TreeNode* root = new TreeNode(preorder[preStart]); 
        int inRoot = inMap[root->data]; 
        int numsLeft = inRoot - inStart; 
        root-> left = buildTree(preorder,preStart + 1,preStart+numsLeft,inorder,inStart,inRoot - 1,inMap); 
        root-> right = buildTree(preorder,preStart+numsLeft+ 1,preEnd,inorder,inRoot + 1,inEnd,inMap); 
        return root;
    }
}; 



int main(){
     // enter the project name 
     cout << "Maximum width of the tree :" << endl; 
     // we will index the every node of the tree and use: 
     // formula:  (last index - first index ) + 1; 
     //  for zero based index:  
     // left one: 2*i + 1 and right one: 2*i + 2 
     // Failure case: skew tree due to overflow.
     TreeNode* t = new TreeNode(5); 
     t->left = new TreeNode(6); 
     t-> right = new TreeNode(7); 
     t->left-> left = new TreeNode(8); 
     t->left-> right = new TreeNode(9); 
     t->right-> left = new TreeNode(10); 
     t->right->right = new TreeNode(12); 

     Solution s; 
     cout << "Maximum width is :" << s.widthOfBinaryTree(t) << endl;
    // Time complexity: O(N) and O(N). 
    vector<int> inorder = {40,20,50,10,60,30}; 
    vector<int> preorder  = {10,20,40,50,30,60}; 
    // TimeComplexity: O(N) && space complexity:O(N) 
    TreeNode* newnode = s.buildTree(preorder,inorder);  
    
  return 0;
}