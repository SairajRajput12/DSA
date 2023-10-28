/*
628. Maximum Product of Three Numbers
Easy
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
 



*/

class Solution { 
//     public int giveMax(int[] nums){ 

//     //  Fails in: negative number 
//         int max = Integer.MIN_VALUE; 
//         int index = 0; 
//         for(int i = 0; i < nums.length; i ++){
//             if(max < nums[i]){
//                 index = i; 
//                 max = nums[i]; 
//             }
//         }
//         nums[index] = Integer.MIN_VALUE; 
//         return max; 
//     }

//    public int giveMin(int[] nums){ 

//     //  Fails in: negative number 
//         int max = Integer.MAX_VALUE; 
//         int index = 0; 
//         for(int i = 0; i < nums.length; i ++){
//             if(max > nums[i]){
//                 index = i; 
//                 max = nums[i]; 
//             }
//         }
//         nums[index] = Integer.MAX_VALUE; 
//         return max; 
//     }
    
    public int maximumProduct(int[] nums) {
       
        // fails in negative number
        // int a = giveMax(nums);  
        // int b = giveMax(nums); 
        // int c = giveMax(nums); 
        // int product = a*b*c; 
        // another logic: 
        // modification: go for 2 least number;  

        // 1] find max1, max2, max3 and min1, min2;  
        int max1 = Integer.MIN_VALUE; 
        int max2 = max1; 
        int max3 = max1; 
        int min1 = Integer.MAX_VALUE; 
        int min2 = min1; 

        // 2] compare   

        for(int i = 0; i < nums.length ; i ++ ){
        // max check 
            int val = nums[i]; 
            if(val >= max1){
                max3 = max2; 
                max2 = max1; 
                max1 = val; 
            }
            else if(val >= max2){
                max3 = max2; 
                max2 = val; 
            }
            else if(val >= max3){
                max3 = val; 
            }
        // min check 
            if(val <= min1){
                min2 = min1; 
                min1 = val; 
            }
            else if(val <= min2){
                min2 = val; 
            }
        }
        return Math.max(min1*min2*max1,max1*max2*max3); 
    }
}


