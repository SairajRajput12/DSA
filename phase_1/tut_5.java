import java.util.*; 

public class Main{
	public static void main(String args[]){
		// leet code question 1: 
		//substract the product and sum of the integer 
		Scanner s=new Scanner(System.in);
	   // System.out.println("enter any number");
	   // int n=s.nextInt();
// 	    int prod=1;
// 	    int k=n; 
// 	        while(n!=0){
// 	            int digit=n%10; 
// 	           // System.out.println("the value of digit is :"+digit);
// 	            prod*=digit; 
// 	            n=n/10; 
// 	           // System.out.println("the value of n will be :"+n);
// 	         }
// 	    System.out.println("the product of each digit of given integer is: "+prod); 
	    
// 	   // let's find the sum of all the digits 
// 	   int sum=0; 
// 	   n=k;
// 	        while(n!=0){
// 	            int digit=n%10; 
// 	            sum+=digit; 
// 	            n=n/10; 
// 	        }
// 	    System.out.println("the sum of each digit of given integer is: "+sum); 
	    
// 	   // the answer is: 
// 	   System.out.println("the difference between the product and sum of the digit is: "+(prod-sum));
        
        // question 2: 
        //  print the number of 1 from the binary form of the particular number 
        // 1] convert into binary 
        // 2] count 1 
        int count =0; 
	    System.out.println("enter any number");
	    int n=s.nextInt();
            while(n!=0){
                // checking last bit 
                    if((n&1)==1){
                        count++;
                    }
                    n=n>>1;
            }
            System.out.println("the answer is :"+count);
	}
} 
