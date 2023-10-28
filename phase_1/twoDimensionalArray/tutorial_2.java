/**
 * tutorial_2
 */
public class tutorial_2 {
    public static void main(String[] args) {
        System.out.println("This is tutorial number 1: 2D arrays in java");
        int[][] arr = {{1,2,3,4,5},{6,7,8,9,10}}; // way to initialise the 2D array directly
        for (int  i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            /* code */
            System.out.print(arr[i][j] + " ");
        }
        System.out.println(); 
        
    }

    }
    
}