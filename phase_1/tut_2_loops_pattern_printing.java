import java.util.Scanner; 
// using loops in case of prime numer 
/*

public class tut_2_loops
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in); 
		System.out.println("enter the  Number");  
		int n=s.nextInt(); 
		if(n==1 || n==0 || n==2 || n==3){
		    System.out.println("the given number is the prime number"); 
		} 
		
		else {
		    for(int i=2;i<n;i++){
		        if(n%i==0){
		            System.out.println("given number is not prime number"); 
		            break;
		        } 
		        
		        else if(i==(n-1)){
		            System.out.println("given number is prime number");
		        }
		    }
		}
		
	}
}
*/


// pattern solving prolems 


// pattern solving questions 

//  print the pattern in floowing order 
/*
    * * * * * 
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/
// public class tut_2_loops
// {
// 	public static void main(String[] args) {  
// 	    Scanner s=new Scanner(System.in); 
// 	    System.out.println("enter your number"); 
// 	    int n=s.nextInt();
// 	for (int i = 0;i < n ;i ++ ){
// 	     for(int j = 0;j < n;j ++){
// 	            System.out.print("*");    
// 	       }
// 	       System.out.println();
// 	    } 
// 	}
// }

// print the following pattern using while loop 
/*
    1 1 1 1 1 
    2 2 2 2 
    3 3 3 
    4 4 
    5 
*/

// public class tut_2_loops
// {
// 	public static void main(String[] args) {  
// 	    Scanner s=new Scanner(System.in); 
// 	    System.out.println("enter your number"); 
// 	    int n=s.nextInt();
//         int i=1,j=1; 
//         while(i<=n){ 
             
//             while(j<=n){
//                 System.out.print(i); 
//                 j++;
//             } 
//             j=i; 
//             j++; 
//             System.out.println();
//             i++; 
//         }
// 	}
// }



// print the following pattern 
//import java.util.Scanner; 
//public class tut_2_loops
//{
//	public static void main(String[] args) {
//		Scanner s=new Scanner(System.in); 
//		System.out.println("enter the  Number");  
//		int n=s.nextInt(); 
	    /*
	        print the following pattern 
	             1 2 3 
	             1 2 3 
	             1 2 3  
	             
	        and also print  
	        
	            3 2 1 
	            3 2 1  
	            3 2 1 
	        here, number of iterations of i= number of iterations in j 
	    */
/*	    
	   System.out.println("FIrst pattern"); 
	   int i=1,j=1; 
	   //  first pattern 
	    while(i<=n){ 
            j=1;  
            while(j<=n){
                System.out.print(j); 
                j++;
            } 
            System.out.println();
            i++; 
        }
	    
	    
	   //  second pattern 
	    i=1;
	    j=1;  
	    System.out.println();
	    System.out.println();
	    System.out.println("second pattern");
	     while(i<=n){ 
            j=1;  
            while(j<=n){
                System.out.print(n-j+1); 
                j++;
            } 
            System.out.println();
            i++; 
        }
	   
		
	}
}
*/

/*
print the following pattern 
    1  2  3  4  5 
    6  7  8  9  10 
    11 12 13 14 15 
    16 17 18 19 20 
    21 22 23 24 25 

*/

/*
public class Main
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		    int n=s.nextInt();     
	        
	        int i=1,j=1; 
	        int count=1; 
	        while(i<=n){
	            j=1; 
	                while(j<=n){
	                    System.out.print(count+ " "); 
	                    j++; 
	                    count++; 
	                }
	            System.out.println();
	            i++; 
	        }
	    
	    
	}
}
*/

/*
print the following triangle pattern 
    * 
    * * 
    * * * 
    * * * * 

*/

