// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data; 
//     struct node *left,*right; 
// }; 

// node* newNode(int x){
//     struct node* root = (struct node*)malloc(sizeof(node*)); 
//     root->data = x; 
//     root->left = NULL; 
//     root->right = NULL; 
//     return (root); 
// }

// class Solution{
// public: 
//     node* searchBST(node* root,int val){
//         while(root != NULL && root->data != val){
//             root = (val < root->data)?root->left : root-> right; 
//         }
//         return root;
//     }

//     // ciel in the BST: 
//     int findcielinBST(BinaryTreeNode<int> *root,int key){
//         int ceil = -1;
//         if(root->data == key){
//              ceil = root->data; 
//              return ceil; 
//         } 

//         if(key > root->data){
//             root = root -> right; 
//         }

//         else{
//             ceil = root->data; 
//             root = root->left; 
//         }
//       return ceil; 
//     }
// };
// int main(){
//     // enter the project name 
//     cout << "Binary search tree" << endl; 
//     // cout << "Bokuda kirada" << endl;
//     // Left node->value < parent-node-> value and right->value > parent-node->value 
//     // left subtree and right must be BST. 
//     /*
//     Why BST? 
//     -> height of the BST is (log2(N)). 
//     */
//     // search in BST: complexity:O(log2(N)).  
//     Solution s; 
//     struct node* root = newNode(5); 
//     root->left = newNode(4); 
//     root->right = newNode(6); 
//     root-> left-> left = newNode(3); 
//     root->left->right = newNode(5); 
//     root->right->left = newNode(7); 
//     root->right->right = newNode(8); 
//     root->right->right->right = newNode(10); 

//     struct node* n = s.searchBST(root,10);
//     cout << n << endl; 
//     cout << "Ceil for the tree ar 4 is:" << s.findcielinBST(root); 

//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

node* newNode(int x) {
    struct node* root = (struct node*)malloc(sizeof(node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return (root);
}

class Solution {
public:
    node* searchBST(node* root, int val) {
        while (root != NULL && root->data != val) {
            root = (val < root->data) ? root->left : root->right;
        }
        return root;
    }
    

    // ciel in the BST:
    int findcielinBST(node* root, int key) {
        int ceil = -1;
        while (root != NULL) {
            if (root->data == key) {
                ceil = root->data;
                break;
            }

            if (key < root->data) {
                ceil = root->data;
                root = root->left;
            } else {
                root = root->right;
            }
        }
        return ceil;
    }

    // floor in the binary search tree
    int floorInBST(node* root,int key){
            int floor = -1; 
            while (root != NULL)
            {
                if(root ->data == key){
                    floor = root->data; 
                    return floor; 
                }

                if(key > root -> data){
                    floor = root -> data; 
                    root = root -> right; 
                }

                else{
                    root = root -> left; 
                }
            }
        return floor;    
    }    

    // insert the node into the BST. 
    node* insertIntoBST(node* root,int val){
        if(root == NULL) return  newNode(val); 
        node* cur = root; 
        while (true)
        {
            if(cur->data <= val){
                if(cur->right != NULL) cur = cur-> right; 
                else{
                    cur-> right = newNode(val); 
                    break; 
                }
            }

            else{
                if(cur-> left != NULL) cur = cur-> left; 
                else{
                    cur-> left = newNode(val); 
                    break; 
                }
            }
        }
        
        return root; 
    }

    vector<vector<int>> levelOrderTraversal(node* root){
        vector<vector<int>> ans; 
        queue<node*> q; 
        if(root == NULL) return ans; 
        q.push(root); 
        while(!q.empty()){
            vector<int> level; 
            int size = q.size(); 
            for (int i = 0; i < size; i++)
            {
                node* qp = q.front(); 
                q.pop(); 
                if(qp -> left != NULL) q.push(qp->left);  
                if(qp->right != NULL) q.push(qp->right); 
                level.push_back(qp->data);     
            }
            ans.push_back(level); 
            
        }    
        return ans; 
    }

    // delete the node: 
    node* deleteNode(node* root,int key){
        if(root == NULL) return NULL; 
        if(root->data == key) return helper(root); 
        node* dummy = root; // storing the deleted node in the dummy node. 
        while(root != NULL){
            if (root->data > key){
                if(root-> left != NULL && root->left-> data == key){
                    root -> left = helper(root->left); 
                }
                else{
                    root = root-> left; 
                }
            }

            else
            {
                if(root-> right != NULL && root->right->data == key){
                    root->right = helper(root->right); 
                    break; 
                }
                else{
                    root = root -> right; 
                }
            }
            
            
        }

        return dummy; 
    }

    node* helper(node* root){
        if(root->left == NULL){
            return root->right; 
        }

        else if(root->right == NULL){
            return root-> left; 
        }

        node* rightChild = root->right; 
        node* lastRight = findLastRight(root->left); 
        lastRight-> right = rightChild; 
        return root->right;
    }

    node* findLastRight(node* root){
        if(root->right == NULL){
                return root; 
        }
        return findLastRight(root->right); 
    }

    // check the tree is bst or not 
    // Time complexity: O(N) and O(1) 
    bool isValid(node* root){
        return isValidBST(root,INT_MIN, INT_MAX); 
    }

    bool isValidBST(node* root,int minVal,int maxVal){
        if(root == NULL) return true; 
        if(root->data >= maxVal || root->data <= minVal) return false; 
        return isValidBST(root->left,minVal,root->data) && isValidBST(root->right,root->data,maxVal); 
    }
};

int main() {
    // enter the project name
    cout << "Binary search tree" << endl;
    // cout << "Bokuda kirada" << endl;
    // Left node->value < parent-node-> value and right->value > parent-node->value
    // left subtree and right must be BST.
    /*
    Why BST?
    -> height of the BST is (log2(N)).
    */
    // search in BST: complexity:O(log2(N)).
    Solution s;
    struct node* root = newNode(5);
    root->left = newNode(4);
    root->right = newNode(6);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(7);
    root->right->right = newNode(8);
    root->right->right->right = newNode(10);

    struct node* n = s.searchBST(root, 10);
    cout << n->data << endl;
    cout << "Ceil for the tree at 4 is: " << s.findcielinBST(root, 4) << endl;
    cout << "Floor of the tree is :" << s.floorInBST(root,7); 
    node* updataedNode = s.insertIntoBST(root,9); 

    vector<vector<int>> ans = s.levelOrderTraversal(updataedNode);  
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
     {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " "; 
            }
        cout << endl;   
    }

    node* uppdataed = s.deleteNode(updataedNode,9); 
    
    vector<vector<int>> ansp = s.levelOrderTraversal(uppdataed);
    
    cout << endl;
    for (int i = 0; i < ansp.size(); i++)
     {
            for (int j = 0; j < ansp[i].size(); j++)
            {
                cout << ansp[i][j] << " "; 
            }
        cout << endl;   
    }

    cout <<"Is my BST is valid ?" << s.isValid(uppdataed) << endl; // no

    return 0;
}
