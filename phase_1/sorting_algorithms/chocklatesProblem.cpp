#include <bits/stdc++.h> 
using namespace std; 

void distributeChocolates(int n, int m, vector<int> &chocolates, int index, int &minDifference) {
    if(index + m > n){
        return; 
    }

    int curr = chocolates[index+m-1] - chocolates[index]; 
    minDifference = min(curr,minDifference); 
    distributeChocolates(n,m,chocolates,index+1,minDifference); 
}

int allSubSetDiff(int &minValue,int index,int n,int m,vector<int>& subSet,vector<int>& chocolates){
    if(index == n){
        if(subSet.size() == m){
            int diff; 
            if(m != 1){
                int maxElement = INT_MIN; 
                int minElement = INT_MAX; 
                for(auto x: subSet){
                    maxElement = max(x,maxElement); 
                    minElement = min(x,minElement); 
                }
                diff = maxElement - minElement; 
            }
            else{
                diff = subSet[0]; 
            }

            // diff is less than current value then update it. 
            if(diff < minValue){
                minValue = diff; 
            }
        }

        return minValue; 

    }

    int minFirst = allSubSetDiff(minValue, index + 1, n, m, subSet, chocolates);
    subSet.push_back(chocolates[index]); 
    minValue = min(minFirst,allSubSetDiff(minValue,index+1,n,m,subSet,chocolates)); 
    subSet.pop_back(); 
    return minValue; 

}

int findMinDiff(int n, int m, vector<int> chocolates) { 
    // approach 1: 

    // sort(chocolates.begin(), chocolates.end());
    // int minDifference = INT_MAX;

    // distributeChocolates(n, m, chocolates, 0, minDifference);

    // return minDifference;
    // approach 2: 
    int minValue = INT_MAX; 
    vector<int> subSet; 

    return allSubSetDiff(minValue,0,n,m,subSet,chocolates); 
}
