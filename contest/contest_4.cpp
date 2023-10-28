#include <bits/stdc++.h> 
int rakshaBandhan(vector < int > arr, int n) {
    // Write your code here.
    // ninja has n sister. 
    // each sister has one rakhi.  
    // rakhis are provided in array. 
    // ninja want the total sum of all rakhi strictly to be positive. 
    // tell him maximum rakhi's he can have on his hands. 
    // time complexity: O(N)
    long long  sum = 0; 
    long long  cnt = 0; 
    long long  ans = 0; 
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i = 0; i < n; i ++){
        sum += arr[i]; 
        if(sum > 0){
            cnt ++; 
        }
        else{
            sum = 0; 
            cnt = 0; 
        }
        ans = max(cnt,ans); 
    }
    return ans; 

}


// catch the fish:

#include <bits/stdc++.h> 

bool check( int mid,vector<bool> &fish,int k){
  int count=0;
  for(int i=0;i<mid;i++){
      count+=fish[i];
  }
  if(count>=k)return 1;
  int j=0;
  for(int i=mid;i<fish.size();i++){
         count-=fish[j];
         count+=fish[i];
         j++;
         if(count>=k)return 1;
  }
  return 0;
}


int minimumNet(int n, int k, vector<bool> fish)
{
    // Write your code here.
    // pond with n segments. 
    // each segment has most 1 fish. 
    // catch k fishes. 
    // size of net does not execceding the size of pond. 
    // catch all the fishes present in that segment. 
    // minimize the size of net you use. 
    // 1 -> fish is present. 
    // 0 -> fish is absent. 
    /*
        e.g,
        1]  8 3
            1 0 1 1 0 0 1 1
            [0,3] -> net size would be 3. 
            [2,6] -> net size would be 4. 
            [3,7] -> net size would be 4.

        2] 5 2 
           1 0 0 0 0 
           [1,4] -> not satisfied. 
           return -1. 
        3] 5 3 
           1 1 1 0 0 
           [0,2] -> returns 3. 

        4] 4 2 
           1 0 0 1 
           [0,3] -> returns 4. 

    */
    // approach 1: O(NlogN) 
     int low=1;
     int high=n;
     int ans=-1;
     while(low<=high){
         int mid=low+(high-low)/2;
         if (check(mid,fish,k)) {
           high = mid - 1;
           ans=mid;
         }
         else low=mid+1;
     }
    
    return ans;
}


#include <bits/stdc++.h> 
using namespace std;

int ninjaTechnique(int n, vector<vector<int>> &a) {
    // Write your code here. 
    // time complexity: O(N)
    if (n == 1) {
        return 1; 
    }
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        sort(a[i].begin(), a[i].end()); 
    }
    int second = -1e9; 

    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)
        v.push_back({a[i][1] , a[i][0]});
    
    sort(v.begin(),v.end()); 
    for(int i = 0; i < n; i ++)
    {
        if(v[i].second > second){
            ans ++; 
            second = v[i].first; 
        }
    }

    return ans; 
    
}
#include <bits/stdc++.h> 

int makeItEqual(int a, int b, int c) {

    int ans=0;

    while(a||b||c)

    {   // 010 
        // 011  
        // 101 

        int k=c&1; // 0

        int l=a&1; // 1

        int m=b&1; // 1 

        if((l&m)==k) // same bit astil tar. 

        {

           c= c>>1;

           a= a>>1;

           b= b>>1;

        }

        else if(k==0) // jar bit match hot nastil 

        {

            ans++;

            c=c>>1;

            a=a>>1;

            b=b>>1;

        }

        else{ // if one of the bit is not equal. 

            if(l!=k)

            {

                ans++;

            }

            if(m!=k)

            {

                ans++;

            }

            c=c>>1;

            a=a>>1;

            b=b>>1;

 

        }

    }

    return ans;

}
















