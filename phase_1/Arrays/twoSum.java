class Solution {
    public int[] twoSum(int[] nums, int target) {
       
        // using double loop:  
        // beats 34% using nested for loop: 
        // int[] ans = new int[2]; 
        // for(int i = 0; i < nums.length; i ++){
        //     int pivot = nums[i]; 
        //     for(int j = i;j < nums.length; j ++ ){
        //         if(pivot + nums[j] == target && i != j){
        //             ans[0] = i; 
        //             ans[1] = j; 
        //             return ans; 
        //         }
        //     }
        // }
        // return ans; 

        // beats 67% using map 
        // Map<Integer, Integer> map = new HashMap<>();
        // for (int i = 0; i < nums.length; i++) {
        //     map.put(nums[i], i);
        // }
        // for (int i = 0; i < nums.length; i++) {
        //     int complement = target - nums[i];
        //     if (map.containsKey(complement) && map.get(complement) != i) {
        //         return new int[] { i, map.get(complement) };
        //     }
        // }
        // // In case there is no solution, we'll just return null
        // return null;
    
        // 99.40% beats using hashtable 
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                return new int[] { map.get(complement), i };
            }
            map.put(nums[i], i);
        }
        // In case there is no solution, we'll just return null
        return null;
    }
}
