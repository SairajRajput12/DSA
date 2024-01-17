#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name

    // creation
    cout <<"welcome this is HashMap implementation tutorial " << endl; 
    unordered_map<string,int> ma; 
         
    // insertion 
    pair<string,int> p = make_pair("babbar",3); 
    ma.insert(p); 

    ma["mera"] = 1; 

    pair<string,int> p1{"love",2}; 
    ma.insert(p1); 

    
    cout << "i am batman" << endl; 

    // each entry is for unique keys not for duplicate keys. 
    // har ek key he corresponding ek hi entry hogi 

    // search 
    cout << ma["mera"] << endl;// 1
    cout << ma["babbar"] << endl; // 3
    cout << ma["love"] << endl;  // 2

    cout << ma["sairaj"] << endl;  // it creates entry for the key corresponding to the zero. 

    cout << ma.at("babbar") << endl; // it checks for an entry.
    // cout << ma.at("sz") << endl; // returns out of range exception 
    
    // to check presence 
    cout << ma.count("bro") << endl; // returns 0 for key is absent 
    ma.erase("babbar"); 
    cout  << ma.size() << endl; 

    unordered_map<string,int> :: iterator it = ma.begin(); 
    while(it != ma.end()){
        cout << it -> first << " " << it -> second << endl; 
        it ++; 
    }

  return 0;
}