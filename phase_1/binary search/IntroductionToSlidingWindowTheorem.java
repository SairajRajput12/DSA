// import java.util.*;
// import java.io.*;
public class  IntroductionToSlidingWindowTheorem{

        public static int maxSubarraySum(int[] arr, int k){
                int window = 0; 
                for (int i = 0; i < k; i++) {
                        window += arr[i]; 
                }

                int maxSum = window; 

                for(int i = k; i < arr.length; i ++){
                        window += arr[i] - arr[i - k]; 
                        maxSum = Math.max(maxSum,window);
                }
                return maxSum;             
        }
        public static void main(String args[]){
        // code
                // using sliding window problem: 
                // 1] Define the size of the window: Determine the fixed size of the window that will be used to slide over the input sequence.
                // 2] Initialize the window: Create the first window by selecting the first k elements from the input sequence, where k is the size of the window.
                // 3] Process the window: Perform some operation on the subsequence of elements within the window. This operation can be anything, depending on the problem you are trying to solve. 
                // 4] Slide the window: Move the window to the right by one position and repeat steps 3-4 until the end of the input sequence is reached.  
                // 5] Handle the last window: If the input sequence has an odd number of elements and the window size is even, the last window may not contain k elements. 

                // Problem: Given an array of integers, find the maximum sum of any contiguous subarray of size k. 

                int[] arr = {1, 4, 2, 10, 2, 3, 1, 0, 20};
                int k = 4;
                int maxSum = maxSubarraySum(arr, k);
                System.out.println("Maximum sum of subarray of size " + k + " is " + maxSum);
        }
}