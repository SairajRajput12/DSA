class leetcode_238 {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length; 
        int[] result = new int[nums.length]; 
        int leftProduct = 1; 
        int rightProduct= 1; 

          for (int i = 0; i < n; i++) {
            result[i] = leftProduct;
            leftProduct *= nums[i];
          }

        // Calculate the product of all elements to the right of each element
          rightProduct = 1;
          for (int i = n - 1; i >= 0; i--) {
              result[i] *= rightProduct;
              rightProduct *= nums[i];
          }

        return result;
    }
}
