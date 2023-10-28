import java.util.Scanner; 
public class tut_1_hwn
{
	public static void main(String[] args) { 
	Scanner sc=new Scanner(System.in); 
    System.out.println("enter the charecter");
    char ch = sc.next().charAt(0);
   
    if(ch>=65 && ch<=90){
        System.out.println("the given charecter belongs to uppercase"); 
        System.out.println((int)ch);
    } 
    
    else if(ch >= 97 && ch <=122 ){
        System.out.println("the given letter belongs to lowercase ");
        //System.out.println(ch); 
        System.out.println((int)ch);
    } 
    
    else if(ch>= 48 && ch <= 57){
        System.out.println("this charecter is decimal");
        //System.out.println(ch);
    	 System.out.println((int)ch);
    }
	}
}

