/*
A-2​: ​Variation of Fibonacci
The Fibonacci sequence is constructed by adding the last two numbers of the sequence so far to get the
next number in the sequence. The first and the second numbers of the sequence are defined as 0 and 1.
We get:
0, 1, 1, 2, 3, 5, 8, 13, 21...
Write a function which takes input as a number:
●If the given number is a Fibonacci number, print the number
●If the given number is NOT Fibonacci number, print the sum of all even Fibonacci numbers less than the given number.

int getFibOutput(int input) {
      // TODO:
}

Example(21 is a Fibonacci number)Input: 21 Output: 21(20 is NOT a Fibonacci number so, output is 10 (2+8))Input: 20 Output: 10 
=======================================
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
    int first = 0, second = 1; 
    int third = first + second; 

    int n; 
    cin >> n;
    bool isFibo = true;  
    int sum = 0; 
    while(third <= n){
        if(third%2 == 0 and third >= 2){
            sum += third; 
        }

        third = first + second;
        if(third > n){
            isFibo = false; 
            break; 
        }
        
        if(third == n){
            isFibo = true; 
            break; 
        }
        second = first;  
        first = third; 
        // cout << first << " " << second << " " << third  <<" " <<  sum << endl; 
    }

    if(!isFibo){
        cout << sum << endl; 
    }
    else{
        cout << n << endl; 
    }

  return 0;
}