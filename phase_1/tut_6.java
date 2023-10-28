import java.util.*; 
import java.lang.Math; 
// this is tutorial number 6 where the implementation of binary to decimal and vice-versa is given as below. 
public class Main{
	public static void main(String args[]){
		Scanner s=new Scanner(System.in);
	   // decimal and binary number system
	   //n=10   ----> n=n/2--> rem=0 
	   //       ----> n=n/2---> rem=1 
	   //       ----> n=n/2---> rem=0 
	   //       ----> n=n/2---> rem=1 
	   // divide number by 2 and store it in the reminder 
	   // repeat the above step until n!=0 
	   // reverse the answer 
	   
	   // implementation: 
        System.out.println("enter any number");
	    int n=s.nextInt();  
	    if(n>0){
	        int ans=0;
	        int i=0;
                while(n!=0){
                    int digit=n & 1; 
                    ans +=(((Math.pow(10,i))*digit)); 
                    i++;
                    n=n>>1; 
                }
                System.out.println("the binary form is: "+ans);
                // now finding its decimal form from binary 
                n=0; 
                i=0;
                while(ans!=0){
                    int digit=ans % 10; 
                    if(digit==1){
                        n+=Math.pow(2,i);
                    }
                    i++; 
                    ans=ans/10; 
                }
                 
        System.out.println("the decimal form is: "+n);   
	    }
        //formula: ans= (10^(iteration number) * digit) + ans     
        // reverse formula:  ans = ans * 10 + digit 
        
        //******************************************************************************
        // homework 
        
    // in case of negative number 
        else if(n<0){
            int ans=0; 
            n=n*(-1); 
            int n2=n; 
            int i=0;
            // converting it into its positive binary form
                while(n!=0){
                    int digit=n & 1; 
                    ans +=(((Math.pow(10,i))*digit)); 
                    i++;
                    n=n>>1;
                }
            i=0;    
            int reverse=0; 
                while(ans!=0){
                    int digit=ans % 10; 
                        if(digit==1){
                            digit=0;
                        }
                        
                        else if(digit==0){
                            digit=1; 
                        }
                    reverse+= (((Math.pow(10,i))*digit)); 
                    i++;
                    ans=ans/10; 
                }
                    if(reverse%10==1){
                        reverse*=10; 
                    }
                    else{
                        reverse+=1; 
                    }
            System.out.println("the binary form is: "+reverse);
            // now finding its decimal form from binary 
            n=n2;     
            ans=0;
            i=0;
                while(reverse!=0){
                    int digit=reverse % 10; 
                    if(digit==1){
                        ans+=Math.pow(2,i);
                    }
                    reverse=reverse/10; 
                    i++; 
                }
                
                ans+=Math.pow(2,i);
                ans=ans*(-1); 
        System.out.println("the decimal form is: "+ans);    
	       	 }
	}
} 
