#include<bits/stdc++.h>
using namespace std;

int main(){
     // enter the project name 

     // first approach: 

      // int size = 0; 
      // int k = 3;// order of genration 
      // int c = 4;// order of child 

      // for(int i = 0; i <= k; i ++){
      //     size += pow(2,i); 
      // }
      // int *arr = new int[size]; 

      // for(int i = 0; i < size; i ++){
      //     arr[i] = 0; 
      // }

      // for(int i = 0; i < size; i ++){
      //     if(arr[i] == 0 && (2*i + 1) < size && (2*i+2) < size){ // male hua to
      //       arr[2*i+1] = 0; 
      //       arr[2*i+2] = 1; 
      //     }
          
      //     if(arr[i] == 1 && (2*i + 1) < size && (2*i+2) < size){ // female hua to
      //       arr[2*i+1] = 1; 
      //       arr[2*i+2] = 0; 
      //     }
      // }

      // for(int i = 0; i < size; i ++){
      //     cout << arr[i] << " "; 
      // }
      // int ans = 0; 
      // cout << endl; 
      // if(k <= 2){
      //   ans = c; 
      // }

      // else{
      //    ans = (1 << (k - 2)) + c - 2;
      // }
      // if(arr[ans] == 0){
      //   cout << "he is male" << endl; 
      // }
      // else{
      //   cout << "she is female"<< endl; 
      // }

      // delete arr; 
      // cout << "hello sab changa si" << endl; 



      // appraoch described in video. 
      


  return 0;
}