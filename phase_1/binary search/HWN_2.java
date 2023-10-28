import java.util.*;


public class Main
{
	public static void main(String[] args) {
	    /*
	    Solution s = new Solution();
		System.out.println("This is homework Question:"); 
 		int[] a = {-3,0,1,-3,1,1,1,-3,10,0}; 
// 		int [] a = {1,2};
// 		int [] a = {1,2,2,1,1,3};
		
	    System.out.println(s.uniqueOccurrences(a));
            
                       
            
            Solution s = new Solution(); 
		int[] a = {1}; 
        	// int[] a ={4,3,2,7,8,2,3,1}; 
        	// int[] a = {1,1,2};
		List a1 = new ArrayList(); 
		a1 = s.findDuplicates(a); 
		System.out.println(a1);
            */
            
            
	    // Threesom: 
	    /*
	     Solution s = new Solution(); 
	     int[] a = {1,1,2,2,1,1}; 
       	     int j = 4; 
             System.out.println("Before function call");
             boolean a1 = s.find3Numbers(a,a.length,j); 
             System.out.println();
             System.out.println("After function call");
             System.out.println(a1); 
        */ 
        Solution s = new Solution(); 
        int[] a = {0,1,2,2,1,0}; 
        s.sort012(a); 
        s.printArray(a,a.length);
	}
}



class Solution{
     
    public void printArray(int arr[], int s){
        for(int i = 0; i < s ; i++){
                 System.out.print(arr[i] + " ");
        } 
    } 
    
    // public boolean uniqueOccurrences(int[] a) { 
    //     System.out.println("Inside the Unique Occurence Function :");
    //     HashMap< Integer, Integer> m=new HashMap<>();
    //     Set< Integer> s=new HashSet<>();
        
        
    //     for( int x:a){
    //         System.out.println("x :"+x);
    //         // Here getOrDefault returns the value associated with the key. 
    //         // otherwise it will return the default value which is zero. 
    //         m.put(x, m.getOrDefault(x,0)+1); 
    //         System.out.println("value :"+m);
    //     }
    //     // System.out.println("Printing the map:"); 
        
        
    //     System.out.println("Now printing the value that get stored in Set :");
    //     for( int x: m.values()){ 
    //         s.add(x);
    //         System.out.println(s);
    //     }
    //     return m.size()==s.size();
        
    // }
    
    public boolean uniqueOccurrences(int a[]){
        // Approach : 1 
            // Step 1: Creating the Map  which has key representing unique elements present in it.
            // Step 2: Create Set that stores the occurences of unique elements in it. 
            // step 3: Compare their size if both of them have same size then return true otherwise return false. 
       /* 
        HashMap <Integer ,Integer> h =new HashMap(); 
            for(int x : a){
            // now inserting the unique elements into the map as key and storing their occurenceses as Key-value into the HashMap. 
                h.put(x,h.getOrDefault(x,0)+1); 
            }
        // Create a Set which will store the occurences of unique elements.
        HashSet s1 = new HashSet(); 
            for(int x : h.values()){
                s1.add(x);
            }
    return s1.size() == h.size(); 
        */ 
        
        // Approach : 2  
        /*
            Arrays.sort(a);
            int c = 1; 
            HashSet<Integer> s = new HashSet();
            
            for(int i = 1; i < a.length; i++){
                if(a[i] == a[i-1]){
                    c++;
                }
                
                else{
                    if(s.contains(c)){
                        return false;
                    }
                    
                    s.add(c); 
                    c = 1; 
                }
            }
            System.out.println(s);
            if(s.contains(c)) return false;
            return true;
        */    
        
        // using array:
        
        // Official Answer: 
        int[] freq = new int[2001]; 
        for(int x : a){
            freq[x + 1000]++;
        }
        Arrays.sort(freq); 
        
        for (int i = 0;i < 2000 ;i++){
            if(freq[i] == freq[i+1] && freq[i] != 0){
                return false;
            }
        } 
        
        return true;
    }
    
