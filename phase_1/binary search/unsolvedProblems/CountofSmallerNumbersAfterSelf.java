import java.util.*; 
import java.io.*; 

public class CountofSmallerNumbersAfterSelf {
        // Given an integer array nums, return the array counts where counts[i] ] is the number of smaller elements to the right of to the right of nums[i]. 
        // using iterative approach using 2 loops: 

        // brute-force with TLE:       
    public static List<Integer> countSmaller(int[] nums) {
        List<Integer>s = new ArrayList<Integer>();
    //     // Given an integer array nums, return the array counts where counts[i] ] is the number of smaller elements to the right of to the right of nums[i]. 
    //     // using iterative approach using 2 loops: 

    //     // brute-force with TLE: 
        
         
    //     // for (int i = 0; i < nums.length; i++) {
    //     //     int element = nums[i];  
    //     //     int cnt = 0;
    //     //     for (int j = (i+1); j < nums.length; j++) {
    //     //             if(nums[j] < element){
    //     //                 cnt ++; 
    //     //             }
    //     //     }
    //     //     s.add(cnt); 
    //     // }
        
    //     // using brute-force with optimisation: 
    //     int i = 0, j = i + 1; 
    //     int cnt = 0;
        

    //     return s; 

            // int n = nums.length; 
            // List <Integer> ans= new ArrayList<Integer>(); 
            // for (int i = 0; i < n; i++) {
            //         int[] sample = new int[n - i]; 
            //         int startIndex = i;  
            //         System.arraycopy(nums,startIndex,sample,0,(n - i));
            //         int count = BinarySearch(nums[i],sample); 
            //         ans.add(count); 
            // }

            // return ans; 

            // create the duplicate array: 
            int[] num = Arrays.copyOf(nums, nums.length); 
            Arrays.sort(num); 
            int n = nums.length; 
            for (int i = 0; i < nums.length; i++) {
                    int target = num[i]; 
                    int low = i + 1, high = n - 1; 
                        while(low <= high){
                                int mid = low + (high - low)/2; 
                                if(nums[mid] < target){
                                    low = mid + 1; 
                                }
                                else { 
                                    high = mid - 1; 
                                }
                        } 
                    s.add(low);   

            }
            return s; 
        }

    // public static int BinarySearch(int e,int[] nums){
    //     int count = 0; 
    //     int l = 0, h = nums.length; 
    //     Arrays.sort(nums);
    //             while(l < h){
    //                 // System.out.println("hi");
    //                 int mid = l + (h - l)/2; 
    //                 if(nums[mid] < e){
    //                     count = mid - l + 1; 
    //                     l = mid + 1; 
    //                 }
    //                 else{
    //                     h = mid;   
    //                 }
    //             }

    //     return count; 
    // }

    public static void main(String[] args) {
        int[] nums = {5,2,6,1}; 
        System.out.println("The answer of this question is :" + countSmaller(nums));
    }    
}
