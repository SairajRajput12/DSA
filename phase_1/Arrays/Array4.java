import java.util.*;
import java.io.*;
public class  Array4{
        public static void main(String args[]){
            // code
        //     System.out.println("Sub arrays of an array"); 
        //     // subarrays of an array: 
  
		// System.out.println("Hello World");
		// Scanner s = new Scanner(System.in); 
		// int[] a = {10,20,30}; 
		// for (int i = 0;i < a.length ;i ++){ 
		//     for (int j = i;j < a.length ;j ++){
		//         // 10 20 30 
		//         for (int k = i;k <= j;k ++){
		//             System.out.print(a[k] + " ");
		//         } 
		//     System.out.println();
		//     }
		    
		//     System.out.println();
		// } 

        // subsets of an array: 

        //          <------------------------------wrong code----------------------------------> 



        // System.out.println("Subsets of an array"); 
        // Scanner s = new Scanner(System.in); 
        // int length = s.nextInt(); 
        // int[] a = new int[length];  
        // for (int i = 0; i < a.length; i++) {
        //         a[i] = s.nextInt();   
        // }
        // int[] duplicatehyphen = new int[a.length]; 
        // int[] duplicatecontent = new int[a.length]; 
        // int combinations =(int) Math.pow((double)2,(double)length); 
        // for (int i = 0; i < combinations; i++) {
        //     for (int j = 0; j < a.length; j++) { 
        //         int test =(int) Math.pow((double)2,(double)(j+1)); 
        //         int res = combinations/test; 
        //         if(duplicatehyphen[j] < res){
        //                 System.out.print("-"); 
        //                 duplicatehyphen[j] ++; 
        //         }
                
                
        //     }
        //     System.out.println();
        // }
        
        Scanner s = new Scanner(System.in); 
        int n = s.nextInt(); 
        int[] arr = new int[n]; 
        for (int i = 0; i < arr.length; i++) {
                arr[i] = s.nextInt(); 
        }
        int limit = (int)Math.pow((double)2,(double)arr.length); 
        for (int i = 0; i < limit ; i++) {
            String set = ""; 
            int temp = i; 
            // convert i to binary use 0 and 1 to print the element or not 
            for (int j = (arr.length - 1); j >= 0; j --) {
                    int r = temp%2; 
                    temp = temp/2; 
                    if( r == 0){
                        set  = "-\t" + set; 
                    }
                    else{
                        set = arr[j]+"\t" + set; 
                    }
            }
            System.out.println(set);
        }



    }
}
