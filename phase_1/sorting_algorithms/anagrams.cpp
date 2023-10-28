
// failed approach: 

class Solution {
private:
    bool isAnagram(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        vector<int> count(26, 0);

        for (char c : s1) {
            count[c - 'a']++;
        }

        for (char c : s2) {
            count[c - 'a']--;
            if (count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }

    void backtrack(vector<string>& strs, vector<vector<string>>& ans, vector<string>& temp, int start) {
        if (start == strs.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < strs.size(); i++) {
            if (temp.empty() || isAnagram(temp[0], strs[i])) {
                temp.push_back(strs[i]);
                backtrack(strs, ans, temp, i + 1);
                temp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp;

        backtrack(strs, ans, temp, 0);

        return ans;
    }
};


// correct approach:
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 

        // Create a map to store groups of anagrams
        map<string,vector<string>> ans1; 
        for(string str:strs){
            string sortedString = str; 
            sort(sortedString.begin(),sortedString.end()); 
            ans1[sortedString].push_back(str); 
        }
        for(auto &it:ans1){
            ans.push_back(it.second); 
        }
        return ans; 
    }
};



