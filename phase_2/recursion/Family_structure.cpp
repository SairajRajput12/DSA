#include<bits/stdc++.h> 
using namespace std; 

// string kthChildNthGeneration(int n, long long int k)
// {
// 	// Write your code here	 
// 	// every shemale child gives birth to the male child first then female child 
// 	// every female child gives birth to the female child first then male child 
// 	// what will be kth child in the nth genration 
// 	// akash is a first member
// 	// every member has a 2 children

// 		// print the gender of the kth child
// 		int genrationOfChild,genrationNumber; 
// 		genrationOfChild = n;
// 		genrationNumber = k;  
// 		string ans1 = "Male"; 
// 		int genrationSize = pow(n,2); 
// 		int ans[genrationSize]; 
// 		int i = 0; 
// 		ans[0] = 0;  // -> Shemale child 
// 		ans[1] = 1;  // -> Female child

// 		while(i < genrationSize){
// 			if(ans[i] == 0 && i < genrationSize){
// 				ans[2*i + 1] = 0; 
// 				ans[2*i + 2] = 1; 
// 			}
// 			else if(ans[i] == 1 && i < genrationSize){
// 				ans[2*i + 1] = 1; 
// 				ans[2*i + 2] = 0; 
// 			}
// 			i ++; 
// 		}

// 		int res = pow((genrationOfChild)-1,2) + genrationNumber; 
// 		if(res == 0){
// 			return "Male"; 
// 		}
// 		ans1 = "Female"; 
// 		return ans1;  
// }

// using recursion: 


string kthChildNthGeneration(int n, long long int k)
{
    // every male child gives birth to the male child first, then the female child
    // every female child gives birth to the female child first, then the male child
    // what will be the kth child in the nth generation
    // Akash is the first member, and every member has 2 children
    
    // Base case: 
    if(n == 1 || k == 1){
        return "Male"; 
    }


    long long int par = (k+1)/2;  
    cout << "Before recursion call :" << endl; 
    cout << "k  " << k << endl; 
    cout << "n  " << n << endl; 
    cout << "par "<< par << endl; 
    string parGender = kthChildNthGeneration(n-1,par); 
    // if kth child is first child of nth parent then return parGender. 
    cout << "After recursion call :" << endl; 
    cout << "k  " << k << endl; 
    cout << "n  " << n << endl; 
    cout << "par "<< par << endl; 
    cout << "pargender" << parGender << endl;  
    if(k == 2*par-1){
        return parGender; 
    }
    // else return opposite gender. 
    else{
        if(parGender == "Female"){
            return "Male"; 
        }
        else{
            return "Female"; 
        }
    }
}






int main(){
	long long k; 
	int n; 
	cin >> n >> k;  
	// cout << 9874%10 << endl;
	cout << kthChildNthGeneration(n,k); 
	return 0; 

}



// another approach using java:
/*
public class Solution {
	public static int solve(long k){ 

		// base case
		if(k == 1){
			return 1; // first child is always male 
		}

		if(k%2 == 0){
			return 1 - solve((k+1)/2);  // it is second child
		}

		else {
			return solve((k+1)/2); 
		}
	}

	public static String kthChildNthGeneration(int genration, long child) {
		// Write your code here
		// return (Long.bitCount(k-1)&1)==0?"Male":"Female"; 

		// approach: 2
		// if(n ==1){
		// 	 return "Male";  
		// }   
		// // If the Parent is "Female" 
		// if(kthChildNthGeneration(n-1, (k+1)/2) =="Female") {
		// 	if(k %2 != 0){
		// 		return "Female"; 
		//     }
		// 	else{
		// 		return "Male";
	    //     }
		// }   
		// // if the Parent is "Male"       
		// if(k %2 !=0){
		// 	return "Male";
		// } 
		// else{ return "Female"; }     

		// approach 3 
		// 1--> female 
		// 0--> male

		// new appraoch: 
		if(solve(child) == 1){
			return "Male"; 
		}

		else{
			return "Female"; 
		}
		

	}

}


*/