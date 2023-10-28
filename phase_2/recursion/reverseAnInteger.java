class Solution {
    public int reverse(int x) {
        int reversed = 0;
        reversed = reverseRecursive(x, reversed);
        return reversed;
    }

    private int reverseRecursive(int x, int reversed) {
        if (x == 0) {
            return reversed;
        }

        int digit = x % 10;
        int newReversed = reversed * 10 + digit;

        // Check if the new reversed value overflows the 32-bit integer range
        if ((newReversed - digit) / 10 != reversed) {
            return 0;
        }

        return reverseRecursive(x / 10, newReversed);
    }
}

