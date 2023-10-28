// #include <bits/stdc++.h>
// using namespace std;

// bool valid(int mid, int rank[], int P, int n)
// {
// 	int cp = 0, count = 0, tt = 0;
// 	int val = 1;
// 	for (int i = 0; i < n; i++)
// 	{
// 		tt = rank[i];
// 		count = 0;
// 		val = 1; 

// 		while (tt <= mid)
// 		{
// 			count++;
// 			val++;
// 			tt += val * rank[i];
// 		}
// 		cp += count; 
// 		if (cp >= P)
// 		{
// 			return true;
// 		}
// 	}
// 	return false;
// }

// int main()
// {
// 	// enter the project name
// 	/*

// 		  The range on which we will apply the binary search. That is the value of low and high.
// 	  How we will decide in which direction we will find our answer?
// 	  The validation criteria. If we’re at mid then how we will know if is this our answer or do we’ve to search further?

// 	*/

// 	// suppose the chef has the rank of the 'P' and he will make the p patras in 1 min.
// 	// order of the min to min would be 1 min.
// 	// maximum will be: p*(p+1)/2.
// 	int testCases;
// 	cin >> testCases; // representing the rank.
// 	while (testCases --)
// 	{
// 		int arr[1000];
// 		int P, n;
// 		cin >> P >> n;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> arr[i];
// 		}

// 		int low = 1, high = INT_MIN;
// 		for (int i = 0; i < n; i++)
// 		{
// 			/* code */
// 			high = max(high, arr[i] * (P * (P + 1) / 2));
// 		}

// 		// cout <<"high :" << high << endl; 
// 		int ans = 0;

// 		while (low <= high)
// 		{
// 			int mid = low + (high - low)/2; 
// 			if(valid(mid,arr,P,n)){
// 				ans = mid; 
// 				high = mid - 1;
// 			}
// 			else{
// 				low = mid + 1; 
// 			}

// 		}
// 		cout << ans << endl;
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

bool valid(long long mid,long long numberOfCooks,long long numberOfPatras,long long rank[]){
	long long numberOfPatrasMade = 0, val = 1, count = 0, timeTaken = 0; 
	for (int i = 0; i < numberOfCooks; i++)
	{
		timeTaken = rank[i]; 
		val = 1; 
		count = 0; 
			while(timeTaken <= mid){
					val ++; 
					count ++;
					timeTaken += rank[i]*val; 
			}
		numberOfPatrasMade += count; 
		if(numberOfPatrasMade >= numberOfPatras) return true; 
	}
	return false; 
}

int main(){
	 // enter the project name
	long long numberOfPatras, numberOfCooks; 
	 int test_cases; 
	 cin >> test_cases; 
	 while(test_cases --){
		long long rank[100]; 
		cin >> numberOfPatras >> numberOfCooks;  
				for (int i = 0; i < numberOfCooks; i++)
				{
					cin >> rank[i]; 
				}

		long long low  = 1, high = INT_MIN; 
		for (int i = 0; i < numberOfCooks; i++)
		{
			high = max(high,rank[i]*(numberOfPatras*(numberOfPatras+1)/2)); 
		}

		// cout << high << endl;
		long long ans = 0; 
				while(low <= high){ 
						long long mid = low + (high - low)/2; 
						if(valid(mid,numberOfCooks,numberOfPatras,rank)){
								ans = mid; 
								// cout << "ans :" << ans << endl;
								high = mid - 1;
						}

						else{
								low = mid + 1;
						}
				}
			cout << ans << endl; 				
	 }
  return 0;
}