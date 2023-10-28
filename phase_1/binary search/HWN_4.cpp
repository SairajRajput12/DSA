#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(int arr[] , int size , int required_time , int mid)
{
	int counter = 0;  
	int time_counter = 0; 
	for(int i = 0; i < size; i ++) 
	{

		if(arr[i] >= mid)
		{
	       // if((time_counter + arr[i] - mid) <= required_time) 
	       // {
	             time_counter += (arr[i] - mid);
	       // }
    	}
	}

    cout << "time_counter"<<time_counter <<endl;     
        if(time_counter >= required_time) 
        {
            return true; 
        }
        
	return false; 

}
int myFun(int arr[] , int size, int required_time)
{
	int start = 0; 
	int end = *max_element(arr, arr + size);
	int mid = start + (end - start)/2; 
	int ans = 0; 
		while(start <= end) 
		{
		    cout << "Mid:"<<mid<<endl; 
			cout << "Ans :" <<ans<<endl;
				if(isPossibleSolution(arr,size,required_time,mid))
				{
					ans = mid; 
					start = mid + 1; 
				} 
				else
				{
					end = mid - 1;
				}
			mid = start + (end - start)/2;
		} 
	return ans; 
}

int main() {
	// your code goes here 
		int required_time;
		int size; 
		cin >> size >> required_time;  
		
		int arr[1000];
		for(int i = 0; i < size; i ++) 
		{
			cin >> arr[i];
		}

		cout<< myFun(arr,size,required_time); 
	
	return 0;
}