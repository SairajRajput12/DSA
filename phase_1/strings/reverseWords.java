import java.util.*;

class Solution
{
    public String reverseWords(String temp){
        int start = 0, end = temp.length() - 1; 
        char[] ch = temp.toCharArray();   
            while(start < end){
                    char tp = ch[start]; 
                    ch[start] = ch[end]; 
                    ch[end] = tp; 
                    start ++; 
                    end --;
            }
        return new String(ch);     
    }
    
    public String reverseString(String input){
        String reverseFlash ="",temp =""; 
        for(int i = 0; i < input.length() ; i ++){
                if(input.charAt(i) == ' ' || input.charAt(i) == '-')
                {
                    String reversedWord = reverseWords(temp);
                    // System.out.println(reversedWord);
                    reverseFlash += reversedWord; 
                    reverseFlash += " "; 
                    // System.out.println(reverseFlash);
                    temp = ""; 
                    continue;
                }
                // System.out.println(temp);
                temp += input.charAt(i); 
        }
        
        System.out.println(temp);
        String last_word = reverseWords(temp); 
        reverseFlash += last_word; 
        String ans = reverseWords(reverseFlash);
        // System.out.println(temp);
        return reverseFlash; // returns yM eman si evol 
        // return ans;     // returns love is my name 
    }    
}

public class Main
{
	public static void main(String[] args) {
		System.out.println("I am BatMan !!!");
		Solution s = new Solution(); 
		// reverse string: 
		// My name is love ---------> yM eman si evol 
		String f = "My name is love"; 
		String ans = s.reverseString(f); 
		System.out.println("Your reversed string is :" + s.reverseString(f));
		
	}
}