/*
public class Main
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		    int n=s.nextInt();     
	        
	        int i=1,j=1; 
	        int count=1; 
	        while(i<=n){
	            j=1;
	                while(j<=i){
	                   System.out.print("* \t"); 
	                   j++; 
	                }
	            System.out.println();
	            i++; 
	        }
	    
	    
	}
}

*/ 
/*
print the following triangle pattern 
    1 
    2   2 
    3   3   3 
    4   4   4   4 
*/

/*
public class Main
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		    int n=s.nextInt();     
	        
	        int i=1,j=1; 
	        while(i<=n){
	            j=1; 
	                while(j<=i){
	                        System.out.print(i +"\t"); 
	                        j++; 
	                }
	            System.out.println();
	            i++; 
	        }
	}
}
*/ 
/*
print the following triangle pattern 
  1 
  2  3 
  3  4  5 
  4  5  6  7 
*/

/*
public class Main
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		    int n=s.nextInt();     
	        
	        int i=1,j=1;  
	        int count; 
	     
	        while(i<=n){
	            j=1; 
	            count=i; 
	                while(j<=i){
	                    // method 1 
	                   // System.out.print(count);  
	                   // method 2 
	                   System.out.print(i+j-1 + " ");
	                    count++; 
	                    j++; 
	                }
	            System.out.println();
	            i++; 
	        }
	}
}
*/ 

/*
print the following triangle pattern 
  1 
  2  1
  3  2  1 
  4  3  2  1 
*/

/*
public class Main
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		    int n=s.nextInt();     
	        
	        int i=1,j=1;  
	        int count; 
	     
	        while(i<=n){
	            j=1; 
	            count=i; 
	                while(j<=i){
	                   // methood 1 : using count 
	                   //System.out.print(count+"\t"); 
                      // methood 2: using manual statement  
                       System.out.print(i-j+1 +"\t" );
	                   count--; 
	                   j++; 
	                }
	            System.out.println();
	            i++; 
	        }
	}
}
*/ 

// done upto 24:36 sec 
/*
print the following triangle pattern 
  A  A  A 
  B  B  B 
  C  C  C 
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	     
	        while(i<=n){
	            j=1; 
	            
	                while(j<=n){ 
	                   // methood 1 
	                   System.out.print(ch); 
	                
	                   j++; 
	                } 
	           ch+=1;    
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/
/*
print the following triangle pattern 
  A  B  C 
  D  E  F 
  G  H  I 
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	     
	        while(i<=n){
	            j=1; 
	            
	                while(j<=n){ 
	                   System.out.print(ch+"\t");                 
	                   j++; 
		           ch+=1;    
	                } 
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/

/*
print the following triangle pattern 
  A  B  C 
  B  C  D 
  C  D  E 
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	                while(j<=n){ 
		           ch='A'; 
	                   ch+=i; 
	                   ch+=j; 
	                   ch-=2; 
	                   System.out.print(ch+"\t");                  
	                   j++;    
	                } 
	         
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}

*/
/*
print the following triangle pattern 
  A  
  B  B   
  C  C  C 
*/
/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	           
	                while(j<=i){ 
	       	            ch='A'; 
	                	// formula: ch+i-1 
	 			ch+=i; 
	            		ch-=1; 	                	
				System.out.print(ch+"\t"); 
				j++;		              
	                } 
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/


/*
print the following triangle pattern 
  A  
  B  C   
  C  D  E 
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	           
	                while(j<=i){ 
	       	            ch='A'; 
	                	// formula: ch+i-1 
	 			ch+=i; 
	 			ch+=j; 
	            		ch-=2; 	                	
				System.out.print(ch+"\t"); 
				j++;		              
	                } 
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/






/*
print the following triangle pattern 
  D  
  C  D   
  B  C  D
  A  B  C  D  


public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	             
	                while(j<=i){ 
	                	ch='A'; 
	       	   	        ch+=n; 
	       	   		ch-=i; 
	       	    		ch+=1; 
	       	           	ch+=j; 
	       	           	ch-=2;     	
				System.out.print(ch+"\t"); 
				j++; 
				// formula: 'A' + n-i+j-1		              
	                } 
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}


*/


