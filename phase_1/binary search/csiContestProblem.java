import java.util.*;
// import java.io.*;
public class  csiContestProblem{
        public static int ans(int[] arr,int target){
            //     Arrays.sort(arr); // 1 2 2 3 3 4
            //      if (arr == null || arr.length == 0) return 0;
            //     int min_len = Integer.MAX_VALUE; 
            //     int i = 0, j = 0,result = 0; 
            //     while(j < arr.length){
            //         result += arr[j ++]; 
            //         while(result >= target){
            //             min_len = Math.min(min_len,j-i); 
            //             result -= arr[i ++]; 
            //         }

            //     }
            // return  min_len == Integer.MAX_VALUE ? 0 : min_len; 

            int min = Integer.MAX_VALUE; 
                for (int i = 0; i < arr.length; i++) {
                    int pos = arr[i]; 
                    int start=  (i + 1); 
                    int end = (arr.length - 1); 
                        while(start <= end){
                            int mid = start + (end - start)/2; 
                            if(arr[mid] + pos >= target){
                                    min = Math.min(min,mid-i+1);
                                    end = mid - 1;
                            }

                            else{
                                    pos += arr[mid]; 
                                    start = mid + 1;
                            }
                        }
            }
            return min; 
        }
        public static void main(String args[]){
        // code
// using sliding window problem: 
                // 1] Define the size of the window: Determine the fixed size of the window that will be used to slide over the input sequence.
                // 2] Initialize the window: Create the first window by selecting the first k elements from the input sequence, where k is the size of the window.
                // 3] Process the window: Perform some operation on the subsequence of elements within the window. This operation can be anything, depending on the problem you are trying to solve. 
                // 4] Slide the window: Move the window to the right by one position and repeat steps 3-4 until the end of the input sequence is reached.  
                // 5] Handle the last window: If the input sequence has an odd number of elements and the window size is even, the last window may not contain k elements. 
        
                int[] arr = {1,4,4};
                int k = 4;
                int minLen = ans(arr,k); 
                System.out.println("The answer of this question is :" + minLen);                
        }
}