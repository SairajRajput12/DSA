

#include<iostream> 
using namespace std; 

// we can create more than one namespace in particular file
namespace Student{
	int roll_no = 1001; 
	string name = "sairaj"; 
	
	int addNum(int a,int b)
	{
		return a+b; 
	}
}

namespace NinjaContest{

bool isPossibleSolution(int n,int arr[3][4], int B, int mid) 
{
  int tCount = 0; 
  for(int i = 0; i < n; i ++){
    for(int j =1; j<= arr[i][0]; j++)
    {
      if(arr[i][j] <= mid){
        tCount+=arr[i][j]; 
      }
      // 6 + 9 + 3 = 18 > 20 (in case of mid = 6 then shift right )
      // 6 + 9 + 13 = 28 < 20 (in case of mid = 10, shift to the left side)
      // 6 + 9 + 3 = 18 > 20--> in case of 8 shift right 
      // 6 + 9 + 3 = 18 ----> in case of 9 
    }
    cout << tCount<<endl; 
    if(tCount > B){
      return false;
    }
  }
  return true; 
}

int findMaxX(int n,int arr[3][4], int B)
{
    //Write your code here.
    int start = 0; 
    int end = 0; 
    int sum = 0; 
    for(int i = 0; i < n;i ++){
      sum = 0; 
      for (int j = 1; j <= arr[i][0]; j++) {
        cout<<"arr["<<i<<"][0]"<<endl;  
        cout<<"j :"<<j<<endl; 
        cout<<"arr[i][j] :"<<arr[i][j]<<endl;
        sum += arr[i][j];
      }
        end = max(end,sum); 
        cout << "sum"<<sum<<endl;
    }
    
    
    int mid = start+(end-start)/2, ans = -1;    
    while(start<=end) 
    {        
    cout << "Mid :" << mid << endl;    
      if(isPossibleSolution(n, arr, B, mid))
      {            
        ans = mid;            
        start = mid+1;
      } else {
        end = mid - 1;
      }
      mid = start + (end - start) / 2;
    }
    return ans;
}

}
