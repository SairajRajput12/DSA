import sorting.All_sorting_algorithms; 
public class tut_3 {
    public static void main(String args[]) {
        System.out.println("This is tutorial of Insertion sort "); 
        All_sorting_algorithms n = new All_sorting_algorithms(); 
        int arr[] = {64, 25, 12, 22, 11}; 
        System.out.println("The Given Array Is :"); 
        n.printArray(arr); 
        System.out.println("After Sorting The Array Will Be :");  
        n.Insertion_Sort(arr); 
        n.printArray(arr); 
    }
}
