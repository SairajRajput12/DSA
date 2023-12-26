#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    Node* left; 
    Node* right; 
    int data; 

    Node(int data){
        this -> data = data; 
        this -> left = NULL; 
        this -> right = NULL; 
    }

    ~Node(){
        cout << "the node with the data : " << this -> data << " removed succesfully " << endl; 
    }
};



class BST
{
public:
    Node* insertIntoBST(int data,Node* root){
        if(root == NULL){
            root = new Node(data); 
            return root; 
        }

        if(data > root -> data){
            root -> right = insertIntoBST(data,root -> right); 
        }

        if(data < root -> data){
            root -> left = insertIntoBST(data,root -> left); 
        }

        return root; 
    }

    void takeInput(Node* &root){
       int data; 
       cin >> data; 
       while(data != -1){
            root = insertIntoBST(data,root);  
            cin >> data; 
       } 
    }

    void display(Node* root){
        if(root == NULL){
            return; 
        }
        display(root -> left); 
        cout << root -> data << " "; 
        display(root->right); 
    }
    
};



int main(){
     // enter the project name
     Node* root = NULL; 
     BST b; 
     b.takeInput(root);  
     cout << "display " << endl; 
     b.display(root);  
     return 0;
}

// 10 8 21 7 27 5 4 3 