/*
print the following triangle pattern 
 A  B C 
 B C  D 
 C D E 
*/


/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	             
	                while(j<=n){ 
	                	ch='A'; 
	       	   	        ch+=i; 
	       	   	        ch-=2; 
	       	   	        ch+=j;     	
				System.out.print(ch +"\t"); 
				j++; 
				// formula: 'A' + n-i+j-1		              
	                } 
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/

/*
print the following triangle pattern 
  - - - *  
  - - * *   
  - * * *   
  * * * *   
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i=1,j=1;  
	      
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	            int space =n-i;   
	            // space print karlo 
	                while(space!=0){ 
	              		
				System.out.print("- \t");  
				space=space-1; 
				j++; 
				// formula: 'A' + n-i+j-1		              
	                }  
	                
	            // column print karlo
	                int col=1; 
	                while(col<=i){ 
	                	System.out.print("* \t"); 
	                	col++;   
	                
	                }
	                
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}
*/ 


/*
print the following triangle pattern 
  *	*	*	*
  *	*	*	
  *	*
  *    
*/
/*

public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        char ch='A'; 
	        int i,j=1;  
	        i=n;
	        // formula i+j-1 
	        while(i<=n){
	            j=1; 
	            int star=n-i+1;  
	             while(j<=star){               	
				System.out.print("* \t"); 
				j++;		              
	                } 
	                
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}

*/

/*
print the following triangle pattern 
  								1 
  						1		2		1
  					1	2		3		2	1
  				1	2	3		4		3	2	1
*/

/*
public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        int i=1,j=1; 
	        // formula i+j-1 
	        while(i<=n){
	            int space=n-i; 
	            
	            // space print karlo 
	            while(space!=0){ 
	            	System.out.print("- \t"); 
			space--;
	            }
	            
	            // left wala traingle dekh lo  
	            j=1; 
	             while(j<=i){               	
				System.out.print(j+"\t"); 
				j++;		              
	             } 
	             
	             // right wala triangle
	             j=1;  
	             int st=i-1; 
	             while(j<=(i-1)){ 
	             		System.out.print(st+"\t");
	             		st=st-1;
	             		j++; 
	             }   
	            // you cannot use ch=ch+1 beacuse it throws an error of lossy conversion.    
	            System.out.println();
	            i++; 
	        }
	}
}

*/


/*
print the following triangle pattern 
  		1	2	3	4	5	5	4	3	2	1
  		1	2	3	4	*	*	4	3	2	1
  		1	2	3	*	*	*	*	3	2	1
  		1	2	*	*	*	*	*	*	2	1
		1	*	*	*	*	*	*	*	*	1
*/


public class tut_2_loops_pattern_printing
{
	public static void main(String[] args) {
         	Scanner s=new Scanner(System.in); 
    	   	System.out.println("enter the  Number");  
		int n=s.nextInt();     
	        int i=1,j=1; 
	        // formula i+j-1 
	        while(i<=n){
	        	// left triangle  
	        	j=1; 
	        	while(j<=(n-i+1)){
	        		System.out.print(j+"\t"); 
	        		j++; 
	        	}
	        	
	        	// star triangle 
	        	// i=1----> 2*(i-1) -----> 0 
	        	// i=2----> 2 
	        	// i=3----> 4 
	        	// i=4----> 6 
	        	// i=5-----> 8
	        	
	        	j=1; 
	        	while(j<=(2*(i-1))){
	        		System.out.print("* \t"); 
	        		j++; 
	        	}
	        	
	        	
	        	// right triangle 
	        	
	        	int st=n-i+1; 
	        	while(st!=0){ 
		        	j=st; 
	        		System.out.print(j+"\t"); 	
	        		j--; 
	        		st--; 
	        	}
	        System.out.println();	
	        i++; 	    
	        }
	}
}



// khatam



























































