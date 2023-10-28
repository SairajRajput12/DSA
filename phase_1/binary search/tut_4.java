import java.io.*; 
public class tut_18
{
	public static void main(String[] args) {
		Solution s = new Solution(); 
		int[] arr = {1,2,2,3,1}; 
		System.out.println(s.ayushGivesNinjatest(3,5,arr)); 
	}
}

class Solution {
   public  long ayushGivesNinjatest(int n, int m, int[] time) {
       // Write your code here.
       long start = 0, totalTime = 0, ans = -1;
       for(int i: time){
           totalTime += i;
       }
       long end = totalTime;
       while(start <= end){
           long mid = (start + end) / 2;
           if(isPossible(n,m,time,mid)){
               ans = mid;
               end = mid - 1;
           }else{
               start = mid + 1;
           }
       }
       return ans;
   }
   private static boolean isPossible(long n, long m, int[] arr, long mid){
       int day = 1;
       System.out.println("The value of the mid is :" + mid); 
       System.out.println();
       long requireTime = 0;
       for(int x : arr){ 
           System.out.println("On day :" + day);
           System.out.println("requireTime is :" + requireTime);
           if(requireTime + x <= mid){
               requireTime += x;
           } 
           else{
               ++day;
               if(day > n || x > mid){
                   return false;
               }
               requireTime = x;
           }
       }
       return true;
   }
}

