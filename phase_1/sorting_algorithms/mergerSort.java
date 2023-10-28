/*

public class mergerSort{
	
	public static void merge(int[] arr,int s,int e){
		int mid = (s+e)/2; 
		int len1 = mid - s + 1; 
		int len2 = e - mid; 
		
		int[] first = new int[len1]; 
		int[] second = new int[len2]; 
		
		// copy values 
		int k = s; 
		int mainArrayIndex = s; 
		for(int i = 0; i < len1; i ++){
			first[i] = arr[mainArrayIndex ++]; 
		}
		
		mainArrayIndex = mid + 1; 
		for(int i = 0; i < len2; i ++){
			second[i] = arr[mainArrayIndex ++]; 
		}
	
		// merger both of them 
		int index1 = 0; 
		int index2 = 0; 
		mainArrayIndex = s; 
		
		while(index1 < len1 && index2 < len2){
			if(first[index1] < second[index2]){
				arr[mainArrayIndex ++] = first[index1 ++]; 
			}
			else{
				arr[mainArrayIndex ++] = second[index2 ++]; 
			}
		}
		
		while(index1 < len1){
			arr[mainArrayIndex ++] = first[index1 ++]; 
		}
		
		while(index2 < len2){
			arr[mainArrayIndex ++] = second[index2 ++]; 
		}
	}
	
	public static void mergeSort(int[] arr,int s,int e){
		// base case 
		// System.out.println("Hrllo"); 
		if(s >= e){
			return; 
		}
		
		int mid =(s+e)/2; 
		
		// left part sort karna hai 
		mergeSort(arr,s,mid); 
		
		// right part sort karna hai 
		mergeSort(arr,mid+1,e); 
		
		// merger both of the arrays. 
		merge(arr,s,e); 		
	
	}		

	public static void main(String[] args){
		System.out.println("This is tutorial");
		int[] arr = {2,5,1,6,9}; 
		int n = 5; 
		mergeSort(arr,0,n-1); 
		for(int i = 0; i < arr.length; i++){
			System.out.println(arr[i] + " "); 
		}
	}
}



*/ 



public class mergerSort{
	public static void print(int[] arr){
		for(int i = 0; i < arr.length; i++){
			System.out.print(arr[i] + " "); 
		}
		System.out.println(); 
	}

	public static void MergerMeDaddy(int[] arr,int e,int s){
		int mid = s + (e-s)/2; 
		int len1 = mid - s + 1; // 2  
		int len2 = e - mid;  // 1. 
		int[] first = new int[len1];  // 2
		int[] second = new int[len2]; // 1
		int index = s;  // 0
		// copy the values 
		for(int i = 0; i < len1; i ++){
			first[i] = arr[index ++]; // []
		}
		
		index = mid + 1; 
		for(int i = 0; i < len2; i ++){
			second[i] = arr[index ++]; 
		}
	
		
		// now merge them 
		index = s; 
		int index1  = 0, index2 = 0; 
		while(index1 < len1 && index2 < len2){
			if(first[index1] > second[index2]){
				arr[index ++] = second[index2 ++]; 
			}
			else{
				arr[index ++] = first[index1 ++]; 
			}
		}
		
		while(index1 < len1){
			arr[index ++] = first[index1 ++]; 
		}
		while(index2 < len2){
			arr[index ++] = second[index2 ++]; 
		}		
		print(arr); 
	}

	public static void sortMeDaddy(int[] arr,int s,int e){
		if(s >= e){
			return; 
		} 	
		
		int mid = s + (e-s)/2; 
		// sort the left part
		print(arr); 
		sortMeDaddy(arr,s,mid); 
		// sort the right part 
		System.out.println("B end" + e);
		sortMeDaddy(arr,mid+1,e); 
		System.out.println("A end" + e);
		
		// merger both of them  
		System.out.println(s + " "+e);
		MergerMeDaddy(arr,e,s); 
	}
	
	
	public static void main(String args[]){
		System.out.println("This is the case"); 
		int[] arr = {3,2,4,1,3}; 
		sortMeDaddy(arr,0,4); 		
		System.out.println(); 
		System.out.println(); 
		System.out.println(); 
    	System.out.println("This is the final answer: ");
		print(arr); 	
	}	
}













































