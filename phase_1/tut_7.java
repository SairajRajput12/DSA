import java.util.*; 
import java.lang.Math; 

public class Main
{
	public static void main(String[] args) {
        //System.out.println("Hello World"); 
    //Leet code question 1:
        // 32 bit ke integer ko reverse karo 
    /*    
        Scanner s=new Scanner(System.in); 
        System.out.println("enter the number"); 
        int n=s.nextInt(); 
        int reverse=0; 
            while(n!=0){
                int digit=n%10; 
                reverse=(reverse*10)+digit; 
                // important: this step isn't valid for critical range of 2^31-1 to -2^31 
                n=n/10; 
            }
            
            if(reverse>((Integer.MAX_VALUE)/10) || reverse<((Integer.MIN_VALUE)/10)){
                // reverse * 10 > (int.max/10) *10 
                // reverse > int_max 
                // return 0 
                reverse=0; 
            }
        System.out.println("the reverse of the given number is :"+reverse); 
        */
        
    //  question 2: Complement of base 10 integer 
    // e.g, 5 ka Complement means binary representation ka Complement will be 010 
    /*
        Scanner s=new Scanner(System.in); 
        System.out.println("enter the number"); 
        int n=s.nextInt();  
        int ans=0;  
        int i=0; 
        while(n!=0){
            int digit = n & 1; 
            if(digit==0){
                digit=1; 
            } 
            else if(digit==1){
                digit=0; 
            } 
            ans+=(Math.pow(10,i)*digit); 
            i++; 
            n=n>>1; 
        } 
        System.out.println("the Complement of the given number in binary form is: "+ans);
        
        //  binary to decimal conversion  
        n=0; 
        i=0; 
        while(ans!=0){
             int digit=ans%10; 
             if(digit==1){
                n+=((Math.pow(2,i))*digit); 
             } 
            i++; 
            ans=ans/10; 
        } 
        System.out.println("the decimal form of its complement is: "+n);
        */
        
     // video solution: 
     // Dry run: 
         /*  
            n = 5; 
            // formula
            1]    int j= ~ n =1111.........010; 
            2]    mask= j & 1 = 00000000........010; 
            3]    right shift in loop. 
            4]    left shift the mask and OR with 1. 
         */
         
    /*     
    // implemented code
        Scanner s=new Scanner(System.in); 
        System.out.println("enter the number"); 
        int n=s.nextInt();  
        if(n==0){
             System.out.println("the decimal form of the complement of the number is :"+1);    
        }
        else{
                int mask=0; 
                int m=n;
                while(m!=0){
                    mask=(mask<<1) | 1;  
                    // mask = 000000.........111
                    m=m>>1;
                    // n= 0000000000.........000
                }
        
                int ans = (~n) & mask; 
                // ~n = 1111111111111........................111 
                // mask= 000000000000000.....................111
        
                System.out.println("the decimal form of the complement of the number is :"+ans);
        }
    */
    
    //  question 3: power of 2 
    // kisibhi integer ko 2 ke power mein discribe kar sake to true print karo 
        Scanner s=new Scanner(System.in); 
        System.out.println("enter the number"); 
        int n=s.nextInt();
        // int i=0; 
            // while(i<=31){
                    // if(Math.pow(2,i) == n){
                    //     System.out.println("TRUE"); 
                    //     i++;
                    //     break; 
                    // } 
        
                    // else{
                    //     System.out.println("FALSE"); 
                    //     i++;
                    //     break; 
                    // } 
             
            // }
       // solution 2: 
       /*
        int i=0; 
        for(i = 0; i <= 30; i++){
             if(Math.pow(2,i) == n){
                    System.out.println("TRUE"); 
                    break; 
                } 
                    
            else if(i==30 && Math.pow(2,i)!=n) {
                    System.out.println(i);
                    System.out.println("FALSE"); 
                    break; 
                } 
        }
        */ 
        
        int ans = 1; 
         for(int i = 0; i <= 30; i++){
             if(ans == n){
                    System.out.println("TRUE"); 
                    break; 
            } 
                    
            else if(i==30 && ans!=n) {
                    System.out.println("FALSE"); 
                    break; 
                }  
                     if( ans < (Integer.MAX_VALUE)/2)
            ans *= 2;     
        }
    }
}

