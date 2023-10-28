class Solution {
    public int maxChunksToSorted(int[] arr) {
        // create left max value 
        // create the right min value 
        int[] right_min = new int[arr.length + 1];         
        int min = Integer.MAX_VALUE;  
        right_min[arr.length] = min; 
        for(int i = (arr.length - 1);i != 0; i --){
            right_min[i] = Math.min(arr[i],right_min[i+1]); 
        }

        int left_max = Integer.MIN_VALUE; 
        int count = 0; 
        for(int i = 0; i < arr.length; i ++){
            left_max = Math.max(left_max,arr[i]); 
            if(left_max <= right_min[i+1]){
                count ++; 
            }
        }
        // steps: 
        // 1] create right min. 
        // 2] genrate lmax and count the chunks. 

        return count; 
    }
}
