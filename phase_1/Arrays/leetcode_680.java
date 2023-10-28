class Solution {

    public static boolean isPallindrome(String s1,int s,int e){
        while(s < e){
            if(s1.charAt(s) == s1.charAt(e)){
                s ++; 
                e --;  
            }
            else{
                return false; 
            }
        }
        return true; 
    }

    public static boolean validPalindrome(String s) {
        // aba ------------> aa -> true 
        // abca -----------> aca or aba -> true 
        // abc ------------> ab/ ac -> false. 

        // last approach: 

        // boolean ans = true; 
        // int odd = 0; 
        // int start = 0; 
        // int end = s.length() - 1;  
        // int found  = 0; 
        // while(start < end){
        //     if(end == start){
        //             end = s.length() - 1; 
        //             start ++; 
        //     }
        //     if(s.charAt(end) == s.charAt(start)){
        //         // pallindrome mil gaya hai.
        //         if(odd > 2){
        //             return false; 
        //         } 
        //         start ++; 
        //         end --;   
        //         found = 1; 
        //     }
        //     else if(s.charAt(start) != s.charAt(end)){
        //         System.out.println(start);   
        //         System.out.println(end); 
                
        //         odd ++; 
        //         end --; 
        //     }
        // }
        
        // if( found == 0){
        //     return false; 
        // }
        // return ans;  

        // another appraoch: 
        int start = 0; 
        boolean ans = true; 
        int end = s.length() - 1; 
        while(start < end){
            if(s.charAt(start) == s.charAt(end)){
                start ++; 
                end --; 
            }
            else{
                return isPallindrome(s,start+1,end) || isPallindrome(s,start,end-1); // skip last or first character/ 

            }
        }
        return ans; 
    }
}
