//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str == "Character"){
            return sizeof(char); 
        }
        
        if(str == "Integer" || str == "Float" || str == "Boolean"){
            return sizeof(int); 
        }
        
        if(str == "Long" || str == "Double"){
            return sizeof(long); 
        }
        
        return -1; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends