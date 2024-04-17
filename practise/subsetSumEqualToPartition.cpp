class Solution {
public:
    bool solve(vector<int> &nums,int maxi,int index,int sum){
        if(sum == maxi){
            return true; 
        }

        if(sum > maxi or index == nums.size()){
            return false; 
        }

        sum += nums[index];
        if(solve(nums,maxi,index+1,sum) == true){
            return true; 
        }
        sum -= nums[index]; 
        if(solve(nums,maxi,index+1,sum) == true){
            return true; 
        }
        return false; 
    }

    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int i=0;i<nums.size();i++)
            totalSum += nums[i];
    
        if (totalSum % 2 != 0)
            return false;
    
        int targetSum = totalSum / 2;

        return solve(nums,targetSum,0,0); 
    }
};
