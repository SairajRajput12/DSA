
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(int index,int i1,vector<string>& wordDict,string s){
        string ans = ""; 
        for(int i = index; i <= i1; i ++){
            ans += s[i]; 
        }

        for(int i = 0; i < wordDict.size(); i ++){
            if(ans == wordDict[i]){
                return true; 
            }
        }

        return false; 
    }

    bool solve(string s,int index,vector<string>& wordDict){
        if(index >= s.size()){
            return true; 
        }

        bool found = false; 
        for(int i = index; i < s.size(); i ++){
            if(isPossible(index,i,wordDict,s) == true){
                return solve(s,i+1,wordDict); 
            }
        }

        return found; 

    }

    bool wordBreak(string s, vector<string>& wordDict) {
        bool ans = solve(s,0,wordDict); 
        return ans; 
    }
};

int main(){
     // enter the project name 
     cout << "I am sairaj " << endl; 
  return 0;
}