#include<iostream> 
using namespace std; 


namespace LeetCodeEasy{


//  problem 1: getting square root using binary search 


int mySqrt(int x){

    // using binary search methood
        if(a == 0){
            return 0; 
        }
        if(a == 1){
            return 1;
        }
        int start = 0; 
        int end = a; 
        int mid = start + (end - start)/2; 
            while(start <= end)
            {
                if(mid <= (a/mid) && (mid + 1) > a/(mid + 1)){
                        return mid; 
                }

            
            
                else if(mid > (a/mid)){
                       end = mid - 1;
                }
            
                else{
                       start = mid + 1; 
               }
                mid = start + (end - start)/2; 
            }
    return mid; 

    // using brute force methood

    // if (x == 0) return 0;
	// for (int i = 1; i <= x / i; i++) 		
	// 	if (i <= x / i && (i + 1) > x / (i + 1))// Look for the critical point: i*i <= x && (i+1)(i+1) > x
	// 		return i;		
	// return -1;

    // using newton's methood

    //     if (x == 0) return 0;
	// long i = x;
	// while(i > x / i)  
	// 	i = (i + x / i) / 2;	    	
	// return (int)i;
    
}


float accurate_ans(int expected_value,int n, int figures)
{
    float k = 1; 
    float test = expected_value;
    cout <<"Test :" << test <<endl; 
        for(int i = 0; i < figures; i ++)
        {
            k = k / 10; 
            // cout <<"k :"<<k<<endl;
                while(true)
                {
                    cout <<"test :" << test <<endl; 
                    
                        if(((test+k)*(test+k)) > n){
                            break; 
                        }
                    test += k;
                    // continue; 
                }
        }
    return test;     
}


int missingNumber(vector<int>& nums) {

        // Approach 1: 

        // sort(nums.begin(),nums.end()); 
        // int n = nums[(nums.size() - 1)]; 
        // // printVector(nums);  
        // // cout << endl; 
        
        // for (int i = 0; i < nums.size(); i++) {
        //     if(nums[i] != i){
        //         return i; 
        //     }
        // }
        // return n+1; 


        // Approach 2: using XOR Operation: 

        // int res = nums.size(); 
        //     for (int i = 0; i < nums.size(); i++) {
        //         res = i ^ res ^ nums[i]; 
        //         // cout << "res :" << res << endl; 
        //     }
        // // cout << res <<endl; 
        // return res; 

        // Approach 3: Using Binary Search: 
        
        int start = 0; 
        int end = nums.size(); 
        int mid = start + (end - start)/2;  
        sort(nums.begin(),nums.end()); 
        
            while(start < end){
                if(nums[mid] > mid){
                    end = mid; 
                }

                else{
                    start = mid + 1; 
                }

                
                    mid = start + (end - start)/2;  
            }
        return start; 
    }
    
// problem 3:     

}



namespace LeetCodeHard{


}



namespace LeetCodeMedium{


}
