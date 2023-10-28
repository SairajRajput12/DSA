import java.util.*; 
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        // Set s1 = new HashSet(Arrays.asList(nums1));
        // Set s2 = new HashSet(Arrays.asList(nums2)); 

    // Approache 1: using double pointer methood    
    /*
        Arrays.sort(nums1); 
        Arrays.sort(nums2); 
        Set<Integer> s3 = new HashSet<>();
        int i = 0, j = 0;  
            while(i < nums1.length && j < nums2.length){
                if(nums1[i] > nums2[j]){
                    j ++; 
                }

                else if(nums1[i] < nums2[j])
                {
                    i ++;
                }

                else{
                    s3.add(nums1[i]); 
                    i ++; 
                    j ++; 
                }
            }
       int[] result = new int[s3.size()];
        int k = 0;
        for (Integer num : s3) {
            result[k++] = num;
        }

        return result;
    */ 

    // Approache 2: Using binary search  
    Arrays.sort(nums2); 

    Set<Integer>  s3 = new HashSet(); 
    for(int x: nums1){
        if(binarySearch(nums2,x)){
            s3.add(x); 
        }
    }

    int[] result = new int[s3.size()];
        int k = 0;
        for (Integer num : s3) {
            result[k++] = num;
        }

        return result;
    }

    public boolean binarySearch(int[] nums,int target)
    {
        int start = 0; 
        int end = nums.length - 1; 
        int mid = start + (end - start)/2; 
            while(start <= end){
                if(nums[mid] > target){
                    end = mid - 1; 
                }

                else if(nums[mid] < target){
                    start = mid + 1; 
                }

                else{
                    return true; 
                }

                mid = start + (end - start)/2;
            }

        return false; 
    }
}