    public List<Integer> findDuplicates(int[] nums) { 
        // Optimisation : 1
        Arrays.sort(nums);
        List l = new ArrayList(); 
        /*
        for(int i = 0; i < nums.length; i++){
            for (int j = (i+1); j < nums.length ; j++){
                if(nums[i] == nums[j]){
                    l.add(nums[i]);
                }
            } 
        }
        */ 
        
        // Optimisation : 2
        int i = 1;
        while(i < nums.length){
            if(nums[i] == nums[i-1] && i != (nums.length)){
                l.add(nums[i]); 
                i ++; 
            }
            
            else if(nums[i] != nums[i-1]){
                i ++; 
            }
        }
        
        /*
        
        C++ Solutions: 
        
        vector findDuplicates(vector& nums) {
            vector ans;
            sort(nums.begin(),nums.end());
                for(int i=0;i<nums.size()-1;i++){
                        if(nums[i]==nums[i+1])
                                ans.push_back(nums[i]);
                }
            return ans;
        }
        */
        
        
        
         List<Integer> res = new ArrayList<>();
        for (int i = 0; i < nums.length; ++i) {
            int index = Math.abs(nums[i])-1;
            System.out.println("index :" + index);
            if (nums[index] < 0)
                res.add(Math.abs(index+1));
            nums[index] = -nums[index];
            System.out.println(res);
        }
        return res;
    return l;
    }
    
    
    public static ArrayList<ArrayList<Integer>> findTriplets(int[] arr, int n, int K)  {
        ArrayList s = new ArrayList();
        // Write your code here.
        Arrays.sort(arr); 
 
            for (int i = 0; i < n; i++){
                int start = i + 1; 
                int end = n - 1;     
                    while(start < end){
                        if(arr[i] + arr[start] +arr[end] == K){
                            s.add(arr[i]); 
                            s.add(arr[start]); 
                            s.add(arr[end]); 
                            return s;
                        }
                    
                        else if(arr[i] + arr[start] +arr[end] > K){
                            end --; 
                        }
                
                        else{
                            start ++; 
                        }
                    }
            } 
        s.add(-1);
        return s;         
        }
        
   // Sorting problem:
     public  boolean find3Numbers(int A[], int n, int X) { 
        Arrays.sort(A); 
       // Your code Here
       // approach :1 using double pointer approach
       /*
       for(int i = 0; i < n; i ++){
           int start = i + 1; 
           int end = n - 1; 
                while(start < end){
                    if(A[i] + A[start] + A[end] == X){
                        return true; 
                    }
                    
                    else if(A[i] +A[start] +A[end] > X){
                        end--;
                    } 
                    
                    else{
                        start ++; 
                    }
                }
       }
       */
       
       //  approach :2 This is a Hashing-based solution.
       // 1] Run 2 loops one from start to end and other is from i + 1 to end. 
       // 2] Create an hashmap and store elements between i+1 to j-1. 
       // 3]  So if the given sum is x, check if there is a number in the set which is equal to x – arr[i] – arr[j]. If yes print the triplet. 
       
       
       
      // Algorithm:
       // 1]     Traverse the array from start to end. (loop counter i) 
       // 2] 	 Create a HashMap or set to store unique pairs. 
       // 3] 	 Run another loop from i+1 to end of the array. (loop counter j) 
       // 4] 	 If there is an element in the set which is equal to x- arr[i] – arr[j], then print the triplet (arr[i], arr[j], x-arr[i]-arr[j]) and break 
       // 5] 	 Insert the jth element in the set. 
       
          
    for (int i = 0; i < n - 2; i++) {

            // Find pair in subarray A[i+1..n-1]
            // with sum equal to sum - A[i]
            HashSet<Integer> s = new HashSet<Integer>();
            
            int curr_sum = X - A[i];
            for (int j = i + 1; j < n; j++)
            {
                
                if (s.contains(curr_sum - A[j]))
                {
                        System.out.print("Triplet is " + A[i] + ", " + A[j] + ", " + (curr_sum - A[j]));
                        return true;
                }
                s.add(A[j]);
            }
        }

        // If we reach here, then no triplet was found
    return false; 
    }
    
         public  void sort012(int[] arr)
    {
        //Write your code here
        // Approach 1: Use user defined function {Arrays.sort(arr)} 
        // Approach 2: using 2 pointer approach 
        int start = 0; 
        int middle = 0; 
        int end = arr.length - 1;  
        int i = 1;
            while(middle <= end){
                System.out.println("This is iteration :"+i);
                if(arr[middle] == 0){
                    int temp = arr[middle]; 
                    arr[middle] = arr[start]; 
                    arr[start] = temp; 
                    start++; 
                    middle ++; 
                }
                
                else if (arr[middle] == 1){
                    middle++;
                }
                
                else if (arr[middle] == 2){
                    int temp = arr[middle]; 
                    arr[middle] = arr[end]; 
                    arr[end] = temp; 
                    end --; 
                     
                } 
                printArray(arr,arr.length);
            }
        }
                     
}



