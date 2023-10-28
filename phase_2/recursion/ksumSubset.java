import java.util.*; 
public class ksumSubset 
{

     public static void main(String args[]){
    	ArrayList<Integer> arr = new ArrayList<>(Arrays.asList(5, -1, 8, 2, 7, 0));
    	int n = 6; 
    	int k = 7; 
    	ArrayList<ArrayList<Integer>> ans = new ArrayList<>();  
        ArrayList<Integer> smallAns = new ArrayList<>();  
        findSubsets(arr,ans,0,n,k,smallAns); 
        
    }
    
    // public void giveMeDaddy(ArrayList<Integer> arr, int start,int k,ArrayList<ArrayList<Integer>> ans){
    //     if(start == arr.size()){
    //         return ;
    //     }
    //     int pivot = arr[start];
    //     if(k == arr[start]){
    //         x.add( new ArrayList<Integer>(Arrays.asList(arr[start]))); 
    //         start++; 
    //         if(s == arr.size()){
    //             return ;
    //         }
    //     } 

    //     int sum = 0; 
    //     for(int i = start; i < arr.size(); i ++){
    //         if(arr[i] == k){
    //             x.add( new ArrayList<Integer>(Arrays.asList(arr[i],0))); 
    //             break; 
    //         }
    //     }
    //     start++; 
    //     giveMeDaddy(arr, start, k, ans);
    // }

    public static void findSubsets(ArrayList<Integer> arr, ArrayList<ArrayList<Integer>> ans, int i, int n, int k, ArrayList<Integer> ans1) {
    if (n == 0) {
    	System.out.println("I am reached!!!!!");
        if (k == 0) {
            ans.add(new ArrayList<>(ans1));
        }
        return;
    }

    findSubsets(arr, ans, i + 1, n - 1, k, ans1);
    System.out.println("i " + i + " n "+ n+" k "+k); 
    ans1.add(arr.get(i));
    System.out.println(ans1); 
    findSubsets(arr, ans, i + 1, n - 1, k - arr.get(i), ans1);
    ans1.remove(ans1.size() - 1); // Remove the last element to backtrack
   }


    public static ArrayList<ArrayList<Integer>> findSubsetsThatSumToK(ArrayList<Integer> arr, int n, int k) 
	{
        // Write your code here.
        // N size of array 
        // return all subset of array which sum is equal to k 
        // N-> size of an array 
        // array elements. 
        // k denotes integer to which subsets should 

        // first appraoch
        /*
        Collections.sort(arr); 
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();  
        int feedBack = 0; 
        for(int i = 0; i < arr.size(); i ++){
            int current = arr.get(i); 
            ArrayList<Integer> ans1 = new ArrayList<>(); 
            for(int j = (i+1); j < arr.size();j ++){
                if(current < k){
                    current += arr.get(j); 
                    ans1.add(arr.get(j));
                }
                if(arr.get(j) == k){
                    ans1.add(arr.get(j)); 
                    ans.add(ans1);   
                    current = k; 
                }

                if(current == k){
                    ans.add(ans1); 
                }
                if(current == k && arr.get(j) == 0){
                    ans1.add(0); 
                    ans.add(ans1); 
                }
                
            }
        }
        return ans; 
        */ 

        // official approach:
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();  
        ArrayList<Integer> smallAns = new ArrayList<>();  
        findSubsets(arr,ans,0,n,k,smallAns); 
        return ans; 
       

    }
    
    
}























