import java.util.*;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 *
 * @author dell
 */
public class tut_13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here
        System.out.println("This is tutorial number 13: Question disscused from Love Babber DSA Series"); 
        arrays ab = new arrays();
        // problem 1: swap alternate 
        
        /*
        // input: 
            int[] arr = {1,2,3,4,5,6,7,8,9,10};
       
            
        // Output: 
            // 2 1 8 7 5 
         int size = arr.length;   
         System.out.println();
         System.out.println();
         System.out.print("Normal array :"); 
             for(int i = 0; i < size ; i++){
                 System.out.print(arr[i] + " ");
             }  
        System.out.println();
        System.out.println();    
         ab.swapAl(arr , size);     
         System.out.print("Alternate Swapped array :"); 
             for(int i = 0; i < size ; i++){
                 System.out.print(arr[i] + " ");
             } 
             
        System.out.println();
        System.out.println();
        System.out.println("Everything is fine!");
        //  problem 2: Find a unique element
        */
        
        /*  
        int[] a = {1,2,2,1,8,8,7,9,0,0,9};  
        System.out.println(a.length);
        System.out.println("The unique element from given array is :" + ab.unique(a, a.length));
        
        */
        
        
        // problem 3: Duplicates 
        /*
        System.out.println("Enter Size");
        Scanner s =new Scanner(System.in);
        int size = s.nextInt();  
        int[] arr = new int[1000]; 
        for(int i = 1; i < size ; i++){
            arr[i] = s.nextInt();
        }
        
        System.out.println("The duplicate element from given array is :" + ab.duplicates(arr, arr.length));
        */
        // Problem 4: Intersection of Sorted array of non-decreasing order. 
        // if intersaction is not present ------> return -1. 
        // return the common element from both the arrays.
        /*
        int[] a =  new int[1000]; 
        int[] b =  new int[1000]; 
        int[] c =  new int[1000];
        
        System.out.println("Enter Size of both arrays");
        Scanner s =new Scanner(System.in);
        int size1 = s.nextInt();   
        int size2 = s.nextInt();
        
        System.out.println("Enter elements of first array");
        
        for(int i = 0; i < size1 ; i++){
            a[i] = s.nextInt();
        }
        
        System.out.println("Enter elements of secong array");
        
        for(int i = 0; i < size2 ; i++){
            b[i] = s.nextInt();
        }
        
        
        
        System.out.print("Common elements from both arrays are :");  
        int k = ab.findArrayIntersection(c, a,size1, size2, b); 
            for(int i = 0; i <= k ; i++){
                 System.out.print(c[i] + " ");
             } 

        */
        
        // problem 5: Pair sum 
        /*
        Scanner s = new Scanner(System.in);
        int[] a =  new int[1000]; 
        int[] b =  new int[1000]; 
        System.out.println("Enter the number :");
        int n = s.nextInt();
        System.out.println("Enter Size of both arrays");
        
        int size1 = s.nextInt();
        for(int i = 0; i < size1 ; i++){
            a[i] = s.nextInt();
        }
        
       
        
        int k = ab.pairSum(a, size1, b, n);
        System.out.print("Pair sum elements :"); 
            for(int i = 0; i < k ; i++){
                 System.out.print(b[i] + " ");
             } 
        
        */ 
        
        // problem 6: Triplet with given sum: 
        
        
        // problem 7: Sort 0	1  
        // 2 Pointer approach
        // I.P: 0 1 1 0 1 1 0 1 0
        // O.P: 0 0 0 0 1 1 1 1 1
        int[] a = {1,1,0,0,0,0,1,0}; 
        int k = a.length;
        System.out.println("Given array :"); 
        for(int i = 0; i < k ; i++){
                 System.out.print(a[i] + " ");
        } 
        
        ab.sortArr(a,8); 
        System.out.println("Sorted array :");   
        for(int i = 0; i < k ; i++){
                 System.out.print(a[i] + " ");
             } 
        
        
       
        
    }
}

