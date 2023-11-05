//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        // approach 1: brute force 
        bool isItCelebrity = true; 
        for(int i = 0; i < M.size(); i ++){
            int person = i; 
            isItCelebrity = true; 
            // check the row 
            for(int j = 0; j < M.size(); j ++){
                if(person != j){
                    if(M[j][person] == 0){
                        isItCelebrity = false; 
                    }
                }   
            }
            
            // check the column 
            for(int j = 0; j < M[0].size(); j ++){
                    if(M[person][j] == 1){
                        isItCelebrity = false; 
                    }
            }
            if(isItCelebrity == true){
                return person; 
            }
        }
        
        
        return -1; 
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
