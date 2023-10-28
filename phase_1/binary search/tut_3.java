import java.util.Scanner; 

class Solution{
        int binarySearch(int arr[] ,int s ,  int e , int key)
        { 
            int start = s; 
            int end = e; 
            int mid = start + (end - start)/2;
            
            while(start <= end)
            {
                    if(key == arr[mid])
                    {
                        return mid; 
                    }
                
                    else if(key > arr[mid])
                    {
                        start = mid + 1; 
                    }
                
                    else
                    {
                        end = mid - 1;
                    }
                mid = start + (end - start)/2;
            }
            return -1; 
        }
    
    
    
        public int pivot_ele(int arr[],int n)
        {
            int start = 0; 
            int end = n - 1; 
            int mid = start + (end - start)/2; 
            
                while(start < end )
                {
                        // System.out.println("hi");
            
                        if(arr[mid] >= arr[0])
                        {
                            start = mid + 1; 
                        } 
                    
                        else
                        {
                            end = mid;
                        }
                
                    mid = start + (end - start)/2;
                
                    
                }
            return start;     
                
        }
        
        
        public int position(int a[] ,int n,int key)
        {
            
        // Approach 1: complexity is log(n) 
        
            int pivot = pivot_ele(a,n); 
            
            if(key >= a[pivot] && key <= a[n-1])
            {
                // BS Second line 
                return binarySearch(a,pivot,n-1,key);
            }
            
            else
            { 
                // BS First Line
                return binarySearch(a,0,pivot - 1,key);
            }
        }
        
        public int mera_sea(int n)
        {
            int start = 0; 
            int end = n; 
            int  mid = start + (end - start)/2; 
            int ans = -1;
            
                while(start <= end) 
                {
                    long  square = mid * mid; 
                    
                        if(square == n)
                        {
                            return mid; 
                        }
                        
                        else if(square > n)
                        {
                            end = mid - 1;
                        }
                        
                        else
                        {
                            ans = mid; 
                            start = mid + 1; 
                        }
                    
                    mid = start + (end - start)/2;
                }
            return ans;     
        }
        
        public int mera_sqrt(int n)
        {
            
            return mera_sea(n); 
        
        }
        
        public double morePrecision(int n, int prescion, int temp){
            double factor = 1; 
            double ans = temp; 
                for(int i = 0; i < prescion ; i++){
                    factor = factor / 10; 
                        for(double j = ans; j*j < n; j = j + factor ){
                                ans = j; 
                        }
                }
            return ans;    
        }
        
}


public class tut_17
{
	public static void main(String[] args) 
	{
	        Scanner s1 = new Scanner(System.in); 
	        Solution s = new Solution();
    		System.out.println("tut-16: DSA Binary interviwed questions"); 
    		System.out.println(); 
    		
    		  // Problem 1: find pivot in sorted and rotated array.   
            	  // 2 approach : 
            	  // approach 1 using linear search 
            	  // approach 2: 
            	  // using binary search. 
            	
          	  // int arr[] = {3,8,10,17,1}; 
          	  // System.out.println("Pivot element is at index :" + s.pivot_ele(arr,5));
          	  
          	  // to find the element whether present or absent in the sorted or rotated array  
          	  // approach :1 --> complexity O(n) 
          	  // approach :2 --> complexity O(log n) 
          	  // approach :3 --> complexity O(log n) 
          	  
         	  // int pos = s.position(arr,5,17); 
         	  // System.out.println("The position of the Target element is :" + pos);
         	  /*
         	       approach :2 -----> find mid and determine which part is sorted and go through according to it. 
         	       approach :3 -----> similar to approach 1 but basic difference is that less lines of code will require. 
         	  */
         	   
         	   // Problem 2: 
         	   System.out.println("Enter the number"); 
         	   int n = s1.nextInt(); 
         	   // System.out.println("The square root of the number entered " + n + " is : "+s.mera_sqrt(n));
         	   int temp = s.mera_sqrt(n); 
         	   System.out.println("The answer with prescion is :" + s.morePrecision(n,3,temp));
	}
}



























