//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
bool knows(vector<vector<int> >& M, int a, int b, int n) {
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }    
    
    public:
    // //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
    //     // code here 
    //     // approach 1: brute force 
    //     // bool isItCelebrity = true; 
    //     // for(int i = 0; i < M.size(); i ++){
    //     //     int person = i; 
    //     //     isItCelebrity = true; 
    //     //     // check the row 
    //     //     for(int j = 0; j < M.size(); j ++){
    //     //         if(person != j){
    //     //             if(M[j][person] == 0){
    //     //                 isItCelebrity = false; 
    //     //             }
    //     //         }   
    //     //     }
            
    //     //     // check the column 
    //     //     for(int j = 0; j < M[0].size(); j ++){
    //     //             if(M[person][j] == 1){
    //     //                 isItCelebrity = false; 
    //     //             }
    //     //     }
    //     //     if(isItCelebrity == true){
    //     //         return person; 
    //     //     }
    //     // }
        
        
    //     // return -1;
        
        
    //     // approach 2: 
    //     // algo: 
    //     // 1] put all elements inside the stack 
    //     // 2] jab tak stack ka size not equal to one tab tak do element nikalo 
    //     //      A -> s.top() -> s.pop() 
    //     //      B -> s.top() -> s.pop()
    //     // 4] if a know B then discard A and push B 
    //     //    if B know A then discard B and push A 
    //     // 5] jo single element bacha hai wo ek potential candidate hai. 
    //     //    verify it. -> celebrity knows noone. 
    //     //               -> everyone knows celebrity.all 1's except diagonal element. 
    stack<int> s;
        //step1: push all element in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }   
        
        //step2: get 2 elements and copare them
        
        while(s.size() > 1) {
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        //step3: single element in stack is potential celeb
        //so verify it
        
        int zeroCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[ans][i] == 0)
                zeroCount++;
        }
        
        //all zeroes
        if(zeroCount != n)
            return -1;
        
        //column check
        int oneCount = 0;
        
        for(int i=0; i<n; i++) {
            if(M[i][ans] == 1)
                oneCount++;
        }
        
        if(oneCount != n-1)
            return -1;
        
        return ans;
    }
    

    
    
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
