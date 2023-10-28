import java.util.*; 

public class Solution {
    public static void printpositive(int x,int k,int n,List<Integer> ans){
        if(x == n){
            return; 
        }
        // System.out.print(x+" "); 
        ans.add(x);  
        x = x + k; 
        printpositive(x, k, n,ans);
    }
    public static int printnegative(int n,int k,List<Integer> ans){
        if(n <= 0){
            return n; 
        }
        // System.out.print(n+" "); 
        ans.add(n);  
        n = n - k; 
        return printnegative(n,k,ans); 
    }

    public static List<Integer> printSeries(int n, int k) {
        // Write your code here
        // two positive integer 
        // N and K 
        // print the series of numbers of N-K until N becomes 0 and then add K until it becomes N 
        List<Integer> ans = new ArrayList(); 
        int x = printnegative(n,k,ans); 
        printpositive(x,k,n,ans); 
        // System.out.print(n);  
        ans.add(n); 
        return ans; 
    }
}
