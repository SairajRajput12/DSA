#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long int arr[] ,long long int mid,int numberOfTrees,long long int NumberOfRequiredTrees){
    int ans = 0; 
    for (int i = 0; i < numberOfTrees; i++)
    {
        if(arr[i] > mid){
            int res = arr[i] - mid; 
            ans += res; 
        }
        
    }   

    return (ans >= NumberOfRequiredTrees)? true : false;  
}


int main() {
	
	// your code here
	int numberOfTrees; 
	long long NumberOfRequiredTrees; 
	cin >> numberOfTrees >> NumberOfRequiredTrees; 
    long long arr[numberOfTrees];   
    for (int i = 0; i < numberOfTrees; i++)
    {
            cin >> arr[i]; 
    }
    sort(arr,arr + numberOfTrees); 

    long long int low = 0, high = arr[numberOfTrees - 1]; 
    int ans = 0; 
    cout << "high :" << high << "low :" << low << endl; 
    while(high > low){
        long long int mid = low + (high - low)/2; 
        if(isPossible(arr,mid,numberOfTrees,NumberOfRequiredTrees)){
                ans =(int) mid; 
                low = mid + 1; 
        }

        else{
                high = mid - 1; 
        }
    }
    
    cout << ans << endl; 
	return 0;
}
