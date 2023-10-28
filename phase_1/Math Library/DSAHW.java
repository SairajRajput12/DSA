// import java.util.*;
// import java.io.*;
public class  DSAHW{
        public static void main(String args[]){
        // code
                 // enter the project name
                System.out.println("This is HWN from Love Babber");
    //  int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //  int b[3][3]; 
    int[][] a = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}; 
    // int m = a.length; 
    // int n = a[0].length; 
    // int[][] b = new int[n][m];   
    // // cout << "I M BATMAN" << endl;
    //     for (int i = 0; i < a[0].length; i ++)
    //     {
    //             for (int j = (a.length - 1); j >= 0; j--)
    //             {
    //                 b[i][a.length - 1 -j] = a[j][i];    
    //             }
    //     }

    // for (int i = 0; i < b.length; i++)
        // {
        //         for (int j = 0; j < b[0].length; j ++)
        //         {
        //             System.out.print(b[i][j] + " ");     
        //         }

        //         System.out.println();
        // }
    int n = a.length;

    for (int i = 0; i < a.length; i++) {
        for (int j = 0; j < a[0].length; j++) {
            System.out.print(a[i][j] + " ");
        }
        System.out.println();
    }
    System.out.println();
            
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < a.length; i++) {
        for (int j = 0; j < a[0].length; j++) {
            System.out.print(a[i][j] + " ");
        }
        System.out.println();
    }

    System.out.println();
    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    for (int i = 0; i < a.length; i++) {
        for (int j = 0; j < a[0].length; j++) {
            System.out.print(a[i][j] + " ");
        }
        System.out.println();
    }
        
    }
}
