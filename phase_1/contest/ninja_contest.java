package contest; 
import java.util.*; 
import java.io.*; 

public class ninja_contest{
		public static void main(String args[])
		{
			System.out.println("Hello");
		}
		
		public static int appleAndCoupon(int n, int m, int[] arr) {
        
        	// Write your Code Here
        	int ans = 0; 
        	Arrays.sort(arr); 
        	    for(int i = 0; i < arr.length ; i ++)
        	    {
        		        if(i == n-m){
        			            continue; 
        		        }
        		        ans+=arr[i];
        		    }
        		return ans;     
		
		    }

		    public static  long threeWaySplit(int n, int[] arr) {
    	
        		// Write your Code here 
	
		        if(n == 1){
		            return 0; 
		        }
		        int i = 0, j = arr.length -1; 
		        int ans = 0; 
		        int left = arr[i]; 
		        int right = arr[j]; 
		        while(j > i){
		            if(left == right){
		                ans = left; 
		                left+= arr[i+1]; 
		                right += arr[j-1]; 
		                i ++; 
		                j --; 
		            }

		            else if( left > right){
		                // System.out.println("Rigth 1 :"+right);
		                right += arr[j-1]; 
		                j --; 
		                // System.out.println("Rigth 2 :"+right);
		            }
	
		            else{
		                // System.out.println(left);
		                left += arr[i+1]; 
		                i ++; 
		            }
		        }

		        return ans; 
		    }
	 public static int maxa(int a , int b){
			int ans = 0; 
				if(a > b){
					ans = a; 
				}

				else{
					ans = b; 
				}
			return ans; 
	}


	public static boolean isPossibleSolution(int[][] arr, int B,int n, int mid){
		int tCount = 0; 

		for (int i = 0; i < n; i++) {
			for (int j = 1; j <= arr[i][0]; j++) {
				if(arr[i][j] <= mid){
					tCount += arr[i][j]; 
				}				
			}
		}

			if(tCount > B){
				return false; 
			}
		return true; 
	}

	public static  int findMaxX(int n, int[][] arr, int B) {
        // Write your code here.
        int start = 0; 
        int end = 0;
		int sum = 0;  
		int ans = 0; 
        for(int i = 0; i < n; i ++){
			sum = 0; 
			for (int j = 1; j <= arr[i][0]; j++) {
				sum += arr[i][j]; 
			}
			end = maxa(end,sum); 
		}
		int mid = start + (end - start)/2; 
		while(start <= end)
		{
				if(isPossibleSolution(arr,B ,n, mid)){
					ans = mid; 	
					start = mid + 1; 
				}

				else{
						end = mid - 1; 
				}
			mid = start + (end - start)/2;
		}
		return ans; 
    }


	// Pattern Prinitng 
	public static void printLine(int h, int size){
		// Check whether the programme has entered in lower part or not
		
		char a = '/'; 
		char b = '\\';

		if(h > size){
			// logics
			
			a = '\\'; 
			b = '/'; 
			for(int i = 0; i < (h-size-1); i ++){
			    System.out.print("e");
			}
			    System.out.print(a); 
            
                // printing now "o" pattern
                int m = 2*size - 2*(h-size); 
                    for (int i = 0; i < m ; i++){
                        System.out.print("o");
                    } 
			 System.out.print(b);
            for(int i = 0; i < (h-size-1); i ++){
			    System.out.print("e");
			}
						        
			return; 
		}
 
		for(int i = 0; i < (size - h); i ++){
			System.out.print("e");
		}
		System.out.print(a); 

		for(int i = 0; i < 2*(h-1); i ++)
		{
			System.out.print("o");
		}

		System.out.print(b); 
		for(int i = 0; i < (size - h); i ++){
			System.out.print("e");
		}


	}
	public static void printTheDiamond(int row, int columns, int size)
	{
		for (int i = 0; i < row ; i++) {
			for (int j = 1; j <= 2*size; j++) {
				for (int j2 = 0; j2 < columns; j2++) {
					printLine(j,size); 
				}
				System.out.println(); 
			}
			
		}
	}
		
}
