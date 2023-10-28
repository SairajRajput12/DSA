#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
     cout << "Pointer's practise question " << endl;  
    //  question 1:
    //  int first = 0; 
    //  int second = 10; 
    //  int *ptr = &second; 
    //  *ptr = 9; 
    //  cout << first << " " << second << endl; // 0 9

    // question 2: 
    // int first = 0; 
    // int *p = &first; 
    // int *q = p; 
    // (*q) ++; 
    // cout << first << endl; // 1 
    // 

    // question 3: 
    // int first = 0; 
    // int *p = &first; 
    // cout << (*p) ++<< endl; 
    // // cout << first << endl; // 0 1
    
    // question 4: 
//     int *p = 0; 
//     int first = 110; 
//     *p = first; // galti 
//     cout << *p << endl;// error 

    // question 5: 
    // int first = 0; 
    // int second = 11; 
    // int *third = &second; 
    // first = *third; // 11 
    // *third = *third + 2; 
    // cout << first << " " << second << endl; // 11   13 
    

    // question 6: 
    // float f = 12.5; 
    // float p = 21.5; 
    // float *ptr = &f; 
    // (*ptr) ++; 
    // cout << *ptr << " " << f << " " << p << endl; 

    // question 7: 
    // int arr[5]; 
    // int *ptr; 
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl; //20 8 

    // question 8: 
    // int arr[] = {11,21,13,14}; 
    // cout << *(arr) <<" " << *(arr + 1) << endl; // 11   21

    // question 9: 
    // int arr[6] = {11,12,31}; 
    // cout << arr << " " <<  &arr << endl; 

    // int arr[6] = {11,21,31}; 
    // cout << (arr + 1) << endl; 

    // int arr[] = {11,21,31,41}; 
    // int *ptr = arr++;// error--------> array ko update nahi kar skta  
    // cout << *ptr << endl;

    // char ch = 'a'; 
    // char *ptr = &ch; 
    // ch ++; 
    // cout << *ptr << endl;// b 
   
    // char arr[] = "abcde"; 
    // char *p = &arr[0]; 
    // cout << p << endl; //abcde 
    
    //char arr[] = "abcde"; 
    //char *p = &arr[0]; 
    //p ++;
    //cout << p << endl; //bcde

    // char str[] = "babbar"; 
    // char *p = str; 
    // cout << str[0] <<" " << p[0] << endl;

    //int first = 110; 
    //int *p = &first;
    //int **q = &p; 
    //int second = (**q)++ + 9; 
    //cout << first << " " << second << endl;//111    120.

    int first = 100; 
    int *p = &first; 
    int **q = &p; 
    int second = ++(**q); 
    int *r = *q; 
    ++(*r); 
    cout << first << " " << second << endl; //102  101  
  return 0;
}