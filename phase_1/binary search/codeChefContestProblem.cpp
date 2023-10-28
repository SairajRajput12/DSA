#include <bits/stdc++.h>
using namespace std;


bool isPossible(int sum,int mid,int pages[],int numberOfBooks){
        int alice = 0; 
        for (int i = 0; i < numberOfBooks; i++) {
            alice += mid - pages[i]; 
            int bob = sum - alice; 
            if(bob%2 == 0 && alice %2 == 0){
                    return true; 
            }
            
            else if(bob%2 != 0 && alice%2 != 0){
                    return true; 
            }
        }
        
        return false; 
}

int main() {
	// your code goes here
	int test_cases; 
	cin >> test_cases; 
	while(test_cases --){
	    // chef has N books such that ith book has Ai pages 
	    // binary search: 
	    // he wants to distribute the books between both bob and alice: 
	    // 1] Both alice and Bob get at least one book 
	    // 2] The number of the pages alloted to alice and bob is either both odd or both even 
	    // Find such distribution exists. 
	    int numberOfBooks; 
	    cin >> numberOfBooks; 
	    int pages[numberOfBooks]; 
	            for (int i = 0; i < numberOfBooks; i++) {
	                cin >> pages[i]; 
	            }
	    
	    int sum = 0; 
	            for (int i = 0; i < numberOfBooks; i++) {
	                sum+= pages[i]; 
	            }
	    sort(pages,pages+numberOfBooks); 
	    int left = 0; 
	    int right = sum; 
	    int ans = -1; 
	    while(left < right){
	            int mid = left + (right - left)/2; 
	            if(isPossible(sum,mid,pages,numberOfBooks)){
	                        ans = mid; 
	                        left = mid + 1; 
	            }
	             else{
	                        right = mid - 1;
	            }
	    }
	    
	    if(ans == -1){
	        cout << "NO" << endl; 
	    }
	    
	    else{
	        cout << "YES" << endl; 
	    }
	}
	return 0;
}

