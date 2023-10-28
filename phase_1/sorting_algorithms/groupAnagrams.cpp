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