class arrays{
    public void swapAl(int arr[] , int size){
            
            for(int i = 0; i < size ; i+=2){
                if((i+1) < (size)){
                    int temp = arr[i]; 
                    arr[i] = arr[i+1]; 
                    arr[i+1] = temp; 
                }
             } 
    }
    
    public int unique(int arr[] , int size){
        int ans = arr[0];
        //System.out.println("ans = "+ ans);
            for(int i = 1; i < size ; i++){
                ans = ans ^ arr[i];
                //System.out.println(ans +"^"+arr[i]+" = "+ans);
             } 
        return ans;    
    }
    
    public int duplicates(int arr[], int size){
        int ans = 0; 
        for(int i = 0; i < arr.length ; i++){
            ans = ans ^ arr[i]; 
        } 
        
        for(int i = 1; i < arr.length ; i++){
            ans = ans ^ i; 
        } 
        
        return ans; 
        
    }
    
    
    public int findArrayIntersection(int empty[] , int arr[], int size1, int size2 , int arr1[]){
        int s = 0;
        /*
        for(int i = 0; i <size1 ; i++){
            int element = arr[i]; 
            
            for(int j = 0; j< size2 ; j++){ 
                
                
                
                else if(element == arr1[j]){
                    System.out.println(arr[j]);
                    empty[i] = element;  
                    arr1[j] = Integer.MIN_VALUE; // Any negative value can be also used
                    s++;
                    break; 
                }
            }
        
         }
            */ 
            
            
            // optimized code:  
            int i = 0; 
            int j = 0;  
            while(i < size1 && j < size2){
                if(arr[i] == arr1[j]){
                    empty[i] = arr[i];  
                    System.out.println("Common element :" + empty[i]);
                    i++; 
                    j++;  
                    s++;
                }
                
                else if(arr[i] < arr1[j]){
                    i++;
                }
                
                else{
                    j++; 
                }
                
                
            }
            
            
        System.out.println(s);
        return s;
    }
    /*
    public int pairSum(int arr[] ,int size, int empty[], int s){
        int s1 = 0; 
        
        for (int i = 0; i < size ; i++ ){
            for (int j = i; j < size ; j++ ){
                if(s == (arr[i] + arr[j])){
                    if(arr[i] < arr[j]){
                        empty[s1] = arr[i]; 
                        s1++; 
                        empty[s1] = arr[j]; 
                        s1++; 
                        break;
                    } 
                    
                    else{
                        empty[s1] = arr[j]; 
                        s1++; 
                        empty[s1] = arr[i]; 
                        s1++; 
                        break; 
                    }
                }
                
                else if(s < (arr[i] + arr[j])){
                    break;    
                }
            } 
        }      
        
        return s1;
    }
    */
    
    public int tripletSum(int arr[] ,int size, int empty[], int s){
        int s1 = 0; 
        
        for (int i = 0; i < size ; i++ ){
            for (int j = i; j < size ; j++ ){
                if(s == (arr[i] + arr[j])){
                    if(arr[i] < arr[j]){
                        empty[s1] = arr[i]; 
                        s1++; 
                        empty[s1] = arr[j]; 
                        s1++; 
                        break;
                    } 
                    
                    else{
                        empty[s1] = arr[j]; 
                        s1++; 
                        empty[s1] = arr[i]; 
                        s1++; 
                        break; 
                    }
                }
                
                else if(s < (arr[i] + arr[j])){
                    break;    
                }
            } 
        }      
        
        return s1;
    }
    
    public void printArray(int arr[], int s){
        for(int i = 0; i < s ; i++){
                 System.out.print(arr[i] + " ");
        } 
    } 
    
    public void sortArr(int arr[], int s){
         
        int i = 0,j = s-1;
        int step = 0;
       
        while(i < j){
           
            
            while(arr[i] == 0){
                i++;
            }
            
            while(arr[j] == 1){
                j--; 
            }
          
            // agar yaha pohoche matlab niche ke loop mein pohoche. 
            if(arr[i] == 1 && arr[j] == 0 && i < j){
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
                i++; 
                j--; 
            }    
            
        } 
        
        System.out.println();
    }
    
    
    
    
}
