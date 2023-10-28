// import java.util.*;
// import java.io.*;
// public class  baseSubstraction{
    
    //         public static int getValue(int substract,int substratend,int base){
        //             int d = 0; 
//             int test = substratend; 
//             int digit1 = substract%10; 
//             int digit2 = substratend%10; 
//             System.out.println("digit 1: " + digit1); 
//             System.out.println("digit 2: " + digit2);
//             System.out.println("substractend  :" + substratend); 
//             System.out.println("substract :" + substract);
//             if(digit2 >= digit1){
//                 System.out.println("In first block: "); 
//                 d = digit2 - digit1; 
//                 System.out.println("The d is :" + d);
//             }

//             else{
//                 System.out.println("In second block :");
//                 int hadcha = 0; 
//                 int p = 10; 
//                 test = test/10; 
//                 while(true){
    //                     hadcha = test%10; 
    //                     System.out.println("The value of the hadcha is :" + hadcha);
    //                     if(test == 0){
        //                         break; 
//                     }
//                     System.out.println("The value of the substract is :" + substract); 
//                     test = test/10; 
//                     if(hadcha != 0){
    //                         digit2 = base + digit2; 
    //                         substratend -= p; 
    //                         p *= 10;  
    //                         System.out.println("The value of the substratend is :" + substratend); 
//                         break; 
//                     }
//                 }
//                 d = digit2 - digit1;    
//                 System.out.println("The value of the d is :" + d); 
//             }
//             System.out.println("The value of the d is :" + d);

//             return d; 
//         }
//         public static void main(String args[]){
    //             // code
    //             Scanner s = new Scanner(System.in); 
    //             System.out.println("Enter the substratend and the base"); 
    //             int substratend = s.nextInt(); 
    //             int substract = s.nextInt(); 
    //             System.out.println("Enter the base of both the numbers");
//             int base = s.nextInt(); 
//             int num = substratend; 
//             int ans = 0; 
//             int p = 1; 
//             while(num > 0){
    //                 int digit = getValue(substract,substratend,base); 
    //                 ans += p*digit; 
    //                 System.out.println("digit : " + digit);
    //                 p *= 10; 
    //                 substract = substract/10; 
    //                 substratend = substratend/10; 
    //                 num = num/10; 
    //             } 
    
    //             System.out.println("The answer of this question is :" + ans);
    //         }
    // }
    
    
    
    import java.util.*;
    import java.io.*;
    public class  baseSubstraction{
        
        public static int getValue(int[] arr,int base){
            int d = 0; 
            int test = arr[0]; 
            int digit1 = arr[1]%10; 
            int digit2 = arr[0]%10; 
            // System.out.println("digit 1: " + digit1); 
            // System.out.println("digit 2: " + digit2);
            // System.out.println("substractend  :" + arr[0]); 
            // System.out.println("substract :" + arr[1]);
            if(digit2 >= digit1){
                // System.out.println("In first block: "); 
                d = digit2 - digit1; 
                // System.out.println("The d is :" + d);
            }
        
            else{
                System.out.println("In second block :");
                int hadcha = 0; 
                int p = 10; 
                test = test/10; 
                while(true){
                        hadcha = test%10; 
                    // System.out.println("The value of the hadcha is :" + hadcha);
                    if(test == 0){
                            break; 
                        }
                        // System.out.println("The value of the substract is :" + arr[1]); 
                    test = test/10; 
                    if(hadcha != 0){
                        digit2 = base + digit2; 
                        arr[0] -= p; 
                        p *= 10;  
                        // System.out.println("The value of the substratend is :" + arr[0]); 
                        break; 
                    }
                }
                d = digit2 - digit1;    
                // System.out.println("The value of the d is :" + d); 
            }
            // System.out.println("The value of the d is :" + d);
        
            return d; 
        }
        
        
        
    //     public static int getValue(int[] arr,int base){
    //     int d = 0; 
    //     int test = arr[0]; 
    //     int digit1 = arr[1]%10; 
    //     int digit2 = arr[0]%10; 
        
    //     if(digit2 >= digit1){
    //     d = digit2 - digit1; 
    //     }
    //     else{
    //     int borrow = 0; 
    //     int p = 10; 
    //     test = test/10; 
    //     while(true){
    //         borrow = test%10; 
    //         test = test/10; 
    //         if(borrow != 0){
    //             break; 
    //         }
    //         else if(test == 0){
    //             borrow = base - 1;
    //             break;
    //         }
    //         p *= 10;  
    //     }
    //     digit2 += borrow; 
    //     arr[0] -= p; 
    //     d = digit2 - digit1;    
    // }
    // return d; 
    //     }
        public static void main(String args[]){
            // code
            Scanner s = new Scanner(System.in); 
            int[] arr = new int[2];  
            System.out.println("Enter the substratend and the base"); 
            int substratend = s.nextInt(); 
            int substract = s.nextInt(); 
            arr[0] = substratend; 
            arr[1] = substract; 
            System.out.println("Enter the base of both the numbers");
            int base = s.nextInt(); 
            int num = substratend; 
            int ans = 0; 
            int p = 1; 
            while(num > 0){
                int digit = getValue(arr,base); 
                ans += p*digit; 
                // System.out.println("digit : " + digit);
                p *= 10; 
                arr[0] = arr[0]/10; 
                arr[1] = arr[1]/10; 
                num = num/10; 
            } 

            System.out.println("The answer of this question is :" + ans);
        }
}





