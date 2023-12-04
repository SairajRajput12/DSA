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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // appraoch 1: pehle first wali appraoch try maro then reverse that 2d array
        
        vector<vector<int>> ans; 
        if(root == NULL){
            return ans; 
        }
        queue<TreeNode*> q;
        q.push(root); 
        while(!q.empty()){
        vector<int> sample; 
        int size = q.size(); 
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

            ans.push_back(sample); 
        }
    reverse(ans.begin(),ans.end()); 
    return ans; 
    }


};



/*
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
 /*
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; 
        if(root == NULL){
            return ans;  
        }
        queue<TreeNode*> q;
        q.push(root); 
        while(!q.empty()){
        vector<int> sample; 
            for(int i = 0; i < q.size(); i ++){
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

            ans.push_back(sample); 
        }
        return ans; 
    }
};

*/


