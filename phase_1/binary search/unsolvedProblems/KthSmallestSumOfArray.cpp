#include<bits/stdc++.h>
using namespace std;

static auto speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int chk(vector<vector<int>>& mat, int n, int m, int mid, int i, int sm, int k){
        if (sm>mid) return 0;
        int x=0, y=0;
        if (i==n) {
            if (sm<=mid) return 1;
            return 0;
        }
        for (int j=0; j<m; ++j){
            if (sm+mat[i][j]>mid) break;
            y=chk(mat, n, m, mid, i+1, sm+mat[i][j], k);
            if (y==0) return x;
            x+=y;
            if (x>k) return x;
        }
        return x;
        
    }
    
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size(), m=mat[0].size();
        if (n==1) return mat[0][k-1];
        if (m==1 || k==1){
            int res=0;
            for (int i=0; i<n; ++i) res+=mat[0][i];
            return res;
        }
        int i=0, j=m*5000+1, mid, kc;
        while (i<j){
            mid=i+(j-i)/2;
            kc=chk(mat, n, m, mid, 0, 0, k);
            if (kc<k) i=mid+1;
            else j=mid;
        }
        return i;
    }
};


int main(){
     // enter the project name
  return 0;
}