#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
    int data; 
    Node* left; 
    Node* right;  

    Node(int data) {
        this -> data = data; 
        this -> left = NULL; 
        this -> right = NULL; 
    }

    ~Node() {
        cout << "The data with the node : " << this -> data << " deleted successfully" << endl; 
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data; 
    cin >> data; 

    if(data == -1){
        return NULL; 
    }

    root = new Node(data); 

    cout << "Enter the data for inserting in left" << endl; 
    root->left = buildTree(root->left);

    cout << "Enter the data for inserting in right" << endl; 
    root->right = buildTree(root->right); 

    return root; 
}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q; 
    q.push(root); 
    // q.push(NULL); 

    while(!q.empty()) {
        Node* temp = q.front(); 
        cout << temp -> data << " "; 
        q.pop();

        if(temp == NULL){
            // purana level complete traverse ho chuka hai 
            cout << endl; 
            if(!q.empty()){
                q.push(NULL); 
            }
        }
        else{
            if(temp -> left != NULL) {
                q.push(temp -> left); 
            }

            if(temp -> right != NULL) {
                q.push(temp -> right); 
            }
            }
        }

    }
    // return root; 


int main() {
    // Enter the project name
    Node* root = NULL; 
    
    // Creating the tree 
    root = buildTree(root); 

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root); 
    cout << endl;

    // Sample input: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}
