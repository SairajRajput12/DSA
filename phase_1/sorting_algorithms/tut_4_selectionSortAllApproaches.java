import java.util.*; 


class tut_4_selectionSortAllApproaches {
    public void sortUs(int[] nums,int start){
        if(start == nums.length-1){
            return ;
        }
        int minIndex = start; 
        for(int i = (start + 1); i < nums.length; i ++){
            if(nums[i] < nums[minIndex]){
                minIndex = i;  
            }
        }

        int temp = nums[minIndex]; 
        nums[minIndex] = nums[start]; 
        nums[start] = temp; 
        sortUs(nums,start+1); 
    }

    public int[] sortArray(int[] nums) {
        // Arrays.sort(nums); 
        // return nums;  

        // sortUs(nums,0); 
        Arrays.sort(nums);  
        return nums; 
    }
}
