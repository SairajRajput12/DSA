import java.util.*;
import java.io.*;
public class  Array1{

        public static int getMax(int[] arr){
            int maximum = Integer.MIN_VALUE; 
            for (int i = 0; i < arr.length; i++) {
                maximum = Math.max(maximum,arr[i]); 
            }

            return maximum; 
        }
        public static void main(String args[]){
            // code
            System.out.println("Bar chart "); 
            Scanner s = new Scanner(System.in); 
            System.out.println("Enter the number of the elements in the chart"); 
            int lengthOfArray = s.nextInt(); 
            int[] arr = new int[1000000]; 
            
            System.out.println("Enter the elements of the chart");
            for (int i = 0; i < lengthOfArray; i++) {
                    arr[i] = s.nextInt(); 
            }
            int max = getMax(arr); 
            
            // System.out.println("The maximum element of the array is :" + max);
            
            int i = 0; 
            // while(i < max){
            //     for (int j = 0; j < lengthOfArray; j++) {
            //         int test = max - arr[j]; 
            //         if(i >= test){
            //                 System.out.print("*  ");
            //                 // System.out.print("  ");
            //         }
            //         else{
            //                 System.out.print("    ");
            //         }
            //     }
            //     System.out.println();
            //     i ++; 
            // }
            System.out.println();
            System.out.println();
            System.out.println("**********************************Here is you bar chart **********************************************"); 
            System.out.println("Date : ");
            System.out.println();
            System.out.println();
            while (i < max) {
            for (int j = 0; j < lengthOfArray; j++) {
                int test = max - arr[j]; 
                if (i >= test) {
                    System.out.print("* ");
                    System.out.print("    ");
                } else {
                    System.out.print("  ");
                    System.out.print("    ");
                }
            }
            System.out.println();
            i++; 
        }

            System.out.println("Hello");
        }
}