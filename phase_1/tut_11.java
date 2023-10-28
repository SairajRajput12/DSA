import java.util.*;
/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 *
 * @author dell
 */


public class tut_11 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here 
        arrays a =new arrays();
        System.out.println("This is DSA tutorial number 12 : Scope of arrays ");
        int arr[] = {1,2,3};  
        //a.update(arr, 3); // main has passed array's base address of first location to the function update function.  
        
        // printing arrays
        for(int i=0;i<3;i++){
            System.out.println(arr[i] + " ");
        }
        
        //System.out.println(arr);// base address.  
        
        // HWN: 1 create an array of 5 elements and return the sum of all elements of arrat.
        System.out.println("The sum of the all elements of array is : "+a.getSum(arr, 3)); 
        
        
        System.out.println(); 
        System.out.println(); 
        System.out.println("Everything is fine !"); 
        // Liner search: 
        
        
    }
}

class arrays{
    public void update(int arr[],int n){
        System.out.println("Inside the function");  
        arr[0] = 12; 
        arr[1] = 7; 
        arr[2] = 2002;
        
        // it means array will be updated. 
        
            for(int i = 0 ; i < n; i ++){
                // printing arrays.
                System.out.println(arr[i] + " ");
            }        
        System.out.println("Going back to main function");
    } 
    
    public int getSum(int arr[] , int size){
        int sum = 0; 
            for(int i = 0; i < size ;i ++){
                sum += arr[i]; 
            }
              
        return sum;
    }
}
