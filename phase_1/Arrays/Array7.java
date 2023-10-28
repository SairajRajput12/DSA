// package DSA all tutorial.phase_1.Arrays;
import java.util.*; 
import java.lang.*; 

public class Array7 {
    public static boolean isGreaterThannb3(int[] arr, int val){
        int count = 0; 
        for(int ele : arr){
            if(ele == val){
                count ++; 
            }
        }

        return count > arr.length/3; 
    }
    public List<Integer> majorityElement(int[] nums) {
        int val1 = nums[0]; 
        int count1 = 1; 
        int count2 = 0; 
        int val2 = 0; // assign any random values
    
        int i = 1; 
        while(i < nums.length){
            if(nums[i] == val1){
                count1 ++; 
            }
            else if(nums[i] == val2){
                count2 ++; 
            }
            else{
                if(count1 == 0){
                    val1 = nums[i]; 
                    count1 = 1; 
                }
                else if(count2 == 0){
                    val2 = nums[i]; 
                    count2 = 1; 
                }
                else{
                    count1 --; 
                    count2 --; 
                }
            }
            i ++; 
        }

        ArrayList<Integer>  a = new ArrayList<Integer>(); 
        if(isGreaterThannb3(nums,val1) == true){
            a.add(val1); 
        }
        if( val1 != val2 && isGreaterThannb3(nums,val2) == true){
            a.add(val2); 
        }
        return a; 
    }


   public static void main(String[] args) {
        // 
   }
}
