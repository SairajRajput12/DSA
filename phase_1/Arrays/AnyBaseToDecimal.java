import java.util.*;
import java.io.*;
public class  AnyBaseToDecimal{

        public static int getBaseToDecimal(int decimal,int digit)
        {
            int ans = 0; 
            int p = 1; 
                while(decimal > 0){
                    int digi = decimal %10; 
                    decimal = decimal/10; 
                    ans += p*digi; 
                    p = p * digit; 
                }
            return ans; 
        }
        public static void main(String args[]){
            // code
            // 111001 ----------------> 57 
            Scanner s = new Scanner(System.in); 
            int decimal = s.nextInt(); 
            int digit = s.nextInt(); 
            int ans = getBaseToDecimal(decimal,digit); 
            System.out.println("Answer :" + ans);
        }
}   