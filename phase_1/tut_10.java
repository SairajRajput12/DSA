import java.util.*;



public class tut_10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here
        // introduction to arrays: 
//        System.out.println("This is tutorial number 10: Arrays sintroduction"); 
//        int[] a = new int[10]; 
//        for(int i = 0;i < 10 ; i++){
//            a[i]=i;
//        } 
//        
//        System.out.println(a);
       
        // HWN: Entire array ko kisi bhi value se initialise  
        // solution: 
        
        //   1]  using Arrays.fill() command 
        //   2]  using for loop  
        //   3] declaring at the time of creation 
        //   4] Using Arrays.copyOf()
        //   5] Using Arrays.setAll()
        
        
        /*
        java.util.Arrays.fill() method is in java.util.Arrays class.  
        This method assigns the specified data type value to each  
        element of the specified range of the specified array. 
        You can learn more about from this article.
        */ 
        
        /*
         int[] a = new int[10000]; 
         int n = 12; 
         Arrays.fill(a,n);
         
         for(int i = 0; i < 5; i++){
             System.out.println(a[i]);
         }
        */
        
        /*
        // Declaring
        
        int[] n = new int[15];
        
        // accessing 
        // all indices are present with 0 value.
        System.out.println(n[0]); 
        System.out.println(n[14]);
        System.out.println(n[1]); 
        
        // Initialising an array 
        int[] h = {1,2,3,4,5,6,7,8}; 
        System.out.println(h[0]); 
        System.out.println(h[2]);
        System.out.println(h[3]); 
        System.out.println(h[4]); 
        System.out.println(h[1]);
        System.out.println(h[5]); 
        System.out.println(h[6]); 
        System.out.println(h[7]);
        System.out.println(h[1]);
        
        */ 
        
        /*
            in case of c++: 
                int k[15] = {1,2,3}; 
                can we access other values?
        */ 
        // arrays with function
        /*
        array A = new array(); 
        int l = 15;
        int[] k = new int[l]; 
        k[0] = 0; 
        k[1] = 1; 
        k[2] = 2; 
        k[3] = 3; 
        
        // 0    1   2   3   ..0     000000... 
        A.printArray(k, l);
        
        int sizeOfK = k.length;  
        int sizeOfInt = Integer.SIZE/8; 
        System.out.println("The size of an array is: "+ (sizeOfK/sizeOfInt));
        System.out.println(); 
        System.out.println(); 
        System.out.println("Everything is fine here"); 
        // Different types of an array: 
        char[] c = new char[]{'s','a','i','r','a','j'}; 
        */
        /*
        
                    byte byteArray[];
                    short shortsArray[];
                    boolean booleanArray[];
                    long longArray[];
                    float floatArray[];
                    double doubleArray[];
                    char charArray[];
                    // an array of references to objects of
                    // the class MyClass (a class created by
                    // user)    
                        MyClass myClassArray[]; 

                        Object[]  ao,        // array of Object
                        Collection[] ca;  // array of Collection
                       // of unknown type        
        */
        
        // Maximum and Minimum in an array: 
            Scanner s = new Scanner(System.in);
            System.out.println("Enter the size of array :");
            int size = s.nextInt();
            int[] a = new int[100]; 
            // taking input 
            array b = new array();  
            for(int i = 0; i< size ;i ++){
               a[i] = s.nextInt();
            }

            
            b.printArray(a, size);  
            System.out.println("The maximum value of the given array is:" + b.getMax(a, size)); 
            System.out.println("The minimum value of the given array is:" + b.getMin(a, size));  
            //System.out.println(Integer.MIN_VALUE);
            
    }
}



class array{
    public void printArray(int arr[], int size){
        System.out.println("Printing an array"); 
            for(int i = 0; i< size ;i ++){
               System.out.print(arr[i] + " ");
            }
        System.out.println(); 
        System.out.println("Printing done!"); 
        
    }   
    // let's find minimum and maximum element from an array. 
    public int getMax(int arr[],int size){
        int max = Integer.MIN_VALUE;  // int ke range se minimum value dega
            for(int i = 0; i< size ;i ++){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
        return max;     
    }
    
    public int getMin(int arr[],int size){
        int min = Integer.MAX_VALUE; 
        for(int i = 0; i< size ;i ++){
                if(arr[i] <  min){
                    min = arr[i];
                }
            } 
        return min; 
    }
}
