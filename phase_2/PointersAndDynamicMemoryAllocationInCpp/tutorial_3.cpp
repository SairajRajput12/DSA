#include<bits/stdc++.h>
using namespace std;

void print(int *p){
      cout << *p << endl;
}

void update(int *p){
    // p = p + 1; 
    // cout << "Inside :" << p << endl; 
    *p = *p + 1;  
}

int getSum(int arr[],int n){ 
  cout << "size :" << sizeof(arr) << endl; // 8
  int sum = 0; 
  for (int i = 0; i < 5; i++)
  {
      sum += arr[i]; 
  }

  return sum; 
  
}


int main(){
     // enter the project name 
     cout << "Char Arrays :" << endl; 
    //  char ch[7] = "sairaj";
    //  int arr[10] = {1,2,3,4,5}; 
    //  cout << arr << endl;  // address.
    //  cout << ch << endl; // sairaj 
    //  // implementation is different in both cases. 
    //  char *c = &ch[0]; 
    //  cout << c << endl;  // sairaj
    //  cout << *c << endl; // prints first character. 
     
    //  char temp = 'z'; 
    //  char *p = &temp; 
    //  cout << p << endl;
    // //  char *k = "abcd"; 
    // //  cout << k << endl;
    //  int value = 5;
    //  int *j = &value; 
    // //  print(j);  
    // cout << "Before :" << *j << endl;
    // update(j); 
    // cout << "After :" << *j << endl; 

    // int arr1[6] = {1,2,3,4,5,6}; 
    // cout << "Sum is :" <<  getSum(arr1 + 3,6) << endl;
    // // pointer's se kisi char array ko point na kare. 
    

    // Pointer functions: 
    int value = 5; 
    int *p = &value; 
    // print(p);
    cout << "Before : " << *p << endl;  
    update(p); 
    cout << "After : " << *p << endl;

    int arr[5] = {1,2,3,4,5}; 
    cout << "Sum is :" << getSum(arr,5) << endl;

    // Benifit: 
    /*
      1] part of array send / pass kar skte ho. 
      2] 0  1 2 3 4 5 
      3] update(arr) -----------> it updates the value of an array. 
    */
  return 0;
}