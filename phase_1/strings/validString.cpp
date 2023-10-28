#include<bits/stdc++.h> 
using namespace std; 

// problem 2: check whether the given string is pallindrome or not. 
class Solution {

private: 
    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return ch; 
        }
        else{
            return 0; 
        }
    }

    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch; 
        }

        else{
                char temp = ch - 'A' + 'a'; 
                return temp; 
        }
    }
public:
    bool isPalindrome(string s) {
        // step 1 :faltu character hatao. 
        // int i = 0; 
        string temp = ""; 

            for(int j = 0; j  < s.length() ; j ++){
                    if(valid(s[j])) {
                        temp.push_back(s[j]); 
                        // i ++; 
                    }
            }

        //lower case mein kardo sabko. 
            for(int j = 0; j  < temp.length() ; j ++){
                    temp[j] = toLowerCase(temp[j]); 
            }

        // check pallindrome 
            int i = 0, j = temp.length() - 1; 
                    while(i < j){
                            char a = temp[i]; 
                            char b = temp[j]; 
                                if((a^b) != 0){
                                        return false; 
                                }
                            i ++; 
                            j --;     
                    }
        return true;
    }
};
