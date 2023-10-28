/*
The Sieve of Eratosthenes is an algorithm used to find all prime numbers up to a given limit, typically represented by 'n'. It involves iteratively marking multiples of prime numbers as composite to identify the primes within the given range.

The time complexity of the Sieve of Eratosthenes is estimated as O(n*log(log(n))). It means that the time required by the algorithm grows roughly in proportion to 'n' multiplied by the logarithm of the logarithm of 'n'.

The logarithmic factor within the time complexity arises from the way composite numbers are identified and sieved out. As the algorithm progresses, it eliminates multiples of primes up to the square root of 'n'. The number of iterations required to sieve out composites is influenced by the logarithmic relationship between the input size 'n' and the number of primes up to 'n'.

In summary, the term "log(log(n))" in the time complexity of O(n*log(log(n))) for the Sieve of Eratosthenes represents the logarithmic relationship between the input size 'n' and the number of iterations required to sieve out composite numbers. It does not specifically refer to a separate algorithm within the Sieve of Eratosthenes itself.


*/


class Solution {

    // Time Limit Exceeded: 
    // private boolean isPrime(int x){
    //     if(x <= 1){
    //         return false; 
    //     }

    //     for(int i = 2; i < x; i ++){
    //             if(x%i == 0){
    //                 return false;  
    //             }
    //     }
    //     return true; 
    // }

    // public int countPrimes(int n) {
    //         int cnt = 0; 
    //         for(int i = 2; i < n; i ++){
    //             if(isPrime(i) == true){
    //                 cnt ++; 
    //             }
    //         }
    //     return cnt; 
    // }

    // optimized code: using sieve of eratothenes: 
    public int countPrimes(int n) {
        int cnt = 0; 
        boolean[] co = new boolean[n+1]; 
        for(int i = 0; i < co.length; i ++){
            co[i] = true; 
        }
        
        for(int i = 2; i*i < co.length; i ++){
            if(co[i] == true){
                for(int j = i*i; j < co.length; j += i){
                    co[j] = false; 
                }
            }
        }

        for(int i = 2; i < n; i ++){
            if(co[i] == true){
                cnt ++; 
            }
        }
        return cnt; 
    }
    }

