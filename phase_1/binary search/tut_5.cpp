#include<bits/stdc++.h> 
#include<vector>
using namespace std; 

bool isPossible(vector <int> &stalls,int k,int mid){
    int count_cow = 1; 
    int lastPos  = stalls[0]; 
        for(int i = 0; i < stalls.size(); i ++)
        {
            if(stalls[i]-lastPos >= mid){ 
                count_cow++; 
                    if(count_cow == k){
                        return true; 
                    }
                lastPos = stalls[i]; 
            }
        }
    return false;     
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size(); 
    int start = 0; 
    sort(stalls.begin() , stalls.end()); 
    int end = stalls[n-1]; 
    int mid = start + (end - start)/2; 
    int ans = -1; 


        while(start <= end){
                if(isPossible(stalls,k,mid)){
                    ans = mid; 
                    start = mid + 1;
                } 

                else{
                     end = mid - 1; 

                } 
            mid = start + (end - start)/2; 
        }

    return ans;     

}

int main(){ 
    cout<<"This is tutorial number 19: Agresive cows :"<<endl; 
    vector<int> stalls{1,2,3}; 
    int cow = 2; 
    int n = 3; 
    cout<<"The answer is :"<<aggressiveCows(stalls,cow)<<endl; 
    return 0; 
}