#include<bits/stdc++.h>
using namespace std; 


struct TrieNode
{
    TrieNode *child[26]={};
    int curIndex=-1;
    vector<int> wordIndex;
};


class Solution {
public:

    bool isPalindrome(string &s, int i, int j)
    {
        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
    TrieNode *root;
    
    void insert(string &s, int index)
    {
        TrieNode *cur = root;
        cout << "string to be insert " << s << endl; 
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int c = s[i] - 'a';
            if (cur->child[c] == nullptr)
                cur->child[c] = new TrieNode();
            if (isPalindrome(s, 0, i))
                cout << "string " << s.substr(0,i+1) << " was a pallindrome " << endl;  
                cur->wordIndex.push_back(index);
            cur = cur->child[c];
        }
        cur->wordIndex.push_back(index);

        cout << "word index i got " << endl; 
        for(int i = 0; i < cur->wordIndex.size(); i ++){
                cout << cur->wordIndex[i] << endl; 
        }
        cur->curIndex = index;
    }

    bool isItPallindrome(string newForm)
    {
        // cout << "Given is a string : "<<newForm << endl; 
        int START = 0, END = newForm.size()-1; 
        while(START < END){
            if(newForm[START] != newForm[END]){
                return false; 
            }
            START ++; 
            END --; 
        }

        // cout << "string " << newForm << " is a pallindrome " << endl; 
        return true; 
    }


    vector<vector<int>> palindromePairs(vector<string>& words) {
        // approach 1: brute force (TLE)
        // vector<vector<int>> ans;  
        // for(int i = 0; i < words.size(); i ++){
        //     for(int j = i+1; j < words.size(); j ++){
        //         string s1 = words[i] + words[j]; 
        //         string s2 = words[j] + words[i]; 

        //         if(isItPallindrome(s1)){
        //             ans.push_back({i,j}); 
        //         }

        //         if(isItPallindrome(s2)){
        //             ans.push_back({j,i}); 
        //         }
        //     }
           
        // }

        // return ans;

        // approach 2: using hashmap 
        
        // step 1: declaration   
        // vector<vector<int>> ans; 
        // unordered_map<string,int> mp; // by the way this map will store the string in reverse for along with their indexes 

        // // step 2: now add all string with reverse and their indexes 
        // for(int i = 0; i < words.size(); i ++){
        //     string w = words[i]; 
        //     reverse(w.begin(),w.end()); 
        //     mp[w] = i; 
        // }

        // if(words.size() < 2){
        //     return ans; 
        // }

        // // step 3: now get prefix and suffix for a string if the suffix is present and prefix is pallindrome then add it in the 2d vector 
        // // same goes in reverse 

        // for(int i = 0; i < words.size(); i ++){
        //     for(int j = 0; j <= words[i].size(); j ++){
        //         string st1 = words[i].substr(0,j); 
        //         string st2 = words[i].substr(j); 

        //         // now for prefix find is it present in map or not if present then check whether the suffix is pallindrome or not 
        //         // check whether is it of same word or not 

        //         if(mp.count(st1) and isItPallindrome(st2) and mp[st1] != i){
        //             ans.push_back({i,mp[st1]});
        //         }

        //         // now check for the suffix and if the suffix is present then check whether the prefix is pallindrome or not 
        //         if(!st1.empty() and mp.count(st2) and isItPallindrome(st1) and mp[st2] != i){
        //             ans.push_back({mp[st2],i}); 
        //         }

        //     }
        // }

        // // jar mi prefix shodhat asel tar suffix pallindrome hava or jar mi suffix shodhat asel tar prefix pallindrome hava,
        // return ans;

        // approach 3: using trie 
        root = new TrieNode();
        for (int i = 0; i < words.size(); i++)
            insert(words[i], i);
        
        vector<vector<int>> ans;

        for (int i = 0; i < words.size(); i++)
        {
            TrieNode *cur = root;
            string &s = words[i];
            for (int j = 0; j < s.size(); j++)
            {
                if (cur->curIndex != -1 && cur->curIndex != i && isPalindrome(s, j, s.size() - 1))
                {
                    cout << "Our patient is  "<< s << endl; 
                    ans.push_back({i, cur->curIndex});
                }
                cur = cur->child[s[j] - 'a'];
                if (cur == nullptr)
                    break;
            }
            // cout << "is it nullptr" << endl;

            if (cur == nullptr)
                continue;

            // cout << "is it nullptr" << endl;
            for (int j : cur->wordIndex)
            {
                cout << "at index = " << i << " " <<j << endl; 
                if (i == j)
                    continue;
                ans.push_back({i, j});
            }
        }
        return ans;
    }
};



int main()
{
    vector<string> ap {"abcd","dcba","lls","s","sssll"};
    Solution s; 
    vector<vector<int>> ans; 
    ans =  s.palindromePairs(ap);  
    for(int i = 0; i < ans.size(); i ++){
        for(int j = 0; j < ans[i].size(); j ++){
            cout << ans[i][j] << " "; 
        }
        cout << endl; 
    }
    return 0;
}








