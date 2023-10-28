import java.util.*;
import java.io.*;
import static java.lang.Math.sqrt; 
import static java.lang.Math.floor; 

public class  SegmentedSIevePractise{
        
        public static void simpleSieve(int limit, Vector <Integer> prime,Vector<Integer> ans){
                boolean[] mark = new boolean[limit + 1]; 
                for (int i = 0; i < mark.length; i++) {
                        mark[i] = true; 
                }

                for (int i = 2; i*i < limit; i++) {
                        if(mark[i] == true){
                                for (int j = i*i; j < limit; j+= i) {
                                      mark[j] = false;   
                                }
                        }
                }

                for (int i = 2; i < limit; i++) {
                        if(mark[i] == true){
                                prime.add(i); 
                                ans.add(i); 
                                System.out.print(i + " "); 

                        }
                }
                // System.out.println();
        }

        public static Vector<Integer>  segmentedSieve(int num){
                Vector<Integer> prime = new Vector<>(); 
                Vector<Integer> ans = new Vector<>(); 
                int limit = (int) (floor(sqrt(num) + 1)); 
                simpleSieve(limit,prime,ans); 
                int low = limit, high = 2*limit; 
                while(low < num){
                        if(high >= num) 
                                high = num; 
                        // System.out.println("low " + low);
                        // System.out.println("high "+ high);        
                        boolean[] marks = new boolean[limit + 1]; 
                                for (int i = 0; i < marks.length; i++) {
                                        marks[i] = true; 
                                }

                        // now marks the each multiple of the prime array integer as false. 
                        for (int i = 0; i < prime.size(); i++) {
                                int lowIdx =  (int) (floor(low/prime.get(i)) * prime.get(i)); 
                                // System.out.println("lowIdx :" + lowIdx);
                                if (lowIdx < low){
					lowIdx += prime.get(i);
                                }
                                for (int j = lowIdx; j < high; j += prime.get(i)) {
                                        marks[j - low] = false; 
                                }
                        }        

                        for (int i = low; i < high; i++) {
                                if(marks[i - low] == true){
                                        ans.add(i); 
                                        System.out.print(i + " ");
                                }
                        }                      
                        low = low + limit; 
                        high = high + limit; 
                } 

                return ans; 

        }
        public static void main(String args[]){
        // code
                System.out.println("Practise of segmented sieve"); 
                int num  = 100; 
                Vector<Integer> ans = segmentedSieve(num); 
                System.out.println();
                for (int i = 0; i < ans.size(); i++) {
                        System.out.print(ans.get(i) + " ");
                }
                System.out.println();
                System.out.println("Sabkuch changa si");
        }
}