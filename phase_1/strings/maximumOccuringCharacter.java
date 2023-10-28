//{ Driver Code Starts
import java.lang.*;
import java.io.*;
import java.util.*;
class GFG
{
	public static void main (String[] args) throws IOException
	{
	 BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	 int tc=Integer.parseInt(br.readLine().trim());
	 
	 while(tc-- >0)
	 {
	     String line=br.readLine().trim();
	     
	     Solution obj = new Solution();
	     
	     System.out.println(obj.getMaxOccuringChar(line));
	     
	 }
	 }
}
// } Driver Code Ends



class Solution
{
    //Function to find the maximum occurring character in a string.
    
    public static char getMaxOccuringChar(String line)
    {
        // Your code here
        // create array count 
        int[] arr = new int[26]; 
            for(int i = 0; i < line.length(); i ++){ // lower case
                    if(line.charAt(i) >= 'a' && line.charAt(i) <= 'z'){
                        arr[(line.charAt(i) - 'a')] ++; 
                    }
                    
                    else if(line.charAt(i) >= 'A' && line.charAt(i) <= 'Z'){ // upper case
                         arr[(line.charAt(i) - 'A')] ++;
                    }
            }
            
        int max = -1; 
        int ans = 0; 
                for(int i = 0; i < arr.length; i ++){
                    if(max < arr[i]){
                            ans = i; 
                            max = arr[i]; 
                    }
                }
        int k = (int) 'a' + ans;  
        return  (char)k; 
        
    }
    
}
