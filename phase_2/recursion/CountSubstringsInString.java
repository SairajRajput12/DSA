import java.util.*; 


class Solution {
    public boolean isPallindrome(String s){
        int i = 0; 
        int j = s.length() - 1; 
        while(i < j){
            if(s.charAt(i) != s.charAt(j)){
                return false; 
            }
            i ++; 
            j --; 
        }
        return true; 
    }

    public int isIt(int ans,String input,int start){
        // number of pallindromic substrings. 
        //  abc -> if(first == last) -> ans ++. 
        if(start >= input.length()){
            return ans; 
        }
        for(int j = start + 1; j <= input.length(); j ++){
            if(isPallindrome(input.substring(start,j)) == true){
                // hai pallindrome/ 
                ans ++; 
            }
        }
        start ++; 
        return isIt(ans,input,start);         
    }

    public int checking(String s, int left,int right){
        int count = 0; 
        while(left <= right && left >= 0 && right < s.length() &&  s.charAt(left) == s.charAt(right)){
            count ++; 
            left --; 
            right ++; 
        }

        return count; 

    }

    public int countSubstrings(String s) {
        int ans = 0; 
        // non pallindrome.
        // using recursion:  
        // ans = isIt(ans,s,0); 

        // using nested loop. 
        // for(int i = 0; i < s.length(); i ++){
        //     for(int j = (i + 1); j <= s.length();j ++){
        //         if(isPallindrome(s.substring(i,j)) == true){
        //             ans ++; 
        //         }
        //     }
        // } 
        // return ans;

        // using double pointer.  
        /*
            there are 2 different types of pallindrome which are to be considered seperately for calculating all pallindromic substrings. 
            these 2 different types of substrings of even and odd length. 

            For substrings of odd lengths start from 0th element of the array to the end with two pointers say l and r each expanding towards left and 
            towards right till the boundary is reached. For this case initially both of these pointers point to the ith element.

            For substring of even lengths, also start from the 0th element to the end, in such a way that for every element the l pointer points to the ith 
            element and the r pointer points to (i+1)th point. Here also l and r pointers update there positions outwardly.

            increment the count of palindromic substrings for both of the cases by one if the characters pointed by pointers l and r are same. 

            Return the total count.

         */
        if(s.length() == 0) return 0; 
        int odd = 0; 
        int even = 0; 

        for(int i = 0; i < s.length(); i ++){
            odd += checking(s,i,i); 
            even += checking(s,i,i+1); 
        }

        return odd + even; // T.C = O(N^2) 

    }
}
