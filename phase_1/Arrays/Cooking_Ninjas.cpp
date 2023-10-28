
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

Another way:
bool isPossibleSolution(vector <int> &v, int m,int mid)
{
    int dish_count = 0; 
    int time_taken = 0; 
    int counter = 0; 
        for (int i = 0; i < v.size(); i++) {
            counter = 1; 
            time_taken = 0; 
                while(true) 
                {
                    if((time_taken + v[i]*counter) <= mid)
                    {
                        time_taken += v[i]*counter; 
                        dish_count ++; 
                        counter ++; 
                            if(dish_count == m)
                            {
                                return true; 
                            }
                        cout<<"Counter :" <<counter <<"time_taken :"<<time_taken<<endl;     
                    } 
                    
                    else{
                        break; 
                    }
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
    int mid = (start + end)/2; 
    int min_time = 0;  
        while(start <= end ) 
        {
            cout << "Mid :" << mid<<endl; 
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

 */


int main() 
{
    vector <int> arr {1,2,3,4}; 
    cout << minCookTime(arr,11)<<endl;
}