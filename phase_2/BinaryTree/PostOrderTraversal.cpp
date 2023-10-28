// #include <bits/stdc++.h>

// using namespace std;

// struct node {
//   int data;
//   struct node * left, * right;
// };

// vector < int > postOrderTrav(node * curr) {

//   vector < int > postOrder;
//   if (curr == NULL) return postOrder;

//   stack < node * > s1;
//   stack < node * > s2;
//   s1.push(curr);
//   while (!s1.empty()) {
//     curr = s1.top();
//     s1.pop();
//     s2.push(curr);
//     if (curr -> left != NULL)
//       s1.push(curr -> left);
//     if (curr -> right != NULL)
//       s1.push(curr -> right);
//   }
//   while (!s2.empty()) {
//     postOrder.push_back(s2.top() -> data);
//     s2.pop();
//   }
//   return postOrder;
// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// int main() {

//   struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> right = newNode(3);
//   root -> left -> left = newNode(4);
//   root -> left -> right = newNode(5);
//   root -> left -> right -> left = newNode(8);
//   root -> right -> left = newNode(6);
//   root -> right -> right = newNode(7);
//   root -> right -> right -> left = newNode(9);
//   root -> right -> right -> right = newNode(10);

//   vector < int > postOrder;
//   postOrder = postOrderTrav(root);

//   cout << "The postOrder Traversal is : ";
//   for (int i = 0; i < postOrder.size(); i++) {
//     cout << postOrder[i] << " ";
//   }
//   return 0;
// }

// Time complexity is : O(N) and Space complexity : O(n + n) 

// #include <bits/stdc++.h>

// using namespace std;

// struct node {
//   int data;
//   struct node * left, * right;
// };

// vector < int > postOrderTrav(node * cur) {

//   vector < int > postOrder;
//   if (cur == NULL) return postOrder;

//   stack < node * > st;
//   while (cur != NULL || !st.empty()) {

//     if (cur != NULL) {
//       st.push(cur);
//       cur = cur -> left;
//     } else {
//       node * temp = st.top() -> right;
//       if (temp == NULL) {
//         temp = st.top();
//         st.pop();
//         postOrder.push_back(temp -> data);
//         while (!st.empty() && temp == st.top() -> right) {
//           temp = st.top();
//           st.pop();
//           postOrder.push_back(temp -> data);
//         }
//       } else cur = temp;
//     }
//   }
//   return postOrder;

// }

// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }

// bool isSameTree(node* root1,node* root2){
//       if(root1 == NULL || root2 == NULL)
//       {
//           return (root1 == root2); 
//       }

//       return (root1-> data == root2->data) && isSameTree(root1-> left,root2->left) && isSameTree(root1->right,root2->right); 
// }



// bool isLeaf(node * root) {
//   return !root -> left && !root -> right;
// }


// // T.C ------> O(N) && Space complexity: O(N)
// void addLeftBoundary(node* root, vector<int> &res){
//     node* cur = root->left; 
//     while(cur){
//         if(isLeaf(cur)) res.push_back(cur->data); 
//         if(cur->left) cur = cur->left;  
//         else cur = cur->right;   // if there is no exist left
//     } 
// }

// void addRightBoundary(node * root, vector < int > & res) {
//   node * cur = root -> right;
//   vector < int > tmp;
//   while (cur) {
//     if (!isLeaf(cur)) tmp.push_back(cur -> data);
//     if (cur -> right) cur = cur -> right;
//     else cur = cur -> left;
//   }
//   for (int i = tmp.size() - 1; i >= 0; --i) {
//     res.push_back(tmp[i]);
//   }
// }

// void addLeaves(node * root, vector < int > & res) {
//   if (isLeaf(root)) {
//     res.push_back(root -> data);
//     return;
//   }
//   if (root -> left) addLeaves(root -> left, res);
//   if (root -> right) addLeaves(root -> right, res);
// }

// vector < int > printBoundary(node * root) {
//   vector < int > res;
//   if (!root) return res;

//   if (!isLeaf(root)) res.push_back(root -> data);

//   addLeftBoundary(root, res);

//   // add leaf nodes
//   addLeaves(root, res);

//   addRightBoundary(root, res);
//   return res;
// }



// int main() {

//   struct node * root = newNode(1);
//   root -> left = newNode(2);
//   root -> right = newNode(3);
//   root -> left -> left = newNode(4);
//   root -> left -> right = newNode(5);
//   root -> left -> right -> left = newNode(8);
//   root -> right -> left = newNode(6);
//   root -> right -> right = newNode(7);
//   root -> right -> right -> left = newNode(9);
//   root -> right -> right -> right = newNode(10);

//   vector < int > postOrder;
//   postOrder = postOrderTrav(root);

//   cout << "The postOrder Traversal is : ";
//   for (int i = 0; i < postOrder.size(); i++) {
//     cout << postOrder[i] << " ";
//   }



