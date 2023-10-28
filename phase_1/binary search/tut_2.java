import java.util.*; 

class Solution{
    public int first_occurence( int arr[], int n, int key){
        int start = 0; 
        int end = n - 1; 
        int mid = start + (end - start)/2;  
        int ans = -1;
            while(start  <= end){
                if(key == arr[mid]){
                    ans = mid; 
                    end = mid - 1;
                }
                
                else if( key < arr[mid]){
                    end = mid - 1;    
                }
                
                else if( key > arr[mid]){
                    start = mid + 1; 
                }
                
                
                mid = start + (end - start)/2;    
            }
        return ans; 
    }
    
    public int last_occurence( int arr[], int n, int key){
        int start = 0; 
        int end = n - 1; 
        int mid = start + (end - start)/2;  
        int ans = -1;
            while(start  < end){
                if(key == arr[mid]){
                    ans = mid; 
                    start = mid + 1;
                }
                
                else if( key < arr[mid]){
                    end = mid - 1;    
                }
                
                else if( key > arr[mid]){
                    start = mid + 1; 
                }
                
                
                mid = start + (end - start)/2;    
            }
        return ans; 
    }
    
    public List firsrAndLastPosition(int a[],int n,int k){
        List l = new  ArrayList(); 
        int first = first_occurence(a,n,k);  
        l.add(first); 
        int second = last_occurence(a,n,k);  
        l.add(second);
        return l;
    }
    
    public int TotalOccurences(int a[],int k){
        int first = first_occurence(a,a.length,k); 
        int second = last_occurence(a,a.length,k); 
        return (second - first) + 1;
    } 
    
    public int PeakIndex(int a[]){
        int start = 0; 
        int end = a.length - 1; 
        int mid = start + (end - start)/2; 
            while(start < end){
                if(a[mid] < a[mid+1]){
                    start = mid + 1; 
                }
                
                else{
                    end = mid;
                } 
                mid = start + (end - start)/2; 
            }
        return start; 
    }
}
public class Main
    {
	public static void main(String[] args) {
		System.out.println("This is tutorial number 16: Binary search tree interview question");  
		
		// PROBLEM: 1 FIND THE FIRST AND LAST OCCURENCE OF THE KEY ELEMENT 
		/*
		Solution s = new Solution(); 
		int arr[] = {1,2,3,3,5};
		int index = s.first_occurence(arr,5,3); 
		    if(index == -1){
		        System.out.println("Given element is not present in array");
		    }
		    
		    else{
		        System.out.println("Yes, the key element is present at :"+index);
		    }
		index = s.last_occurence(arr,5,3); 
		    if(index == -1){
		        System.out.println("Given element is not present in array");
		    }
		    
		    else{
		        System.out.println("Yes, the key element is present at :"+index);
		    }    
	    List l = new ArrayList(); 
	    l = s.firsrAndLastPosition(arr,5,5); 
	    System.out.println(l);
	    */
	    
	    // Problem :2 To find the total number of occurence of the key element 
	    // Approach: Total number of occurences = (first index - Last index) + 1 
	    /*
	            Solution s = new Solution(); 
		        int arr[] = {1,2,3,3,3,3,3,3,3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
		        int ans = s.TotalOccurences(arr,3);   
		        int ans2 = s.TotalOccurences(arr,5); 
		        System.out.println("Total number of Occurences is :"+ans);
		        System.out.println("Total number of Occurences is :"+ans2);
		*/
		
		// Problem 3: Find peak in mountain array 
		Solution s = new Solution(); 
		int arr[] = {3,4,5,1};
		System.out.println("The peak index of the given array is :"+s.PeakIndex(arr));
	}
}




