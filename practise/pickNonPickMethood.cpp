#include<bits/stdc++.h>
using namespace std;
class Solution {
    void solve(vector<vector<int>> &ans,vector<int> &sample,vector<int> &nums,int index){
        if(index == nums.size()){
            return; 
        }

        // for(int i = index; i < nums.size(); i ++){
            // sample.push_back(nums[i]);
            // ans.push_back(sample); 
            // solve(ans,sample,nums,i+1); 
            // sample.pop_back();  
        // }

        // using pick or non pick
        sample.push_back(nums[index]);
        ans.push_back(sample); 
        solve(ans,sample,nums,index+1); 
        sample.pop_back();  
        solve(ans,sample,nums,index+1); 
        // ans.push_back(sample); 
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> sample; 
        ans.push_back(sample); 
        solve(ans,sample,nums,0); 
        return ans;    
    }
};


int main(){
     // enter the project name
  return 0;
}