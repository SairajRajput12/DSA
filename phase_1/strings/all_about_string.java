import java.util.*;

public class Main
{
  public static void main (String[]args)
  {
    Scanner s = new Scanner (System.in);
//              char name[] = new char[20];
//              System.out.println("Enter the name :"); 
//              name = s.next().toCharArray(); 
//              System.out.println("Your name is :" + name);
    /*
       This results in the hashes of object reference in memory, not its contents:

       [I@7c3df479

       This is because Java's arrays don't override the toString() method of the Object class,
       and just return the hash of the object itself. This is an obviously missing feature in 
       the language, and it's not exactly clear why such a feature would be missing, especially 
       with other languages having support for printing such fundamental data structures.

     */

    //for printing its content just use toString() methood.  
    // System.out.println("The value of the string is : "+ Arrays.toString(name)); // printing the string using array. 
    // using this methood we cant print 2 words. 

    // it will print until it gots '\0' a null character 


    //problem 1:  reverse the character 
    char given_string[] = new char[20];
    System.out.println ("Enter the given string :");
    given_string = s.next ().toCharArray ();
    System.out.println ("Your string is :" + given_string);
        // find the length of character present in the string 
        int l = 0;
        // int i = 0;
        
        for(char  c : given_string){
            l ++; 
        }
        
        int first_pointer = 0, last_pointer = l - 1; 
            while(first_pointer < last_pointer){
                    char temp = given_string[first_pointer]; 
                    given_string[first_pointer] = given_string[last_pointer]; 
                    given_string[last_pointer] = temp; 
                    first_pointer ++; 
                    last_pointer --; 
        }
            
        System.out.println("The given string is :" + Arrays.toString(given_string));    
        
        
  }
}







































