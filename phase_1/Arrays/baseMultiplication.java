// import java.util.*;
// import java.io.*;
// public class  baseMultiplication{

//         public static int getNewSum(int digit,int multiplicatant,int base){
//             int newSum = 0; 
//             int previous = 0; 
//             while(multiplicatant > 0){
//                 int unit = multiplicatant%10; 
//                 int next = digit*unit;
//                 int divi = next/base;       
//                 int remaining = next - base*divi; 
//                 multiplicatant = multiplicatant/10; 
//             }
//             return newSum; 
//         }
//         public static void main(String args[]){
//             // code
//             Scanner s = new Scanner(System.in); 
//             System.out.println("Base Multiplication :"); 
//             System.out.println("Enter the multiplicatant and multiplier"); 
//             int multiplicatant = s.nextInt();   
//             int multiplier = s.nextInt(); 
//             System.out.println("Enter the base of the both term"); 
//             int base = s.nextInt(); 
//             int ans = 0;  
//             while (multiplier > 0) {
//                 int digit = multiplier%10; 
//                 int term = getNewSum(digit,multiplicatant,base); 
//                 ans = getSum(ans,term);  
//                 multiplier = multiplier/10; 
//             }

//             System.out.println("The answer of this question is :" + ans);

//         }
// }


// import java.util.*;
// import java.io.*;
// public class  baseMultiplication{

//         public static int getNewSum(int digit,int multiplicatant,int base){
//             int previous = 0; 
//             int ans = 0,p = 1; 
//             while(multiplicatant > 0){
//                 int unit = multiplicatant%10; 
//                 int next = digit*unit + previous;
//                 int divi = next/base;       
//                 int remaining = next - base*divi; 
//                 ans += remaining*p; 
//                 p *= 10; 
//                 previous = divi; 
//                 multiplicatant = multiplicatant/10; 
//             }
//             return ans; 
//         }
        
//         public static int getSum(int ans,int term,int base){
//             int ans1 = 0; 
//             int max = Math.max(ans,term); 
//             int previous = 0; 
//             int p = 1; 
//             while(max > 0){
//                 int digit1 = ans%10; 
//                 int digit2 = term%10; 
//                 int sum = digit1 + digit2 + previous; 
//                 int divisible = sum/base; 
//                 int remaining = sum - base*divisible; 
//                 previous = divisible; 
//                 ans1 += p*remaining; 
//             }
//             return ans1; 
//         }
//         public static void main(String args[]){
//             // code
//             Scanner s = new Scanner(System.in); 
//             System.out.println("Base Multiplication :"); 
//             System.out.println("Enter the multiplicatant and multiplier"); 
//             // int multiplicatant = s.nextInt();   
//             // int multiplier = s.nextInt();  
//             int multiplicatant = 234; 
//             int multiplier = 76; 
//             System.out.println("Enter the base of the both term"); 
//             // int base = s.nextInt(); 
//             int base = 8; 
//             int ans = 0;  
//             int p = 1; 
//             while (multiplier > 0) {
//                 System.out.print("Message");
//                 int digit = multiplier%10; 
//                 int term = getNewSum(digit,multiplicatant,base); 
//                 term *= p; 
//                 ans = getSum(ans,term,base);  
//                 p *= 10; 
//                 multiplier = multiplier/10;  
                
//             }

//             System.out.println("The answer of this question is :" + ans);

//         }
// }



import java.util.*;
import java.io.*;
public class baseMultiplication{
        public static int getNewSum(int digit,int multiplicatant,int base){
            int previous = 0; 
            int ans = 0,p = 1; 
            int divi = 0; 
            while(multiplicatant > 0){
                int unit = multiplicatant%10; 
                int next = digit*unit + previous;
                divi = next/base;       
                int remaining = next - base*divi; 
                ans += remaining*p; 
                p *= 10; 
                previous = divi; 
                multiplicatant = multiplicatant/10; 
            }
            ans += divi*p; 
            return ans; 
        }
        
        public static int getSum(int ans,int term,int base){
            int ans1 = 0; 
            int max = Math.max(ans,term); 
            int previous = 0; 
            int p = 1; 
            while(max > 0){
                int digit1 = ans%10; 
                int digit2 = term%10; 
                int sum = digit1 + digit2 + previous; 
                int divisible = sum/base; 
                int remaining = sum - base*divisible; 
                previous = divisible; 
                ans1 += p*remaining;  
                p *= 10; 
                ans = ans/10; 
                term = term/10; 
                max = max/10; 
            }
            return ans1; 
        }
        public static void main(String args[]){
            // code
            Scanner s = new Scanner(System.in); 
            System.out.println("Base Multiplication :"); 
            System.out.println("Enter the multiplicatant and multiplier"); 
            // int multiplicatant = s.nextInt();   
            // int multiplier = s.nextInt();  
            int multiplicatant = 234; 
            int multiplier = 76; 
            System.out.println("Enter the base of the both term"); 
            // int base = s.nextInt(); 
            int base = 8; 
            int ans = 0;  
            int p = 1; 
            while (multiplier > 0) {
                // System.out.print("Message");
                int digit = multiplier%10; 
                int term = getNewSum(digit,multiplicatant,base); 
                term *= p; 
                ans = getSum(ans,term,base);  
                p *= 10; 
                multiplier = multiplier/10;  
            }

            System.out.println("The answer of this question is :" + ans);

        }
}