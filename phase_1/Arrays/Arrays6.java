import java.util.*;
import java.io.*;
public class  Arrays6{

        public static int majorityElement(int[] arr) {
        int length = arr.length; 
        // Arrays.sort(arr); 
        int val = arr[0]; 
        int count = 1; 
        for(int i = 1; i < arr.length; i ++){
            if(arr[i] == val){
                // same element increment its count
                count ++; 
            }
            else{
                // map it with val
                count --; 
            }

            if(count == 0){
                val = arr[i]; 
                count ++; 
            }
        }

        return val; 
    }
        public static void main(String args[]){
        // code
            // majority element part -II 

        }   
}