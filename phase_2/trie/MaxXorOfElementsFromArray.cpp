class Node{
public: 
    Node* bits[2]; 
    Node(){
        for(int i = 0; i < 2; i ++){
            bits[i] = nullptr; 
        }
    }
}; 

class Trie{
public: 
Node* root = new Node(); 


    void insert(int num){
        Node* curr = root; 
        for(int i = 31; i >= 0; i --){
            int bit = (num >> i)&1;
            // cout << (num >> i) << " " << (num >> 1) << endl;   
            // cout << 
            if(curr -> bits[bit] == nullptr){
                curr -> bits[bit] = new Node(); 
            }
            curr = curr -> bits[bit];   
        }
    }

    int getMaxXor(int num){
        Node* curr = root; 
        int maxSum = 0; 
        for(int i = 31; i >= 0; i --){
            int bit = (num >> i) & 1; 
            if(curr->bits[!bit] != nullptr){
                maxSum = maxSum | (1<<i); 
                curr = curr -> bits[!bit]; 
            }
            else{
                curr = curr -> bits[bit]; 
            }
        }
        return maxSum; 
    }

};


class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        // approach 1: TLE
        // vector<int> ans; 
        // sort(nums.begin(),nums.end()); 
        // for(int j = 0; j < queries.size(); j ++){
        //     int xi = queries[j][0]; 
        //     int mi = queries[j][1]; 
        //     int maxXor = -1; 
        //     for(int i = 0; i < nums.size(); i ++){
        //         if(mi < nums[0]){
        //             break; 
        //         }
        //         if(nums[i] <= mi){
        //             maxXor = max(maxXor,(nums[i]^xi)); 
        //         }
        //         else{
        //             break; 
        //         }
        //     }
        //     ans.push_back(maxXor); 
        // }
        // return ans; 
    
        // approach 2: using bitset and trie 
        // so i have come with a solution: 
        // what if we  started inserting integers according which are less then the queries of max of elements. 
        Trie t;
        sort(nums.begin(),nums.end()); 
        vector<pair<int,pair<int,int>>> offline; 
        int q = queries.size(); 
        for(int i = 0; i < q; i ++){
            offline.push_back({queries[i][1],{queries[i][0],i}});
        }    

        sort(offline.begin(),offline.end()); 

        vector<int> ans(q,0); 
        int ind = 0; 
        for(int i = 0; i < q; i ++){
            int ai = offline[i].first; 
            int xi = offline[i].second.first; 
            int qInd = offline[i].second.second; 

            while(ind < nums.size() and nums[ind] <= ai)
            {   
                t.insert(nums[ind]); 
                ind ++; 
            }

            if(ind == 0){
                // no elements inserted 
                ans[qInd] = -1; 
            }
            else{
                ans[qInd] = t.getMaxXor(xi);  
            }
        }
        return ans; 

    }
};






