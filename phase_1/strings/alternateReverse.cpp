#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
    string s = "navneet is my best friend";
    string ans = "";
    bool f = false;
    string word = "";  
    for(int i = 0; i < s.size(); i ++){
        if(s[i] != ' '){
            if(!f){
                word = word + s[i]; 
            }
            else{
                word = s[i] + word; 
            }
        }else{
            ans += word + ' '; 
            word = ""; 
            f = !f; 
        }
    }

    ans += word; 

    cout << ans << endl; 
    return 0;
}