/*
Practise:

class Node{
public: 
    Node* arr[26]; 
    char data; 
    vector<int> wordIndex; 
    int currIndex = -1; 

    Node(char data){
        this -> data = data; 
        for(int i = 0; i < 26; i ++){
            this -> arr[i] = nullptr;
        }
        this -> currIndex = -1; 
    }
}; 

class Trie{
public: 
Node* root; 

    Trie(){
        root = new Node('\0'); 
    }

    bool isPalindrome(string &s, int i, int j)
    {
        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }

    void insert(string &s,int index1){
        // step 1: push the nodes in the reverse manner 
        Node* curr = root; // create the iterating node 
        for(int i = s.size()-1; i >= 0; i --){
            int index = s[i] - 'a'; 
            if(curr->arr[index] == nullptr){
                curr -> arr[index] = new Node(s[i]); 
            }

            if(isPalindrome(s,0,i)){
                curr -> wordIndex.push_back(index1);
            }
 
            curr = curr -> arr[index]; 
        }

        curr->wordIndex.push_back(index1); 
        curr->currIndex = index1; 
    }
};


class Solution {
public:


    bool isItPallindrome(string newForm)
    {
        // cout << "Given is a string : "<<newForm << endl; 
        int START = 0, END = newForm.size()-1; 
        while(START < END){
            if(newForm[START] != newForm[END]){
                return false; 
            }
            START ++; 
            END --; 
        }

        // cout << "string " << newForm << " is a pallindrome " << endl; 
        return true; 
    }


    vector<vector<int>> palindromePairs(vector<string>& words) {
        // approach 1: brute force (TLE)
        // vector<vector<int>> ans;  
        // for(int i = 0; i < words.size(); i ++){
        //     for(int j = i+1; j < words.size(); j ++){
        //         string s1 = words[i] + words[j]; 
        //         string s2 = words[j] + words[i]; 

        //         if(isItPallindrome(s1)){
        //             ans.push_back({i,j}); 
        //         }

        //         if(isItPallindrome(s2)){
        //             ans.push_back({j,i}); 
        //         }
        //     }
           
        // }

        // return ans;

        // approach 2: using hashmap 
        
        // step 1: declaration   
        // vector<vector<int>> ans; 
        // unordered_map<string,int> mp; // by the way this map will store the string in reverse for along with their indexes 

        // // step 2: now add all string with reverse and their indexes 
        // for(int i = 0; i < words.size(); i ++){
        //     string w = words[i]; 
        //     reverse(w.begin(),w.end()); 
        //     mp[w] = i; 
        // }

        // if(words.size() < 2){
        //     return ans; 
        // }

        // // step 3: now get prefix and suffix for a string if the suffix is present and prefix is pallindrome then add it in the 2d vector 
        // // same goes in reverse 

        // for(int i = 0; i < words.size(); i ++){
        //     for(int j = 0; j <= words[i].size(); j ++){
        //         string st1 = words[i].substr(0,j); 
        //         string st2 = words[i].substr(j); 

        //         // now for prefix find is it present in map or not if present then check whether the suffix is pallindrome or not 
        //         // check whether is it of same word or not 

        //         if(mp.count(st1) and isItPallindrome(st2) and mp[st1] != i){
        //             ans.push_back({i,mp[st1]});
        //         }

        //         // now check for the suffix and if the suffix is present then check whether the prefix is pallindrome or not 
        //         if(!st1.empty() and mp.count(st2) and isItPallindrome(st1) and mp[st2] != i){
        //             ans.push_back({mp[st2],i}); 
        //         }

        //     }
        // }

        // // jar mi prefix shodhat asel tar suffix pallindrome hava or jar mi suffix shodhat asel tar prefix pallindrome hava,
        // return ans;

        // approach 3: using trie 
        Trie* t = new Trie(); 
        for(int i = 0; i < words.size(); i ++){
            t->insert(words[i],i); 
        }

        vector<vector<int>> ans; 
        for(int i = 0; i < words.size(); i ++){
            Node* curr = t->root; 
            for(int j = 0; j < words[i].size(); j ++){
                if(curr->currIndex != -1 and curr -> currIndex != i and t->isPalindrome(words[i],j,words[i].size()-1)){
                    cout << "index added " << i << " " << curr->currIndex << endl; 
                    ans.push_back({i,curr->currIndex}); 
                }
                curr = curr -> arr[words[i][j]-'a']; 
                if(curr == nullptr){
                    break; 
                }
            }

            if(curr == nullptr){
                continue; 
            }

            for(int j : curr -> wordIndex){
                if(i == j){
                    continue; 
                }
                ans.push_back({i,j}); 
            }
        }
        return ans; 
    }
};















*/

