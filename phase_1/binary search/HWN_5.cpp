#include <bits/stdc++.h>  
#include <vector> 
using namespace std; 

int dishDone(int n) 
{
    int a = 0; 
        while(a*(a+1) <= n)
        {
            a++;
        }
    return a-1;     
} 

bool isPossibleSolution(vector<int> &v, int m,int mid) 
{
    int dishCount = 0;  
    // This loop gives the rank of each cheif and we can transverse through it. 
    for(int i = 0; i < v.size(); i ++) 
    { 
        /* 
            The time required: 
                2 * Given time / rank of that chef

        */ 
        dishCount += dishDone(2*mid/v[i]); 
            if(dishCount >= m) 
            {
                return true; 
            }
    } 
    return false; 
}


int minCookTime(vector<int> &rank, int m)
{
    // Write your code here 
    sort(rank.begin() , rank.end()); 
    int start = 0; 
    int end = ((m*(m+1)/2)*rank[0]); 
    int mid = start + (end - start)/2; 
    int min_time = 0;  
        while(start <= end ) 
        {
                if(isPossibleSolution(rank,m,mid))
                {
                    min_time = mid;  
                    end = mid - 1; 
                }

                else
                {
                    start = mid +1;
                } 
            mid = start + (end - start)/2; 
        } 
    return min_time;     
}


/* 

Another way
#include <bits/stdc++.h> 

bool isPossible(vector<int> &rank, int m, int mid)
{
    int count;
    int dish = 0;
    int time;
    
    for(int i = 0; i<rank.size(); i++)
    {
        time = 0;
        count = 1;
        while(true)
        {
            if( (time + (count * rank[i]) ) <= mid)
            {          
                time += count * rank[i];
                dish++;
                count++;
                if(dish == m)
                    return true;
            }
            else
                break;
        }
    }
    
    return false;
    
}

int minCookTime(vector<int> &rank, int m)
{
    int s = 0;
    int maxi = -1;

    for(int i = 0; i<rank.size(); i++)
        maxi = max(maxi, rank[i] );
    
    int e = maxi * m * (m+1)/2;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e)
    {
        if(isPossible(rank, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e-s)/2;
    }
    return ans;
}

*/ 


