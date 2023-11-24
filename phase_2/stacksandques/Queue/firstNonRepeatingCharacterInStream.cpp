//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    // approach 1: using maps 
		  //  int j = 0; 
		  //  int ans = -1; 
		  //  bool firstFount = false; 
    //         for(int i = 0; i < s.size(); i ++){ 
    //             if(s[i] == '0'){
    //                 continue; 
    //             }
    //             for(j = (i+1); j < s.size(); j ++){
    //                 if(s[i] == s[j]){ 
    //                     if(firstFount == false){
    //                         s[j] = '#'; 
    //                     }
    //                     else{
    //                         s[j] = s[i]; 
    //                     }
    //                 }
    //             }
    //         }
    //         return s; 
    
            // approach 2: using map and queue 
    //         map<char, int> m;
		  //  string ans = "";
		  //  queue<char> q;
		    
		  //  for(int i=0; i<A.length(); i++) {
		  //      char ch = A[i];
		        
		  //      q.push(ch);
		  //      m[ch]++;
		        
		  //      while(!q.empty()) {
		  //          if(m[q.front()] > 1){
		  //              q.pop();
		  //          }
		  //          else
		  //          {
		  //              ans.push_back(q.front());
		  //              break;
		  //          }
		  //      }
		  //      if(q.empty()){
		  //          ans.push_back('#');
		  //      }
		  //  }
		  //  return ans;
		  
		  // approach 3: using queue 
		  

            
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
