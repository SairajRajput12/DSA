#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    string character; 
    int frequency; 
    Node* left; 
    Node* right; 
    Node(string character,int frequency){
        this -> character = character; 
        this -> frequency = frequency; 
        this -> left = NULL; 
        this -> right = NULL; 
    }
};

class cmp{
public: 
    bool operator()(Node* a,Node* b){
        return (a->frequency > b->frequency); 
    }  
};


class HaufmanCoding{
public: 
map<string,int> freq; 
priority_queue<Node*,vector<Node*>,cmp> q; 

    void initialiseMap(string x){
        for(char m : x){
            // cout << string(1,m) << endl; 
            freq[string(1,m)] ++;
        }
    }

    void initialiseMinHeap(){
        for(auto it : freq){
            Node* newNode = new Node(it.first,it.second); 
            q.push(newNode); 
        }
    }



    Node* constructHaufmanTree(string s){
        initialiseMap(s); 
        initialiseMinHeap(); 
        // now we got the filled priority queue
        while(q.size() > 1){
            Node* min1 = q.top(); 
            q.pop(); 
            Node* min2 = q.top(); 
            q.pop(); 

            Node* newNode = new Node("IN",(min1 -> frequency + min2 -> frequency)); 
            newNode -> left = min1; 
            newNode -> right = min2; 
            q.push(newNode); 
        }
        // cout << "run succesfully" << q.top()->frequency<< endl; 
        return q.top(); 
    }

    
};

int main(){
     // enter the project name
     string name = "ABRACADABRA"; 
     HaufmanCoding h; 
     Node* ans = h.constructHaufmanTree(name); 
     queue<Node*> pq; 
     pq.push(ans); 
     while(!pq.empty()){
        int size = pq.size(); 
        for(int i = 0; i < size; i ++){
            Node* temp = pq.front(); 
            pq.pop(); 
            cout << temp -> frequency << " ("<<temp->character<<") "; 
            if(temp -> left != NULL){
                pq.push(temp -> left); 
            }

            if(temp -> right != NULL){
                pq.push(temp -> right); 
            }
        }
        cout << endl; 
     }
    
  return 0;
}