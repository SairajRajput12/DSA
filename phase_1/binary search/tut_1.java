class arrays{
    public int binarySearch(int givenArray[],int size, int key_element){
        /*
            2 3 4 5 6 7 8 9 
            1] calculate mid index of given array. 
            2] compare the element at middle index with key element.-----> 1] if key = middle index element----> return middle index. 
                                                                    |
                                                                   |---->  2] if key < middle index element ---> move to left part 
                                                                  | 
                                                                 |------> 3] if key > middle index element ---> move to right part  
        */
        
        int start = 0; 
        int end = size - 1; 
        int middle = start + (end - start)/2;  // same as (start + end)/2  
            while(start <= end ){
                if(key_element == givenArray[middle]){
                    return middle;
                } 
                
                else if(key_element < givenArray[middle]){
                    end = middle - 1;
                }
                
                else{
                    start = start + 1; 
                } 
                middle = start + (end - start)/2; 
            } 
    return -1;        
    }
}


public class Main{
    public static void main(String args[]){
        System.out.println("This is tutorial number 15: binarySearch ");
        int[] a = {2,3,4,5,6,7,8,9};  
        int[] b = {2,4,6,8,10}; 
        arrays a1 = new arrays();  
        int index = a1.binarySearch(b,b.length,9); 
        if(index == -1){
            System.out.println("Given element is absent");
        } 
        else {
            System.out.println("Given element is present at index :"+index);
        }
    }
}
