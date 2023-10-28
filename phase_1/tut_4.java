import java.util.Scanner; 
public class tut_4{
	public static void main(String args[]){
	Scanner s=new Scanner(System.in); 
		// 1 to N tak sare sum nikal ke do 
		/*
		int sum=0;  
		int N=10; 
			for(int i=0;i<N;i++){
				sum+=N; 
			}
		System.out.println(sum);  
		*/ 
		//print  Fibonacii series upto N number 
		// 0	1	1	2	3	5	8	13	21	....... 
		/*
		int a=0; 
		int b=1; 
		int next=a+b;  
		int limit=s.nextInt(); 
		System.out.print(a+" "+b+" "); 
			for(int i=1;i<=(limit);i++){
				System.out.print(next+" "); 
				a=b; 
				b=next;  
				next=a+b;  
			} 
		*/ 
		
		/*
		// prime number: 
		int limit=s.nextInt();  
		if(limit==0 || limit==1 || limit==2){ 
					System.out.println("Yes it is prime number"); 		
		
		}
		else{
			for(int i=2;i<limit;i++){ 
				if(limit%i==0){ 
					System.out.println("this is not prime number");
					break;
				} 
				
				else if(i==(limit-1)){ 
					System.out.println("Yes it is prime number"); 
				}	
			}
		}
		*/
		
		
		// Question 1: 
		/*
		 for (int i = 0; i <=15; i+=2) {
        		cout<<i<<" "; 
        			if(i&1){ 
        			    continue; 
       				 } 
       			 // here if i&1==0 then if will not execute. 
       		 i++; 
    		}  
    		*/
    		// 0	3	5	7	9	11	13	15 
    		
    		
    		// Scope of the variable
       	/*
       		int a=5;
    		System.out.println(a);
    		if(true){
    			a=3;
    			System.out.println(a);  // 3
    			int b=6;
    			System.out.println(b);  // 6
    		}
    		
    		System.out.println(a);   // 3 
    		//System.out.println(b);   it will throw an error
    		int i=5; 
 	*/ 
 	
 	  		
	} 
}

// continue keyword skips the current iteration. 




















