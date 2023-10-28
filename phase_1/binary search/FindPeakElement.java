public class FindPeakElement {
   public static void main(String[] args) {
    int[] nums = {2,1,3,4,51,4,34,1,2,4,5,2324,234};

    // this approach is not that efficient
    // int n = nums.length - 1; 
    //          int start = 0, end = n ; 

    //         //  if(n == 1){
    //         //      return 0; 
    //         //  }

    //         //  if(n == 2){
    //         //     return (nums[1] > nums[0]) ? 1:0;                
    //         //  }

    //         //  if(n == 3){
    //         //      int max1 = (nums[1] > nums[0]) ? 1 : 0; 
    //         //      int max2 = (nums[1] > nums[2]) ? 1 : 2; 
    //         //      int answer = (nums[max1] > nums[max2])? max1 : max2; 
    //         //      return answer; 
    //         //  }
    //           while(start < end){
    //               int mid = start + (end - start)/2; 
    //               if(nums[mid] > nums[mid+1]){
    //                 //   ans = nums[mid];
    //                   start = mid;  
    //               }
    //               else{
    //                   start = mid + 1;
    //               }
    //           }    
    //           System.out.println("The answer is at index: " + start + "\n value is :" + nums[start]); 

      // efficient approach: 
      for(int i = 1; i < nums.length; i ++)
        {
            if(nums[i] < nums[i-1])
            {// <
               System.out.println(i-1); 
               break; 
            }
        }

      System.out.println(nums.length-1);   
   }
}
