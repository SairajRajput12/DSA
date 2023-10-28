import java.util.*;

public class Main {

    // ~~~~~~~~~~~~~~~~~User Section~~~~~~~~~~~~~~~~
       public static int minTotalDistance(int[][] nums) {
        // Write your code here
        // why median is shortest distance ? 
        // / approach 1: get all x cordinates/ 
        // get all y co-ordinates. 
        // sort both array 
        // select mid-point as median. 
        // x -> (0,0,2) -> (0,0,2) 
        // y -> (0,4,2) -> (0,2,4) 
        
        // mid -> (0,2). 
        
        
        // x -> cordinate in sorted -> row wise traversal 
        ArrayList a = new ArrayList(); // x 
        ArrayList b = new ArrayList(); // y 
        for(int i = 0; i < nums.length; i ++){
            for(int j = 0;j < nums[0].length; j ++){
                if(nums[i][j] == 1){
                    a.add(i); 
                }
            }
        }
        // y -> cordinate in sorted -> column wise traversal 
        for(int i = 0; i < nums[0].length; i ++){
            for(int j = 0;j < nums.length; j ++){
                if(nums[i][j] == 1){
                    b.add(j); 
                }
            }
        }
        // calculate mid point which is the best meeting point 
        int x = a.get(a.size()/2); 
        int y = b.get(b.size()/2); 
        
        // calculate the distance using manhattan formula 
        int dist = 0; 
        for(int xval : a){
            dist += Math.abs(x-xval); 
        }
        
        for(int yval : b){
            dist += Math.abs(y-yval); 
        }
        
        
        // return the sum 
        return dist; 
    }

    // ~~~~~~~~~~~~~~~Input Management~~~~~~~~~~~~~~
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int m = scn.nextInt();


        int[][] grid = new int[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                grid[i][j] = scn.nextInt();
            }
        }

        int dist = minTotalDistance(grid);
        System.out.println(dist);
    }
}
