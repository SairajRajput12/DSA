#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node * left, * right;
};
 
class Solution{
    node * prev = NULL;
  public: 
    // void flattened(node* root){
    //     // using recursive way 
    //     if(root == NULL) return; 
    //     flattened(root->right); 
    //     flattened(root->left); 
    //     root->right = prev; 
    //     root->left = NULL; 
    //     prev = root; 

    // }

    // void flattened(node* root){
    //     if(root == NULL) return; 
    //     stack<node* > st; 
    //     st.push(root); 
    //     while(!st.empty()){
    //         node* cur = st.top(); 
    //         st.pop(); 
    //         if(cur->right != NULL){
    //             st.push(cur->right); 
    //         }

    //         if(cur->left != NULL){
    //             st.push(cur->left); 
    //         }



    //         if (!st.empty()) {
    //             cur -> right = st.top();
    //         } 
    //         cur->left = NULL;
    //     }
    // }



    void flattened(node* root){
        if(root == NULL) return; 
        stack<node*> st; 
        st.push(root); 
        while(!st.empty()){
            node* cur = st.top(); 
            st.pop(); 

            if(cur-> right != NULL){
                st.push(cur->right); 
            }

            if(cur-> left != NULL){
                st.push(cur->left); 
            }

            if(!st.empty()){
              cur-> right = st.top(); 
            }

            cur->left = NULL; 
        } 
    }
};

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}



int main(){
     // enter the project name 
     cout << "Flattened Binary Tree To Linked List " << endl; 
     struct node* n =  newNode(1); 
     n->left =  newNode(2); 
     n-> right =  newNode(0); 
     n->left->left = newNode(7); 
     n->left->right = newNode(2); 
     n->right->left = newNode(0); 
     n->right->right = newNode(0); 
     n->right->right->right = newNode(2); 
     Solution s; 
     s.flattened(n); 
     while(n->right != NULL)
     {
        cout << n-> data << " "; 
        n = n-> right; 
     } 

     cout << n-> data; 
    
  return 0;
}