 import java.util.*;
 import java.io.*;
public class  digit{
        public static void main(String args[]){
                // code
                Scanner s = new Scanner(System.in); 
                int digit , given_frequency; 
                digit = s.nextInt(); 
                given_frequency = s.nextInt(); 
                int ans = 0;                 

                while(true){
                    int di = digit%10; 
                    if(di == given_frequency){
                        ans ++; 
                    }
                    digit = digit / 10; 
                    if(di == 0){
                        break; 
                    }
                }

                System.out.println("answer is :" + ans);
                System.out.println("sab changa si");
        }
}   
