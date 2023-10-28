
#include<bits/stdc++.h>
using namespace std;

struct node{
        int data; 
        struct node *left,*right; 
};


struct node *newNode(int data){
          struct node * node = (struct node * ) malloc(sizeof(struct node));
          node-> data = data;  
          node->left = NULL; 
          node->right = NULL; 
          return (node); 
}


void InOrderTraversal(node *curr,vector<int> &inOrder){
    if(curr == NULL){
        return; 
    }

    InOrderTraversal(curr-> left, inOrder); 
    inOrder.push_back(curr->data); 
    InOrderTraversal(curr->right,inOrder); 

}

// Iterative pre-order traversal 
// using stack ---------> LIFO 
vector<int> preorderTraversal(node* root){
    vector<int> preorder; 
        if(root == NULL){
          return preorder; 
        }
    stack<node*> st; 
    st.push(root); 
    while(!st.empty()){
        root = st.top(); 
        st.pop(); 
        preorder.push_back(root->data); 
              if(root-> right != NULL){
                st.push(root->right); 
              }

             if(root-> left != NULL){
                st.push(root->left); 
              }

    }     

    return preorder; 

}

// using inorder by using iterative way: 
vector<int> InorderTraversal(node* root){
    vector<int> inorder; 
    node* n = root; 
        if(root == NULL){
          return inorder; 
        }
    stack<node*> st; 
    st.push(root); 
    while(true){
        if(n != NULL) {
           st.push(n); 
           n = n -> left; 
        }
        else{
            if(st.empty() == true) break; 
            n = st.top(); 
            st.pop(); 
            inorder.push_back(n->data);
            n = n-> right; 
        }
    }     
    return inorder; 

}





int main(){
     // enter the project name
     cout <<"Chitii saying : Hello World" << endl; 
     struct node* root = newNode(5); 
    //  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  // vector < int > inOrder;
  // InOrderTraversal(root, inOrder);

  // vector<int> inOrder = preorderTraversal(root); 
  vector<int> inOrder = InorderTraversal(root); 
  cout << "The inOrder Traversal is : ";

  for (int i = 0; i < inOrder.size(); i++) {
    cout << inOrder[i] << " ";
  }

  cout << endl; 
  return 0;
}