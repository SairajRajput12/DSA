#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n; 
        cin >> n; 

        int prev = 0; 
        int prev1 = 1; 
        int curr = prev + prev1; 

        for(int i = 2; i <= n; i ++){
                prev1 = prev;  
                prev = curr;
                curr = prev + prev1; 
        }

        cout << curr << endl; 
}