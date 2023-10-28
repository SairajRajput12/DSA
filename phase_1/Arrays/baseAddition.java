import java.util.*;
import java.io.*;
public class  baseAddition{
        public static void main(String args[]){
            // code
            System.out.println("Addition of the 2 base"); 
            // any base addition: 
            // 346(8) + 777(8)   ------> 1345. 
            Scanner s = new Scanner(System.in);  
            System.out.println("Enter the both the numbers");
            int a = s.nextInt(); 
            int b = s.nextInt(); 
            // System.out.println(a);
            // System.out.println(b); 
            int max = Math.max(a,b);  
            // System.out.println(max);
            // System.out.println("Enter the base");
            int base = s.nextInt(); 
            int p = 1; 
            int ans = 0; 
            int previous = 0; 
            int divisible = 0; 
            while(max > 0){
                int unit1 = a%10; 
                int unit2 = b%10; 
                System.out.println("unit 1 :" + unit1); 
                System.out.println("unit 2 :" + unit2);
                // System.out.println("unitSum :" + unitSum); 
                // System.out.println("divisible :" + divisible);
                int unitSum = (unit1 + unit2) + previous; 
                divisible = (unitSum)/base;
                previous = divisible; 
                int remaining  = unitSum - base*divisible; 
                ans += p*remaining; 
                                
                p = p*10; 
                a = a/10; 
                b = b/10; 
                max = max/10; 
                System.out.println(max);
                System.out.println("HEllo"); 
            }
            ans += divisible*p;          
            System.out.println("The answer of this question is:" + ans);


        }
}