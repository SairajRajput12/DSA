import java.util.*;
import java.io.*;
public class  shellRotate{

        public static void display(int arr[][]){
                for (int i = 0; i < arr.length; i++) {
                    for (int j = 0; j < arr[0].length; j++) {
                        System.out.print(arr[i][j] + " ");
                    }
                    System.out.println();
                }
        }

        public static void rotateShell(int number_of_the_rotation,int number_of_the_shell,int[][] twoDarray){
                int[] oned = fillOneDFromShell(arr,number_of_the_shell);
                 
        }
        public static void main(String args[]){
            // code
            System.out.println("Shell Rotate :"); 
            Scanner s = new Scanner(System.in); 
            int row = s.nextInt(); 
            int column = s.nextInt(); 
            int[][] oneDArray = new int[row][column]; 
            
            for (int i = 0; i < oneDArray.length; i++) {
                for (int j = 0; j < oneDArray[0].length; j++) {
                    oneDArray[i][j] = s.nextInt(); 
                }
            }

            int number_of_the_shell = s.nextInt(); // kis shell ko rotate karna chahte hai? 
            int number_of_the_rotation = s.nextInt(); // kitne se rotate karna chahte hai ?
            rotateShell(number_of_the_rotation,number_of_the_shell,oneDArray); 
            display(arr); 
        }
}