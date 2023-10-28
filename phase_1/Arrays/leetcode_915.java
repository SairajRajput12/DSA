class Solution {
    public int partitionDisjoint(int[] nums) {
        int N = nums.length;
        int[] maxLeft = new int[N];
        int[] minRight = new int[N];
        
        maxLeft[0] = nums[0];
        minRight[N - 1] = nums[N - 1];

        for (int i = 1; i < N; ++i) {
            maxLeft[i] = Math.max(maxLeft[i - 1], nums[i]);
        }

        for (int i = N - 2; i >= 0; --i) {
            minRight[i] = Math.min(minRight[i + 1], nums[i]);
        }

        for (int i = 1; i < N; ++i) {
            if (maxLeft[i - 1] <= minRight[i]) {
                return i;
            }
        }
        // In case there is no solution, we'll return -1
        return -1;
    }
}
