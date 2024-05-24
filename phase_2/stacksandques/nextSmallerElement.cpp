#include<bits/stdc++.h> 
using namespace std; 

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // approach 1: not optimal
    // Write your code here.
    // min nikalo and place it as -1 
    // vector<int> ans; 
    // for(int i = 0; i < arr.size(); i ++){
    //     if(i < arr.size()-1){
    //         if(arr[i] > arr[i+1]){
    //             ans.push_back(arr[i+1]); 
    //         }
    //         else if(arr[i] < arr[i+1])
    //         {
    //             ans.push_back(-1); 
    //         }
    //         else{
    //             ans.push_back(1); 
    //         }
    //     }
    //     else{
    //         ans.push_back(-1); 
    //     }
    // }

    // return ans;


    // approach 2: using stack 
    stack<int> def; 
    def.push(-1); 
    vector<int> ans(n); 
    for(int i = (n-1); i >= 0; i --){
        int curr = arr[i]; 
        while(curr <= def.top()){
            def.pop(); 
        }

        ans[i] = def.top(); 
        def.push(curr); 
    }
    return ans; 
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
