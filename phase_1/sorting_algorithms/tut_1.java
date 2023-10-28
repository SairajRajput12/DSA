import sorting.All_sorting_algorithms;  


class Solution{

    public void printArray(int arr[])
    {
            for(int i = 0; i < arr.length; i ++)
            {
                System.out.print(arr[i] + " "); 
            }

        System.out.println(); 
    }

    public void selectionSort(int arr[]) 
    {
        for(int i = 1; i < arr.length; i ++)
        {
            int min_index = i; 
                for(int j = i+1; j < arr.length; j ++)
                {   
                    if(arr[min_index] > arr[j])
                    {
                        min_index = j; 
                    }
                }
            int temp = arr[i]; 
            arr[i] = arr[min_index]; 
            arr[min_index] = temp;  
        }
    }
}


public class tut_1{
    public static void main(String args[]) 
    {
        Solution s = new Solution(); 
        System.out.println("This is tutorial number 1: Selection sort in java");  
        System.out.print("Given array is :"); 
        int arr[] = {64, 25, 12, 22, 11};
        s.printArray(arr); 
        // s.selectionSort(arr); 
        // System.out.println("Using package"); 
        All_sorting_algorithms n = new All_sorting_algorithms();  
        // n.Selection_sort(arr); 
        // n.Insertion_Sort(arr);
        n.quickSort(arr,0,arr.length-1); 
        s.printArray(arr);  
        System.out.println("Beacuse......I am Batman!");  
    }
}
