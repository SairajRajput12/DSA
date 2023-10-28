import java.util.*; 


public class missing_positive_number_all_approaches{
	public static void main(String args[]){
	
		Scanner s = new Scanner(System.in); 
		int[] a = new int[1000];
		System.out.println("Enter the size of an array");
		int size = s.nextInt(); 
			for(int i = 0; i < size ; i ++){
				a[i] = s.nextInt(); 
			}
			
			for(int i = 0; i < size ; i ++){
				System.out.println(a[i] +" ");
			}
		
		// using XOR approach	 
		/*
		int res = 0; 
		
		for(int i = 0; i < a.length ; i ++){
			res ^= i; 
			res ^= a[i]; 
		}
		
		System.out.println("Answer is :" + res);
		*/ 
		
		// using binary search: 
		
		
			
	}
}
