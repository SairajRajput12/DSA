#include<bits/stdc++.h> 
using namespace std;

char tree[10]; 

// function for setting the value of the root element 
int root(char key){
    // if given tree already has root
    if(tree[0] != '\0'){
        cout << "It already has root, can't insert" << endl; 
    }
    
    else{
        tree[0] = key; 
    }
    return 0; 
}


// function for inserting the left node 
int set_left(char key,int parent){
    if(tree[parent] != '\0'){
        cout << "can't set left element subtree at :" << (2*(parent) + 1)<<", no parent found" << endl; 
    }
    
    else{
        tree[2*parent + 1] = key; 
    }
    return 0; 
}

// function for inserting the right node 
int set_right(char key,int parent){
    if(tree[parent] != '\0'){
        cout << "can't set right element subtree at :" << (2*(parent) + 2)<<", no parent found" << endl; 
    }
    
    else{
        tree[2*parent + 2] = key; 
    }
    return 0; 
}

int printTree(){
    for (int i = 0; i < 10; i++) {
        if(tree[i] != '\0'){
            cout << tree[i] << " "; 
        }
        
        else{
            cout << "-";
        }
    }
    
    return 0; 
}



int main(){
    cout << " I am Batman :" << endl; 
    cout << "This is Tree representation using array :" << endl; 
    // int a[5]; 
    // cout << "Entererd the elements of an array :" << endl; 
    //     for (int i = 0; i < 5; i++) {
    //         cin >> a[i]; 
    //     }       
        
    // cout << "The array that you have enetered is :"; 
    //     for (int i = 0; i < 5; i++) {
    //         cout << a[i] << " "; 
    //     }
    
    // Tree in array is represented in such a way that: 
    // indices represents the nodes of the tree. 
    // array values give the particular value at that index. 
    // The index of the root node is -1. 
    /*
        Trees can be represented in two ways as listed below:

            a] Dynamic Node Representation (Linked Representation).
            b] Array Representation (Sequential Representation).
    
    //  father, left_son and right_son are the values of indices of the array.
    */
    
    /*  Case 1: (0 to n-1) 

            if (say)father =  p; 
            then left_son  = (2*p)+1; 
            and right_son  = (2*p)+2;

        Case 2: 1 to n
    
            if (say)father = p; 
            then left_son  = (2*p); 
            and right_son  = (2*p)+1;
    */
    root('S'); 
    set_left('A',1); // inserting at first node. 
    set_right('I',1); // inserting at first node.
    set_left('A' , 1); 
    set_left('R',2); // inserting at left side of the node.  
    set_right('A',2); // inserting at right side of the node.
    set_left('J',2); 
    printTree();
    cout <<  endl;
}