//   struct node * root1 = newNode(1);
//   root1 -> left = newNode(2);
//   root1 -> right = newNode(3);
//   root1 -> left -> left = newNode(4);
//   root1 -> left -> right = newNode(5);
//   root1 -> left -> right -> left = newNode(8);
//   root1 -> right -> left = newNode(6);
//   root1 -> right -> right = newNode(7);
//   root1 -> right -> right -> left = newNode(9);
//   root1 -> right -> right -> right = newNode(10);

//   vector < int > postOrder1;
//   postOrder1 = postOrderTrav(root1);

//   cout << endl; 
//   cout << "The postOrder Traversal is : ";
//   for (int i = 0; i < postOrder1.size(); i++) {
//     cout << postOrder1[i] << " ";
//   }

//   cout << endl; 
//   cout << "Both trees are same ? " << isSameTree(root,root1) << endl;  
//   cout << "Its boundary traversal is given by:" << endl; 
//   printBoundary(root); 
  

//   return 0;
// }



#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

vector < int > postOrderTrav(node * cur) {

  vector < int > postOrder;
  if (cur == NULL) return postOrder;

  stack < node * > st;
  while (cur != NULL || !st.empty()) {

    if (cur != NULL) {
      st.push(cur);
      cur = cur -> left;
    } else {
      node * temp = st.top() -> right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        postOrder.push_back(temp -> data);
        while (!st.empty() && temp == st.top() -> right) {
          temp = st.top();
          st.pop();
          postOrder.push_back(temp -> data);
        }
      } else cur = temp;
    }
  }
  return postOrder;

}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

bool isSameTree(node* root1,node* root2){
      if(root1 == NULL || root2 == NULL)
      {
          return (root1 == root2); 
      }

      return (root1-> data == root2->data) && isSameTree(root1-> left,root2->left) && isSameTree(root1->right,root2->right); 
}



bool isLeaf(node * root) {
  return !root -> left && !root -> right;
}


// T.C ------> O(N) && Space complexity: O(N)
void addLeftBoundary(node* root, vector<int> &res){
    node* cur = root->left; 
    while(cur){
        if(isLeaf(cur)) res.push_back(cur->data); 
        if(cur->left) cur = cur->left;  
        else cur = cur->right;   // if there is no left node, then move to right
    } 
}

void addRightBoundary(node * root, vector < int > & res) {
  node * cur = root -> right;
  vector < int > tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push_back(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur -> left;   // if there is no right node, then move to left
  }
  for (int i = tmp.size() - 1; i >= 0; --i) {
    res.push_back(tmp[i]);
  }
}

void addLeaves(node * root, vector < int > & res) {
  if (isLeaf(root)) {
    res.push_back(root -> data);
    return;
  }
  if (root -> left) addLeaves(root -> left, res);
  if (root -> right) addLeaves(root -> right, res);
}

vector < int > printBoundary(node * root) {
  vector < int > res;
  if (!root) return res;

  if (!isLeaf(root)) res.push_back(root -> data);

  addLeftBoundary(root, res);

  // add leaf nodes
  addLeaves(root, res);

  addRightBoundary(root, res);
  return res;
}



int main() {

struct node * root = newNode(1);
root -> left = newNode(2);
root -> right = newNode(3);
root -> left -> left = newNode(4);
root -> left -> right = newNode(5);
root -> left -> right -> left = newNode(8);
root -> right -> left = newNode(6);
root -> right -> right = newNode(7);
root -> right -> right -> left = newNode(9);
root -> right -> right -> right = newNode(10);

vector < int > postOrder;
postOrder = postOrderTrav(root);

cout << "The postOrder Traversal is : ";
for (int i = 0; i < postOrder.size(); i++) {
cout << postOrder[i] << " ";
}

struct node * root1 = newNode(1);
root1 -> left = newNode(2);
root1 -> right = newNode(3);
root1 -> left -> left = newNode(4);
root1 -> left -> right = newNode(5);
root1 -> left -> right -> left = newNode(8);
root1 -> right -> left = newNode(6);
root1 -> right -> right = newNode(7);
root1 -> right -> right -> left = newNode(9);
root1 -> right -> right -> right = newNode(10);

vector < int > postOrder1;
postOrder1 = postOrderTrav(root1);

cout << endl;
cout << "The postOrder Traversal is : ";
for (int i = 0; i < postOrder1.size(); i++) {
cout << postOrder1[i] << " ";
}

cout << endl;
cout << "Both trees are same ? " << isSameTree(root,root1) << endl;
cout << "Its boundary traversal is given by:" << endl;
vector<int> res = printBoundary(root);
for (int i = 0; i < res.size(); i++) {
cout << res[i] << " ";
}
cout << endl;

return 0;
}