// Java Program to find Non
// empty subset such that
// its elements' sum is
// divisible by N
import java.io.*;
import java.util.HashMap;
import java.util.Map.Entry;
import java.util.Map;
import java.lang.*;
 


public class  PegionHolePrinciple{

    // Function to print the
// subset index and size
static void findNonEmptySubset(int arr[],
                               int N)
{
 
    // Hash Map to store the
    // indices of residue upon
    // taking modulo N of prefixSum
    HashMap<Integer, Integer> mp =
                new HashMap<Integer, Integer>();
 
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        // Calculating the
        // residue of prefixSum
        sum = (sum + arr[i]) % N;
 
        // If the pre[i]%n==0
        if (sum == 0)
        {
            // print size
            System.out.print(i + 1 + "\n");
 
            // Print the first i indices
            for (int j = 0; j <= i; j++)
                System.out.print(j + 1 + " ");
            return;
        }
 
        // If this sum was seen
        // earlier, then the
        // contiguous subsegment
        // has been found
        if (mp.containsKey(sum) == true)
        {
            // Print the size of subset
            System.out.println((i -
                              mp.get(sum)));
 
            // Print the indices of
            // contiguous subset
            for (int j = mp.get(sum) + 1;
                     j <= i; j++)
                System.out.print(j + 1 + " ");
 
            return;
        }
        else
            mp.put(sum,i);
    }
}
        public static void main(String args[]){
        // n pegions and (n - 1) and (n -1) holes than there is one hole where 2 pegions are sitting. 
        System.out.println("Pegion Hole Principle"); 
        /*

        Application: 
            1] red,black,green and yellow socks then pickup the minimum socks. 
            2] you have the set of numbers containing the {1,2,3,4,...,2n} numbers. atleast one pair having the sum equal to (2n+1). 
            e.g, 
                {1,2,3,4,5,6,7,8} => (1,8),(2,7),(3,6),(4,5).  
            3] n------------> people and if allowed to make the friend. at least 2 => Jinke friend ka count same hoga. 
                1 --------> 2,3,4.  
                2 --------> 1,4. 
                3 --------> 1,4,5.
                4 --------> 2,3,5,1. 
                5 --------> 3,4. 
                0 and (n - 1) does not co-exist. 
            4] if there is undirected graph with atleast 1 vertex. then at least there is 2 vertex which have same degree. 
            5] you have the equilateral triangle. In 5 points there atleast 2 points where the maximum distance is 1 possible. 
            6] you have to add 51 friends in your friend circle. then tell the how many mingroups will made if the people hatting them will not be added in same group.  
        */
        // if we have more number of pegion and less number of pegion hole then we will have at least one number of pegion-hole. 
        // long m; 
        // m =/ a.//nextLong(); 
        // Scanner a = new Scanner(System.in); 
        // long c[] = new long[m(int)+4];  
        
        // /for (int i = 0; i <= m; i++) {
                
        // }

        int arr[] = { 2, 3, 7, 1, 9 };
    int N = arr.length;
 
    findNonEmptySubset(arr, N);
       }
}