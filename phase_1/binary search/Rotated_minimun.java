class Solution {
    public int findMin(int[] nums) {
        
    // Approach 1: Genral approach     
    /*
        Arrays.sort(nums); 
        int min = nums[0]; 
        return min; 
    */ 
    
    // Approach 2: Using Binary Search 
    int start = 0; 
    int end = nums.length -1 ;
    
    if (nums[start] < nums[end]) return nums[start];
    
    int mid = start + (end - start)/2; 
        while(start < end) 
        {
                if(nums[mid] > nums[end]){
                    // go to the right part
                    start = mid + 1; 
                }

                else if(nums[mid] < nums[end]){
                    // go to the left part or select this part 
                    end = mid; 
                }

                else{
                    // in case if element is equal 
                    end --; 
                }

            mid = start + (end - start)/2; 
        }

        return nums[mid]; 
    }
}
