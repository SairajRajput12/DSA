import java.util.*;
import java.io.*;
public class  Array3{
        public static void main(String args[]){
            // code
            System.out.println("Inverse of an array"); 
            Scanner s = new Scanner(System.in); 
        //     int n = s.nextInt(); 
                
            int[] a = {3,4,1,2,0}; 
            
        //     for (int i = 0; i < a.length; i++) {
        //             a[i] = s.nextInt();  
        //     }

            System.out.println("The original array is :"); 
            for (int i = 0; i < a.length; i++) {
                System.out.print(a[i] + " ");
            }

        //     int[] refrence = a; // mistake was to create the duplicate array
        //     for (int i = 0; i < refrence.length; i++) {
        //         int v = a[i]; 
        //         refrence[v] = i; 
        //         // int temp = a[element]; 
        //         // refrence[i] = temp; 
        //     }

        int[] refrence = new int[a.length];
        for (int i = 0; i < a.length; i++) {
            int value = a[i];
            refrence[value] = i;
        }

            System.out.println("Inversed array is :" );
            for (int i = 0; i < refrence.length; i++) {
                    System.out.print(refrence[i] + " "); 
            }

        }
}