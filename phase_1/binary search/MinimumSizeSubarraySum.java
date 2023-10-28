// import java.util.*;
// import java.io.*;
public class  MinimumSizeSubarraySum{

    public static int minSubArrayLen(int target,int[] arr){
            //   Arrays.sort(arr); // 1 2 2 3 3 4
            //      if (arr == null || arr.length == 0) return 0;
                // int min_len = Integer.MAX_VALUE; 
            //     int i = 0, j = 0,result = 0; 
            //     // using the conditional blocks instead of the code was the biggest mistake. 
            //     while(j < arr.length){
            //         result += arr[j++]; 
            //         while(result >= target){
            //             min_len = Math.min(min_len,j-i); 
            //             result -= arr[i ++];
            //         }

            //     }
            // return  min_len == Integer.MAX_VALUE ? 0 : min_len; 
    
             int n = arr.length;
    int ans = Integer.MAX_VALUE;

    for (int i = 0; i < n; i++) {
        int sum = arr[i];
        int left = i + 1;
        int right = n - 1;

        // Perform binary search to find the rightmost index j such that
        // sum of nums[i..j] >= target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (sum + arr[mid] >= target) {
                ans = Math.min(ans, mid - i + 1);
                right = mid - 1;
            } else {
                sum += arr[mid];
                left = mid + 1;
            }
        }
    }

    return ans == Integer.MAX_VALUE ? 0 : ans;
    }
    public static void main(String args[]){
    // code
            System.out.println("Minimum size of subarray sum"); 
            int k = 7; 
            int[] a = {2,3,1,2,4,3}; 
            System.out.println("The answer is :" + minSubArrayLen(k, a));
             
    }
}