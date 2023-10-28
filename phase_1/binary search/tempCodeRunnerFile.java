lic static List<Integer> countSmaller(int[] nums) {
    //     List<Integer>s = new ArrayList<Integer>();
    //     // Given an integer array nums, return the array counts where counts[i] ] is the number of smaller elements to the right of to the right of nums[i]. 
    //     // using iterative approach using 2 loops: 

    //     // brute-force with TLE: 
        
         
    //     // for (int i = 0; i < nums.length; i++) {
    //     //     int element = nums[i];  
    //     //     int cnt = 0;
    //     //     for (int j = (i+1); j < nums.length; j++) {
    //     //             if(nums[j] < element){
    //     //                 cnt ++; 
    //     //             }
    //     //     }
    //     //     s.add(cnt); 
    //     // }
        
    //     // using brute-force with optimisation: 
    //     int i = 0, j = i + 1; 
    //     int cnt = 0;
        

    //     return s; 

            int n = nums.length; 
            List <Integer> ans= new ArrayList<Integer>(); 
            for (int i = 0; i < n; i++) {
                    int[] sample = new int[n - i]; 
                    int startIndex = i;  
                    System.arraycopy(nums,startIndex,sample,0,(n - i));
                    int count = BinarySearch(nums[i],sample); 
                    ans.add(count); 
            }

            return ans; 
    }

    public static int BinarySearch(int e,int[] nums){
        int count = 0; 
        int l = 0, h = nums.length; 
        Arrays.sort(nums);
                while(l < h){
                    // System.out.println("hi");
                    int mid = l + (h - l)/2; 
                    if(nums[mid] < e){
                        count = mid - l + 1; 
                        l = mid + 1; 
                    }
                    else{
                        h = mid;   
                    }
                }

        return count; 
    }