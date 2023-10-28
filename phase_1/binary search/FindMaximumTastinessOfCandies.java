import java.util.*; 

class Solution {

    public boolean checks(int mid, int k, int[] price){
            int len = 1, j = 0; 
            for(int i = 1;i < price.length; i ++){
                if((price[i] - price[j]) >= mid){ // 1 2 5 8 13 21 ------> mid = 5, 
                    len ++; 
                    j = i; 
                }
            }

            if(len >= k){
                return true; 
            }

        return false;     
    }
    public int maximumTastiness(int[] price, int k) {
        Arrays.sort(price); 
        int low = 0 , high = price[price.length - 1] - price[0]; 
        int mid = low + (high - low)/2; 
        int ans = 0; 
            while(low <= high){
                    mid = low + (high - low)/2; 
                    if(checks(mid,k,price) == true){
                            ans = mid; 
                            low = mid + 1; 
                    }

                    else
                    {
                            high = mid - 1; 
                    }
            }

        return ans;     
   }
}

/**
 * FindMaximumTastinessOfCandies
 */
public class FindMaximumTastinessOfCandies {

    public static void main(String[] args) {
        System.out.println("This is question number 14 from medium level questions from leetcode"); 
    }
}