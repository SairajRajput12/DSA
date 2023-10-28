import java.util.*; 

public class Main{
	public static void main(String args[]){
                System.out.println("This is tutorial number 8: Switch case in java");
            Scanner s = new Scanner(System.in); 
            // switch case: 
		/*
			switch(expression){ 
				case constant_1: 
						// code 
						break; 
				case constant_2: 
						// code  
						break; 
				// so on 
				
				default: 
					// code 
					
			}			
		*/	
            // HWN:     
               // in case of infinite switch use exit() function.
               // in case of switch use of continue is not valid.
               /*
               int n = 2; 
               switch(n){
                   case 1: 
                       System.out.println("Khamiya na wa khamiyand we"); 
                       break; 
//                       continue; (we can't use continue statement)
                       
                   case 2: 
                       System.out.println("nachoo nacho nacho nacho"); 
                      // continue; 
                       break;
                   default: 
                       System.out.println("kalse padhai karunga ");
                       
               }
               
              */ 
            // input a,b,operation. 
            /*
            System.out.println("Enter the operation you are going to perform");
            String c = s.nextLine();  
            System.out.println("Enter the number both input integer"); 
            int a = s.nextInt();  
            int b = s.nextInt(); 
                switch(c){
                    case "*":
                            System.out.println(a*b);
                    break;
                    
                    case "/": 
                            System.out.println("If b is divisior:"+a/b);
                            System.out.println("If a is divisior:"+b/a);
                    break;
                    
                    case "+":
                            System.out.println("The addition :"+(a+b));
                    break;    
                    
                    case "-":
                            System.out.println("If b is going to be stract a :"+(a-b));
                            System.out.println("If a is going to be stract b :"+(b-a));
                    break;    
                    
                    case "%": 
                            System.out.println("The modulus of b to a is: "+ a%b);
                            System.out.println("The modulus of a to b is: "+ b%a);
                    break; 
                    
                    default: 
                            System.out.println("The operation that you have requested cannot be executed");
                }
            */    
            // HWN: 
            //  for given amount state how many number of 100,50,20 and 1 notes are required. 
            /*    
                int hun =  0; 
                int fif =  0; 
                int twen = 0; 
                int one  = 0; 
                int amount = s.nextInt(); 
                int van = 100; 
                int k = amount; 
                int j = k / 10;
                    switch(van){
                        case 100:
                            while(k > j){
                                 k = k/100;  
                                 hun = k; 
                                //  System.out.println(k);
                            }  
                            System.out.println("The total number of 100 notes required are :"+ hun);        
                        case 101:
                            //bSystem.out.println(k);
                                while(k > 50){
                                     fif++; 
                                     k = k - 50; 
                                }  
                            System.out.println("The total number of 50 notes required are :"+ fif);
                        case 102: 
                            //System.out.println(k);
                            while(k > 20){
                                 twen++; 
                                 k = k - 20; 
                            }  
                            System.out.println("The total number of 20 notes required are :"+ twen);
                        case 103: 
                            //System.out.println(k);
                            one = k; 
                            System.out.println("The total number of 1 notes required are :"+ one); 
                        break;     
                    }
            */
            // functions:                 
                    
            
	}
} 
