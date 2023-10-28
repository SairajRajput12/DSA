// #include <bits/stdc++.h>
// using namespace std;

// bool isPossible(int arr[] , int mid,int numberOfTrees,int NumberOfRequiredTrees){
//     int ans = 0; 
//     for (int i = 0; i < numberOfTrees; i++)
//     {
//         if(arr[i] > mid){
//             int res = arr[i] - mid; 
//             ans += res; 
//         }
        
//     }   

//     return (ans >= NumberOfRequiredTrees)? true : false;  
// }


// int main() {
	
// 	// your code here
// 	int numberOfTrees,NumberOfRequiredTrees; 
// 	cin >> numberOfTrees >> NumberOfRequiredTrees; 
//     int arr[numberOfTrees];   
//     for (int i = 0; i < numberOfTrees; i++)
//     {
//             cin >> arr[i]; 
//     }
//     sort(arr,arr + numberOfTrees); 

//     int low = 0, high = arr[numberOfTrees - 1]; 
//     int ans = 0; 
//     cout << "high :" << high << "low :" << low << endl; 
//     while(low < high){
//         int mid = low + (high - low)/2; 
//         if(isPossible(arr,mid,numberOfTrees,NumberOfRequiredTrees)){
//                 ans = mid; 
//                 low = mid + 1; 
//         }

//         else{
//                 high = mid - 1; 
//         }
//     }

//     cout << ans << endl; 
// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10; 
int n; 
long long m; 
long long trees[N]; 

bool isWoodSufficient(int h){
	long long wood = 0; 
	for(int i = 0; i < n; ++i){
		if(trees[i] >= h){
			wood += (trees[i] - h); 
		}
	}
	
	return wood >= m; 
}

int main() {
	cin >> n >> m; 
	for(int i = 0; i < n; i ++){
		cin >> trees[i]; 
	}
	
	long long lo = 0, hi = 1e9,mid;  
	// T T T T T F F F F F
	int ans = 0; 
	while(hi - lo > 1){
		mid = (hi + lo)/2; 
		if(isWoodSufficient(mid)){
			 ans = mid; 
			 lo = mid; 
		}
		
		else{
			 hi = mid - 1; 
		}
	}
	
	if(isWoodSufficient(hi)){
		cout << hi << endl; 
	}
	else{
		cout << lo << endl; 
	}
	
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool isPossible(long long int arr[] ,long long int mid,int numberOfTrees,long long int NumberOfRequiredTrees){
//     int ans = 0; 
//     for (int i = 0; i < numberOfTrees; i++)
//     {
//         if(arr[i] > mid){
//             int res = arr[i] - mid; 
//             ans += res; 
//         }
        
//     }   

//     return (ans >= NumberOfRequiredTrees)? true : false;  
// }


// int main() {
	
// 	// your code here
// 	int numberOfTrees; 
// 	long long NumberOfRequiredTrees; 
// 	cin >> numberOfTrees >> NumberOfRequiredTrees; 
//     long long arr[numberOfTrees];   
//     for (int i = 0; i < numberOfTrees; i++)
//     {
//             cin >> arr[i]; 
//     }
//     sort(arr,arr + numberOfTrees); 

//     long long int low = 0, high = arr[numberOfTrees - 1]; 
//     int ans = 0; 
//     cout << "high :" << high << "low :" << low << endl; 
//     while(high > low){
//         long long int mid = low + (high - low)/2; 
//         if(isPossible(arr,mid,numberOfTrees,NumberOfRequiredTrees)){
//                 ans =(int) mid; 
//                 low = mid + 1; 
//         }

//         else{
//                 high = mid - 1; 
//         }
//     }
    
//     cout << ans << endl; 
// 	return 0;
// }
