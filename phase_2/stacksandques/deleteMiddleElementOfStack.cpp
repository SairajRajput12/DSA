//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    void solve(stack<int> &s,int cnt,int size){
        // base case
        if(cnt == (size/2)){
            s.pop(); 
            return; 
        }
        int e = s.top(); 
        s.pop(); 
        solve(s,cnt+1,size); 
        s.push(e); 
    }
    
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        // using additional data structure. 
        /*
        if(s.empty() || s.size() == 1){ 
            // it is empty 
            return; 
        }
        
        int size = sizeOfStack/2; 
        int cnt = 0; 
        stack <int> sample; 
        while(cnt < size){
            int a = s.top(); 
            s.pop(); 
            cnt ++; 
        }
        
        // pop middle element: 
        s.pop(); 
        while(!sample.empty()){
            int x = sample.top(); 
            s.push(x); 
            sample.pop(); 
        }
        */
        
        // without using additional data structure
        int cnt = 0; 
        solve(s,cnt,sizeOfStack);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
