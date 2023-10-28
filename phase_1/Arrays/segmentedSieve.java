import java.util.*; 

public class segmentedSieve{
	public static ArrayList sieve(int b){
		boolean[] arr = new boolean[b+1]; 
		for(int i = 2; i*i <= arr.length; i ++){
			if(arr[i] == false){
				for(int j = 2*i; j < arr.length; j += i){
					arr[j] = true; 
				}
			}
		}
		
		ArrayList mivi = new ArrayList(); 
		for(int i = 2; i < arr.length ; i ++){
			if(arr[i] == false){
				mivi.add(i); 
			}
		}
		return mivi; 
	}
	
	public static void GiveAnswer(int a,int b){
		// System.out.println("Bang!"); 
		boolean[] r = new boolean[b-a+1]; // i am considering b > a
		int rootb = (int)Math.sqrt(b); 
		// get all primes till root b
		ArrayList <Integer> ref = sieve(rootb); 				
		
		// now mark using prime 
		for(int prime : ref){
			int Multiple = (int)Math.ceil((a*1.0)/prime); 
			int startingIndex = prime*Multiple - a; 
			for(int j = startingIndex; j < r.length; j += prime){
				r[j] = true; 
			}	
		}
		
		for(int i = 0; i < r.length; i ++){
			if(r[i] == false && i + a != 1){
				int val = i + a; 
				System.out.println(val); 
			}
		}
	}
	
	public static void main(String args[]){
		Scanner s = new Scanner(System.in); 
		int a = s.nextInt(); 
		System.out.println(); 
		int b = s.nextInt(); 
		System.out.println(); 
		GiveAnswer(a,b); 
	}
}
