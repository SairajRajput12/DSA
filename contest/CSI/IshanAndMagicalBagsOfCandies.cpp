#include<bits/stdc++.h> 
using namespace std; 

int main(){

int t;
cin>>t;
while(t--){
    int n, k;
    cin>>n>>k;
    
    vector<int>a(n);
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        cin>>a[i];
        pq.push(a[i]);
    }
    
    int ans=0;
    while(k != 0){
        int top = pq.top();
        pq.pop();
        
        ans += top;
        pq.push(top/2);
        k--;
    }
    cout<<ans<<endl;
    

}

return 0;
}