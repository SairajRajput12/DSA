import sorting.All_sorting_algorithms; 

// all approaches:
class tut_2 {
    public void bubbleSort(int[] nums,int n){
        if(n == 0){
            return ;
        }

        for(int i = 0; i < n; i ++){
            if(nums[i] > nums[i+1]){
                int temp = nums[i+1]; 
                nums[i+1] = nums[i]; 
                nums[i] = temp; 
            }
        }

        bubbleSort(nums,n-1); 
    }

    public void sortColors(int[] nums) {
        // Arrays.sort(nums); ---> approach 1
       
        // approach 2: normally using bubble sort algorithm 
        // time complexity  -> O(N^2). 
        // space complexity -> O(1). 
        // code: 
        // for(int i = 1; i < nums.length; i ++){ // number of rounds. 
        //     for(int j = 0; j < nums.length - i; j ++){ // represnets array
        //         if(nums[j+1] < nums[j]){
        //             int temp = nums[j]; 
        //             nums[j] = nums[j+1]; 
        //             nums[j+1] = temp; 
        //         }
        //     }
        // }

        // approach 3: using recursion. 
        bubbleSort(nums,nums.length-1);  
    }
}




// class Solution{

//     public void printArray(int arr[])
//     {
//             for(int i = 0; i < arr.length; i ++)
//             {
//                 System.out.print(arr[i] + " "); 
//             }

//         System.out.println(); 
//     }

//     public void bubbleSort(int arr[]) 
//     {
//         for(int i = 1; i < arr.length; i ++)
//         {
            
//                 for(int j = 0 ; j < arr.length - i; j ++)
//                 {   
//                     if(arr[j + 1] < arr[j])
//                     {
//                        int temp = arr[j]; 
//                        arr[j] = arr[j + 1]; 
//                        arr[j + 1] = temp;   
//                     }
//                 }
            
//         }
//     }
// }


// public class tut_2{
//     public static void main(String args[]) 
//     {
//         Solution s = new Solution(); 
//         System.out.println("This is tutorial number 1: Bubble sort in java");  
//         All_sorting_algorithms h = new All_sorting_algorithms(); 
//         int arr[] = {64, 25, 12, 22, 11};
//         System.out.println("Given array is :"); 
//         h.printArray(arr); 
//         h.BubbleSort(arr); 
//         h.printArray(arr); 
//         // h.BubbleSort(arr); 
//         // System.out.println("Beacuse......I am Batman!"); 
//     }
// }
