
public class tut_9 {
    public static void main(String args[]) {
        // TODO code application logic here 
        solve S = new solve(); 
         System.out.println("this is tutorial number 9: Functions"); 
         System.out.println("The answer is: " + S.ncr(13,0));
         S.counter(9);  
         // Function call 
         int d = S.isPrime(7); 
         S.ap(3); 
         S.setBit(2,3); 
         S.fibo(10);
         // output question: 
       
    }
}


class solve{
    // methoods:
    
    // Function body
    int factorial(int n){
        int fact = 1; 
            if(n==1 || n==0){        
                return 1; 
            }
            else{
                for(int i=1;i<=n;i++){
                    fact*=i;
                }     
                return fact;
            }    
    }   

    
    
    int ncr(int n,int r){
    
       //  Formula:          n!/ (r! *(n-r)!) 
    
            int num = factorial(n);
            int denom = factorial(r)*factorial(n-r);
       return num/denom;
    }
    
    void counter(int n){
        for(int i=1;i <= n;i++){
            System.out.print(i + " ");
        }
        System.out.println();
    }
    
    int isPrime(int n){
        int i = 2; 
        while(i<n){
            if(n % i == 0){
                System.out.println("This is not a prime number"); 
                return 0; 
            }
            i++;
        }
        System.out.println(n+ " is a prime number");
        return 1; 
    } 
    
    void ap(int n){
        System.out.println("The "+n+"th Term of the given AP is: "+(3*n + 7));
    } 
    
    void setBit(int a,int b){
        int j = 0; 
        while(a != 0 ){
            int bit = a & 1; 
            if(bit == 1){
                j++; 
            }
            a = a >>1;  
        }
        
        int l = 0; 
        while(b != 0 ){
            int bit = b & 1; 
            if(bit == 1){
                l++; 
            }
            b = b >>1;  
        }
        
        
      System.out.println("the total number of the set bits from a and b are: "+(l+j));
    }
    
    void fibo(int n){
        int first = 0; 
        int second = 1; 
        int result = 0;
        int i = 1;
        System.out.print(first+" "+second+" ");
            while(i <= (n-2)){
                result = first + second;
                System.out.print(result + " ");
                first = second; 
                second = result;
                i++;
            }
    }
    
    
 }


/*
    Function call stack: 
       1] main function is called. 
       2] other function will get called according to their order of instruction.

       in case of ncr the stack will be as given below:                       
                    |           |
                    |_factorial_|
                    |____ncr ___|
                    |___main____|
*/

    // HWN: 3*n + 7 and n--> input. give nth term. 
    // HWN: input: a & b are input. give total number of set number of set bits from both variables. 
    // HWN: Fibbonaci series. 0 1 1 2 3 5 8 13 21 34 . . . .. . . . . . . . 
