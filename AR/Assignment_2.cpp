#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> dictionary; 
map<int,string> dict; 
vector<int> Encode; 

int main(){
     // enter the project name 
    // cout << "I am batman " << endl;  

    string input = "wabbabwabbabwabbabwabbabw"; 
    string current = "";

    for(int i = 0; i < input.size(); i ++){
        char c = input[i]; 
        string temp = c + current; 
        if(dictionary.find(temp) != dictionary.end()){
            // i got the string 
            current = temp;    
        }
        else{
            Encode.push_back(dictionary[current]); 
            dictionary[temp] = dictionary.size(); 
            current = string(1,c); 
        }
    }

    if(!current.empty()){
        dictionary[current] = dictionary.size(); 
    }

    for(auto it : dictionary){
        dict[it.second] = it.first; 
    }

    cout << "Encoded data : " << endl; 
    for(int m : Encode){
        cout << m << " "; 
    }
    cout << endl; 

    string decoded;
    for(int i = 0; i < Encode.size(); i++) {
        int code = Encode[i];
        if(dict.find(code) != dict.end()) {
            decoded += dict[code];
        }
    }

    cout << "Decoded data : " << endl; 
    cout << decoded << endl;


  return 0;
}