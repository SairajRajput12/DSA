// import java.util.*;
// import java.io.*;
// public class  Array2{
//         public static void main(String args[]){
//         // code
//             System.out.println("Rotate an array"); 
//                 // k = 1, g a b c d e f.  
//                 // k = 2, f g a b c d e. 
//                 // k = 3, e f g a b c d.

//             //  k = 0, then no change in array 
//             //  k >= arr.length, same pattern will be repeated. 
//             // if k < 0,  first element will be rotated. 
//             Scanner s = new Scanner(System.in); 
//             int k = s.nextInt();   
//             int length = s.nextInt(); 

//             int[] arr = new int[length];  
//             for (int i = 0; i < arr.length; i++) {
//                     arr[i] = s.nextInt(); 
//             }

//             System.out.println("Original array is :"); 
//             for (int i = 0; i < arr.length; i++) {
//                     System.out.print(arr[i] + " ");
//             }
//             System.out.println();
//             if(k == 0){
//                     System.out.println("Rotated arrays is :"); 
//                     System.out.println(); 
//                             for (int i = 0; i < arr.length; i++) {
//                                     System.out.print(arr[i] + " ");
//                             } 
//             }

//             else if(k > 0){
//             for (int i = 0; i < k; i++) {
//                 for (int j = 0; j < arr.length; j++) {
                    
//                         int temp = arr[arr.length - 1]; 
//                         arr[arr.length - 1] = arr[j]; 
//                         arr[j] = temp; 
//                 }
//             }

//             System.out.println("Rotated arrays is :"); 
//             System.out.println(); 
//             for (int i = 0; i < arr.length; i++) {
//                     System.out.print(arr[i] + " ");
//             }

//         }

//         else{
//             for (int i = 0; i < k; i++) {
//                 for (int j = (arr.length - 1); j >= 0; j --) {
                    
//                         int temp = arr[0]; 
//                         arr[0] = arr[j]; 
//                         arr[j] = temp; 
//                 }
//             }

//             System.out.println("Rotated arrays is :"); 
//             System.out.println(); 
//             for (int i = 0; i < arr.length; i++) {
//                     System.out.print(arr[i] + " ");
//             }
//         }

//         }
// }


// corrected code: 
import java.util.*;
import java.io.*;

public class  Array2{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in); 
        int k = s.nextInt();   
        int length = s.nextInt(); 

        int[] arr = new int[length];  
        for (int i = 0; i < arr.length; i++) {
            arr[i] = s.nextInt(); 
        }

        System.out.println("Original array is :"); 
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        if (k == 0) {
            System.out.println("Rotated array is :"); 
            for (int i = 0; i < arr.length; i++) {
                System.out.print(arr[i] + " ");
            } 
            System.out.println(); 
        }

        else if (k > 0) {
            k = k % length; // handle cases where k >= length

            int[] rotatedArr = new int[length]; 
            for (int i = 0; i < length; i++) {
                rotatedArr[(i + k) % length] = arr[i]; 
            }

            System.out.println("Rotated array is :"); 
            for (int i = 0; i < length; i++) {
                System.out.print(rotatedArr[i] + " ");
            }
            System.out.println(); 
        }

        else { // k < 0
            k = Math.abs(k) % length; // handle cases where |k| >= length

            int[] rotatedArr = new int[length]; 
            for (int i = 0; i < length; i++) {
                rotatedArr[(i - k + length) % length] = arr[i]; 
            }

            System.out.println("Rotated array is :"); 
            for (int i = 0; i < length; i++) {
                System.out.print(rotatedArr[i] + " ");
            }
            System.out.println(); 
        }
    }
}
