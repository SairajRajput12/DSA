#include<bits/stdc++.h>
using namespace std;

// struct TreeNode{
//     int val; 
//     TreeNode *left,*right; 
//     TreeNode(){
//         val = 0; 
//         left = NULL; 
//         right = NULL; 
//     }

//     TreeNode(int x){
//         val = x; 
//         left = NULL; 
//         right = NULL; 
//     }

//     TreeNode(int x,TreeNode *left,TreeNode *right) : val(x),left(left),right(right){}
// }; 

// class Solution{

// public:
//     vector<vector<int>>  levelOrder(TreeNode* root){
//             vector<vector<int>> ans; 
//                 if(root == NULL){
//                     return ans; 
//                 }
//             queue<TreeNode*> q; 
//             q.push(root); 
//                 while(!q.empty()){
//                     int size = q.size(); 
//                     vector<int> level; 
//                         for (int i = 0; i < size; i++)
//                         {
//                             TreeNode *node = q.front(); 
//                             q.pop();
//                             if(node->left != NULL){ q.push(node-> left); }
//                             if(node->right != NULL){ q.push(node->right); }
//                             level.push_back(node->val); 
//                         }

//                     ans.push_back(level);    
//                 }    
//         return ans;         
//     }
// };

// int main(){
//      // enter the project name
//      cout << "Level wise transversal :" << endl; 
//      TreeNode *root = new TreeNode(5); 
//      root->left = new TreeNode(3); 
//      root->right = new TreeNode(7); 
//      root->left->left = new TreeNode(1); 
//      root->left->right = new TreeNode(4); 
//      root->right->left = new TreeNode(6); 
//      root->right->right = new TreeNode(9); 
//      Solution s; 
//      vector<vector<int>> ans = s.levelOrder(root); 
//      for (int i = 0; i < ans.size(); i++)
//      {
//             for (int j = 0; j < ans[i].size(); j++)
//             {
//                 cout << ans[i][j] << " "; 
//             }
//         cout << endl;   
//      }
       

//   return 0;
// }

/*T.C -----------> O(N) && S.C ----------> O(N)*/



struct TreeNode{
     int data; 
     struct TreeNode *left,*right; 
     TreeNode() : data(0),left(NULL),right(NULL){}  
     TreeNode(int x): data(x),left(NULL),right(NULL){} 
     TreeNode(int x,TreeNode *left,TreeNode *right): data(x),left(left),right(right){}
}; 

class Solution{ 
    public: 
            vector<vector<int>> levelOrder(TreeNode *root){
                    queue<TreeNode*> q; 
                    vector<vector<int>> ans; 
                    q.push(root); 
                        if(root == NULL){
                            return ans; 
                        } 
                    while(!q.empty()){
                        vector<int> level; 
                        int size = q.size(); // it gives the number of the nodes in each level...
                            for (int i = 0; i < size; i++)
                            {
                                TreeNode* node = q.front(); 
                                q.pop(); 
                                // conditions to add the nodes. 
                                    if(node-> left != NULL) q.push(node-> left); 
                                    if(node-> right != NULL) q.push(node-> right); 
                                    level.push_back(node-> data); 
                            }  
                        ans.push_back(level);     
                    }    

                return ans;     
            }
};

int main(){
     // enter the project name
     cout << "Level wise transversal :" << endl; 
     TreeNode *root = new TreeNode(5); 
     root->left = new TreeNode(3); 
     root->right = new TreeNode(7); 
     root->left->left = new TreeNode(1); 
     root->left->right = new TreeNode(4); 
     root->right->left = new TreeNode(6); 
     root->right->right = new TreeNode(9); 
     Solution s; 
     vector<vector<int>> ans = s.levelOrder(root); 
     for (int i = 0; i < ans.size(); i++)
     {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " "; 
            }
        cout << endl;   
     }
       

  return 0;
}