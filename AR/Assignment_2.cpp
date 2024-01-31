#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int> dictionary; 
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

    cout << "Encoded data : " << endl; 
    for(int m : Encode){
        cout << m << " "; 
    }
    cout << endl; 

  return 0;
}