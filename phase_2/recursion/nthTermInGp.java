
public class Solution {
    
    public static int nthTermOfGP(int N, int A, int R) {
        // Write you code here
        // A -> first term 
        // N -> integer 
        // R -> common ratio

        // G.P is a series of A,A(R),A(R^2),A(R^3). 
        // we have to find the nth term of the gp. 

        // e.g,  n = 5, a = 3, r = 2, 
        // 3,6,12,48. 
        // n = 4, r = 2, a = 1, 
        // 8 
        // n = 6, r = 1, a = 2, 
        // 2. 

        // return A*(int)Math.pow(R,(N-1));  // fails for large values 
        // if( n is even) : pow(r,n/2)*pow(r,n/2) 
        // if n is odd: r*pow(r,n/2)*pow(r,n/2) 
        // if(n == 0){
        //     return 1; 
        // }

        // int temp = nthTermOfGP(R,N/2); 
        // if(N%2 == 0){
        //     return Math.pow(temp,2); 
        // }
        // else{
        //     return R*Math.pow(temp,2); 
        // }

        // return A*
        int An = 1;
        An = A*power(R,N,1,An); 
        return An; 
    }


    // recursive approach 
    public static int power(int r,int n,int x,int ans){
        if(x == n){
            return ans; 
        }
        ans = ans*r; 
        x++; 
        return power(r,n,x,ans); 
    }

    // public static int power(int r,int n){
    //     int power = 1; 
    //     for(int i = 1; i < n; i ++){
    //         power = power*r; 
    //     }
    //     return power; 
    // }
}










public class Solution {    

public static int nthTermOfGP(int N, int A, int R) {

        int mod = (int) 1e9+7; 

       long x = (A*power(R,N-1))%mod; 

       return (int)x%mod; 

   } 

   static long power(int r,int n) {

        int m = (int)1e9+7;

        if (n==0) { 

           return 1; 

       }  

      long t = power(r,n/2)%m;

        t = (t*t)%m;

        if (n%2==0) {   

         return t%m;  

      } else { 

           return (t*r)%m; 

       } 

   }

 }
 
 
 
 
 
 
 
 
 
 
 
 
 



