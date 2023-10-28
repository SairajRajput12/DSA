// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 100001 
// vector<int>* sieve(){
//   bool isPrime[100001]; 
//   for (int i = 0; i < MAX ; i++)
//   {
//     /* code */
//     isPrime[i] = true; 
//   }

//   for (int i = 2; i*i < MAX; i++)
//   {
//     /* code */
//     if(isPrime[i]){
//       for (int j = 0; j < MAX; j++)
//       {
//             isPrime[j] = false;
//       }      
//     }
//   }
//    vector<int>* primes = new vector<int>(); 
//    primes->push_back(2); 
//    for (int i = 3; i < MAX; i++)
//    {
//         if(isPrime[i]){
//           primes-> push_back(i); 
//         }
//    }

//    return primes;  
   
// }

// void printPrimes(long long l,long long r,vector<int>* &primes){
//   bool isPrime[r-l+1]; 
//   for (int i = 0; i <= (r-l); i++)
//   {
//       isPrime[i] = true; 
//   }

//   for (int i = 0; primes -> at(i)*(long long)primes -> at(i) <= r; i++)
//   {
//       // (n/i)*i. 
//       int currPrime = primes -> at(i); 
//       // just smaller or equal value to 1. 
//       long long base = (l/(currPrime));
//       if(base < l){
//         base = base + currPrime; 
//       }
//       // Mark all multiples within L to R as false. 

//       for(long long j = base; j <= r; j += currPrime){
//         isPrime[j-l] = false; 
//       }

//       // There may be a case where base is prime number. 
//       if(base == currPrime){
//           isPrime[base - l] = true; 
//       }
//   }

//   for (int i = 0; i <= (r - l); i++)
//   {
//         cout << i + l << endl; 
//   }
  
// }

// int main(){
//      // enter the project name
//     cout << "This is Homework from Love babber's Math Library " << endl; 
//     cout << "Fuck It !" << endl;
//     // test cases------------> 10.
//     // print all prime in range  LR(it can be as large as 10^12). 
//     // cout << "I Am Batman" << endl;
//     vector<int>* primes = sieve(); 
//     int t; 
//     cin >> t;
//     while(t --){
//       long long l,r; 
//       cin >> l >> r; 
//       printPrimes(l,r,primes); 

//     }
   
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> sieveOfEratosthenes(int N){
//   vector <bool> arr(N+1); 
//   for (int i = 0; i < arr.size(); i++)
//   {
//       if(arr[i] == false){
//           for (int j = i*2; j <= N; j += i)
//           {
//               arr[j] = true; 
//           }
          
//       }
//   }

//   vector<int> ans; 
//   for (int i = 0; i < (N+1); i++)
//   {
//       if(arr[i] == false){
//         ans.push_back(ans[i]); 
//       }
//   }

//   return ans; 
// }

// void segmentOfSieveAlgo(int a,int b){
//       string s = ""; 
//       int rootb = (int)sqrt(b); 
//       vector<bool> arr(b-a+1); 
//       vector<int> prime = sieveOfEratosthenes(rootb);
//       for (int i = 0; i < prime.size(); i++)
//       {
//         /* code */
//         int multiple = (int)(ceil)(a*1.0)/prime[i];
//         if(multiple == 1) multiple ++; 
//         // ceil(x) : Returns the smallest integer that is greater than or equal to x (i.e : rounds up the nearest integer). 
//         int fi = multiple*prime[i] - a; 
//         while(fi < arr.size()){
//           arr[fi] = true; 
//           fi += prime[i]; 
//         }
//       }      

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] == false && (a+i) > 1){
//            s += to_string(a+i) + "\n"; 
//         }
//     }

//     s+= "\n"; 
//     cout << s << endl;
    

// }

// int main(){
//      // enter the project name
//      cout << "This is Homework from Love babber's Math Library " << endl;
//      segmentOfSieveAlgo(22,51); 
//   return 0;
// }

// C++ program to print all primes smaller than
// n using segmented sieve
#include <bits/stdc++.h>
using namespace std;

// This functions finds all primes smaller than 'limit'
// using simple sieve of eratosthenes. It also stores
// found primes in vector prime[]
void simpleSieve(int limit, vector<int> &prime)
{
	// Create a boolean array "mark[0..n-1]" and initialize
	// all entries of it as true. A value in mark[p] will
	// finally be false if 'p' is Not a prime, else true.
	vector<bool> mark(limit + 1, true);

	for (int p=2; p*p<limit; p++)
	{
		// If p is not changed, then it is a prime
		if (mark[p] == true)
		{
			// Update all multiples of p
			for (int i=p*p; i<limit; i+=p)
				mark[i] = false;
		}
	}

	// Print all prime numbers and store them in prime
	for (int p=2; p<limit; p++)
	{
		if (mark[p] == true)
		{
			prime.push_back(p);
			cout << p << " ";
		}
	}
}

// Prints all prime numbers smaller than 'n'
void segmentedSieve(int n)
{
	// Compute all primes smaller than or equal
	// to square root of n using simple sieve
	int limit = floor(sqrt(n))+1;
	vector<int> prime;
	prime.reserve(limit);
	simpleSieve(limit, prime);

	// Divide the range [0..n-1] in different segments
	// We have chosen segment size as sqrt(n).
	int low = limit;
	int high = 2*limit;

	// While all segments of range [0..n-1] are not processed,
	// process one segment at a time
	while (low < n)
	{
		if (high >= n)
		high = n;
		
		// To mark primes in current range. A value in mark[i]
		// will finally be false if 'i-low' is Not a prime,
		// else true.
		bool mark[limit+1];
		memset(mark, true, sizeof(mark));

		// Use the found primes by simpleSieve() to find
		// primes in current range
		for (int i = 0; i < prime.size(); i++)
		{
			// Find the minimum number in [low..high] that is
			// a multiple of prime[i] (divisible by prime[i])
			// For example, if low is 31 and prime[i] is 3,
			// we start with 33.
			int loLim = floor(low/prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			/* Mark multiples of prime[i] in [low..high]:
				We are marking j - low for j, i.e. each number
				in range [low, high] is mapped to [0, high-low]
				so if range is [50, 100] marking 50 corresponds
				to marking 0, marking 51 corresponds to 1 and
				so on. In this way we need to allocate space only
				for range */
			for (int j=loLim; j<high; j+=prime[i])
				mark[j-low] = false;
		}

		// Numbers which are not marked as false are prime
		for (int i = low; i<high; i++)
			if (mark[i - low] == true)
				cout << i << " ";

		// Update low and high for next segment
		low = low + limit;
		high = high + limit;
	}
}

// Driver program to test above function
int main()
{
	int n = 100;
	cout << "Primes smaller than " << n << ":\n";
	segmentedSieve(n);
	return 0;
}
