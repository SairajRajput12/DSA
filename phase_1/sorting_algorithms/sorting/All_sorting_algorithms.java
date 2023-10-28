package sorting; 
  

public class All_sorting_algorithms{

    public  void  Selection_sort(int arr[]) 
    {
        for(int i = 0; i < arr.length; i ++)
        {
            int min_index = i; 
            for (int j = i + 1; j < arr.length; j++) {
                    if(arr[min_index] > arr[j]){
                        int temp = arr[min_index]; 
                        arr[min_index] = arr[j]; 
                        arr[j] = temp; 
                    }
            }
        }
    }

    public void BubbleSort(int arr[])
    {
        for (int i = 1; i < arr.length; i++) {
            for (int j = 0; j < arr.length-i; j++) {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j]; 
                    arr[j] = arr[j+1]; 
                    arr[j+1] = temp; 
                }
            }
        }
    }

    public void printArray(int arr[])
    {
            for(int i = 0; i < arr.length; i ++)
            {
                System.out.print(arr[i] + " "); 
            }

        System.out.println(); 
    }
    
    // recursive approach: 
        public void sortMeBaby(int[] nums,int m){
        if(m > nums.length-1){
            return;
        }
        int temp = nums[m]; 
        int i = m -1; 
        for(i = (m-1);i >= 0; i --){
            if(temp < nums[i]){
                nums[i+1] = nums[i]; 
            }
            else{
                break; 
            }
        }

        nums[i+1] = temp; 
        sortMeBaby(nums,m+1); 

    }

    public void Insertion_Sort(int arr[]){
        int no_rounds = arr.length; 
        for (int i = 1; i < no_rounds; i++) {
            int temp = arr[i]; 
            int j = i - 1;
                    for (j = i - 1; j >= 0; j --) 
                    {
                            if(arr[j] > temp)
                            {
                                arr[j+1] = arr[j]; 
                            }
                            else
                            { // ruk jao 
                                break; 
                            } 
                        System.out.print("At :"+i+" The Arrays is Given As :");    
                        printArray(arr);     

                    }
                arr[j+1] = temp;     
            }
    }
    
    public static void swap(int[] arr,int start,int end){
    		int temp = arr[start];
    		arr[start] = arr[end];  
    		arr[end] = temp; 
    }
    
    public static int partition(int[] arr,int start,int end){
    	int cnt = 0; 
    	int pivot = arr[start]; 
    	for(int i = start + 1; i <= end; i ++){
    		if(pivot >= arr[i]){ // counting number of element greater than first element
    			cnt ++; 
    		}
    	}
    	
    	// now manage the partition
    	int pivotIndex = start + cnt; // index of sorted array's last element
    	swap(arr,pivotIndex,start); 
    	
    	// now manage the left and right side; 
    	int i = start; 
    	int j = end; 
    	
    	while(i < pivotIndex && j > pivotIndex){
    		while(arr[i] < pivot){
    			i ++; 
    		}
    		while(arr[j] > pivot){
    			j --; 
    		}
    		
    		if(i < pivotIndex && j > pivotIndex){
    			swap(arr,i++,j--); 
    		}    	
    	}
    	return pivotIndex;     	
    }
    
    public static void quickSort(int[] arr,int start,int end){
    	if(start >= end){
    		return; 
    	}
    	System.out.println("Hello"); 
    	
    	int p = partition(arr,start,end); 
    	quickSort(arr,start,p-1); 
    	quickSort(arr,p+1,end); 
    }

    public static void main(String args[])
    {

    }
}
