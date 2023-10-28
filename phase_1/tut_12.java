import java.util.*;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 *
 * @author dell
 */



public class tut_12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here
        System.out.println("This is tutorial number 12: Searching operation"); 
        arrays a = new arrays();
        int arr[] = {5,7,-2,10,22,-2,0,5,22,1}; 
        /*
        System.out.println("Enter the key"); 
        Scanner s = new Scanner(System.in);  
        int key = s.nextInt();
        boolean found = a.search(arr, 10, key); 
        
        if(found == true){
                System.out.println("Key is present");
        } 
        
        else {
                System.out.println("Key is not present");
        }
        */
        // reverse an array.
        System.out.println("Normal array :"); 
         for(int i = 0; i < 10; i++){
            System.out.print(arr[i] + " ");
        }
        
        System.out.println();
        System.out.println("Reverse array :"); 
        
        System.out.println();
        a.reverseArray(arr, 10);
        for(int i = 0; i < 10; i++){
            System.out.print(arr[i] + " "); 
        }
        
        System.out.println();
        System.out.println();
        System.out.println("Everything is fine!");
        
    }
}


class arrays{
    public boolean search(int arr[],int n,int key){
        for(int i = 0; i < n; i++){
            if(arr[i] == key){
                return true; 
            }
        }
        return false; 
    }
    
    public void reverseArray(int arr[], int size){ 
      /*  
        
        My Algorithm: 
        
        for(int i = 0; i < size; i++){
            if(i==((size - 1)-i) || i > ((size - 1) -i)){
                break;
            }  
        
            // swapping 
        
            int temp = arr[i]; 
            arr[i] = arr[(size-1) - i]; 
            arr[(size-1) - i] = temp;
        }
      */ 
      
      int start = 0; 
      int end = size -1; 
      while(start <= end){
            int temp = arr[start]; 
            arr[start] = arr[end]; 
            arr[end] = temp; 
            start ++; 
            end --;
      }
    }
}