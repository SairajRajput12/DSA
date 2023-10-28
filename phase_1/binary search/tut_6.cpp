#include<bits/stdc++.h> 
#include<vector>
using namespace std; 
bool isPossibleSolution(vector<int> &boards, int k,int mid){
    int painter_count = 1; 
    int painted_area = 0; 
        for(int x : boards){
            if(painted_area + x <= mid){
                painted_area +=x; 
            } 

            else{
                painter_count ++; 
                    if(painter_count > k || x > mid){
                        return false; 
                    }
                painted_area = x; 
            }
        }
    return true;     
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start = 0; 
    int sum = 0; 
    int ans = -1;
        for(int x : boards){
            sum += x; 
        }
    int end = sum; 
    int mid = start + (end - start)/2; 
        while(start <= end){
                if(isPossibleSolution(boards,k,mid)){
                    ans = mid; 
                    end = mid - 1; 
                }

                else{
                    start = mid + 1; 
                }
            
            mid = start + (end - start)/2;     
        }
    return ans; 
}