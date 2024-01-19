#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public: 
        char data; 
        TrieNode* children[26]; 
        bool isTerminal; 

        TrieNode(char ch){
            data = ch; 
            for(int i = 0; i < 26; i ++){
                children[i] = NULL; 
            }
            isTerminal = false; 
        }
};

class Trie{
    public: 
    TrieNode* root; 

    Trie(){
        root = new TrieNode('\0'); 
    }

    void insertUtil(TrieNode* root,string word){
        // base case 
        if(word.length() == 0){
            root -> isTerminal = true; 
            return; 
        }
        // assumption word will be in caps 
        int index = word[0] - 'A'; 
        TrieNode* child; 
        if(root->children[index] != NULL){
            // present
            child = root -> children[index]; 
        }
        else{
            // absent
            child = new TrieNode(word[0]);  // new node created
            root -> children[index] = child;  // inserted into the tree
        }

        insertUtil(child,word.substr(1));         
    } 

    void insertWord(string word){
        insertUtil(root,word); 
    }

    bool searchUtil(TrieNode* root,string word){
        if(word.length() == 0){
            return root -> isTerminal; 
        }

        int index = word[0] - 'A'; 
        TrieNode* child; 
        if(root -> children[index] != NULL){
            // present 
            child = root -> children[index]; 
        }
        else{
            // absent 
            return false; 
        }

        return searchUtil(child,word.substr(1)); 
    }
    bool search(string word){
        return searchUtil(root,word); 
    }
};

int main(){
     // enter the project name
    Trie* t = new Trie(); 
    t->insertWord("SAIRAJ");  
    t->insertWord("SANKET");  
    t->insertWord("TUSHAR");  
    t->insertWord("VILAS");  
    t->insertWord("PUSHKAR");  

    cout << "SAIRAJ Present or not " << t -> search("SAIRAJ") << endl; 
    cout << "Raj Present or not " << t -> search("RAJ") << endl; 
    cout << "Sai Present or not " << t -> search("SAI") << endl; 
    cout << "Pushkar Present or not " << t -> search("PUSHKAR") << endl; 
    cout << "Navneet Present or not " << t -> search("NAVNEET") << endl; 
    cout << "Tushar Present or not " << t -> search("TUSHAR") << endl; 
    cout << "Sahil Present or not " << t -> search("SAHIL") << endl; 
    cout << "Shreyash Present or not " << t -> search("SHREYASH") << endl; 
    cout << "ARYAN Present or not " << t -> search("ARYAN") << endl; 
    cout << "Shubham Present or not " << t -> search("SHUBHAM") << endl; 
    cout << "Vilas Present or not " << t -> search("VILAS") << endl; 
    cout << "Tejas Present or not" << t -> search("TEJAS") << endl; 
    cout << "Sanket Present or not" << t -> search("SANKET") << endl; 


    cout << "endl" << endl; 
  return 0;
}