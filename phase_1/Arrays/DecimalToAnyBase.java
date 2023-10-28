import java.util.*;
import java.io.*;
public class  DecimalToAnyBase{

        public static int getValueInBase(int decimal,int base){
            int ans = 0; 
            int p = 1; 
                while(decimal > 0)
                {
                    int dig = decimal%base; 
                    decimal = decimal/ base; 
                    ans += dig*p; 
                    p = p *10; 
                }


            return ans; 
        }
        public static void main(String args[]){
        // code
            Scanner s = new Scanner(System.in); 
            int decimal = s.nextInt(); 
            int base = s.nextInt(); 
            int ans = getValueInBase(decimal,base); 
            System.out.println("Ans :" + ans);
        }
}