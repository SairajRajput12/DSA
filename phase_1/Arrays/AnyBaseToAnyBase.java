import java.util.*;
import java.io.*;
public class  AnyBaseToAnyBase{


        public static int base1ToDecimal(int base1,int number){
            int ans = 0; 
            int ten = 1; 
           while(number > 0){
                int bite = number%10; 
                number = number/10; 
                ans = ans + bite*ten; 
                // System.out.println("Inside the loop :" + ans);
                ten = ten*base1; 
            }

            // System.out.println(ans);
            return ans; 
        }

        public static int DecimalToBase2(int base2,int number)
        {
            int rv = 0; 
            int p = 1; 
            while(number > 0){
                int dig = number%10; 
                number = number/10; 
                rv += dig*p; 
                p = p * 10; 
            }
            return rv; 
        }

        public static void main(String args[]){
        // code
            System.out.println("I am the kira"); 
            // int base1,base2,number; 
            Scanner s = new Scanner(System.in); 
            int base1 = s.nextInt(); 
            int base2 = s.nextInt(); 
            int number = s.nextInt(); 
            // System.out.println("Answer is :" + base1ToDecimal(base1, number));
            int ans = base1ToDecimal(base1, number); 
            int specifice = DecimalToBase2(base2, ans); 
            System.out.println("Answer is :" + specifice);
        }
}

// import java.util.*;
// import java.io.*;

// public class AnyBaseToAnyBase {
//     public static int base1ToDecimal(int base1, int number) {
//         int ans = 0;
//         int ten = 1;
//         while (number > 0) {
//             int bite = number % 10;
//             ans = ans + bite * ten;
//             ten = ten * base1;
//             number = number / 10;
//         }
//         return ans;
//     }

//     public static void main(String args[]) {
//         System.out.println("I am the kira");
//         Scanner s = new Scanner(System.in);
//         int base1 = s.nextInt();
//         int base2 = s.nextInt();
//         int number = s.nextInt();
//         System.out.println("Answer is :" + base1ToDecimal(base1, number));
//     }
// }
