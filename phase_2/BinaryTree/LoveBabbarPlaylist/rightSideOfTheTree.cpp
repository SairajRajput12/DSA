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
    void solve(vector<int> &ans,queue<TreeNode* > &q)
    {
        if(q.size() == 0){
            return; 
        }

        int size = q.size(); 
        vector<int> sample; 
        for(int i = 0; i < size; i ++){
            TreeNode* temp = q.front(); 
            q.pop(); 
            if(temp -> left != NULL){
                q.push(temp -> left); 
            }

            if(temp -> right != NULL){
                q.push(temp -> right); 
            }

            sample.push_back(temp -> val); 
        }
        ans.push_back(sample[sample.size()-1]); 
        solve(ans,q);
    }
    vector<int> rightSideView(TreeNode* root) { 
    // appraoch 1: using level order traversal 
    /*
        queue<TreeNode* > q; 
        q.push(root); 
        vector<int> ans1; 
        if(root == NULL){
            return ans1; 
        } 

        while(!q.empty()){
            vector<int> sample; 
            int size = q.size(); 
            for(int i = 0; i < size; i ++){
                TreeNode* temp = q.front(); 
                q.pop(); 

                if(temp -> left != NULL)
                {
                    q.push(temp -> left); 
                }

                if(temp -> right != NULL)
                {
                    q.push(temp -> right); 
                }
                sample.push_back(temp -> val); 
            }
            ans1.push_back(sample[sample.size()-1]); 
        }

        return ans1; 
    */ 

    // approach 2: using recursion 
        vector<int> ans; 
        if(root == NULL){
            return ans; 
        } 
        queue<TreeNode* > q; 
        q.push(root); 
        solve(ans,q); 
        return ans; 
    }
};

