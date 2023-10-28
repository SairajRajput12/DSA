#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name
    //  cout << "This is tutorial number 1" << endl; 
    //  cout << "Phase - 2 : Pointers" << endl; 
    //  int n = 8; 
    //  double k = 4.2; 
    //  double *m = &k; 
    //  cout << "The address where the content of the n is stored is :" << &n << endl;
    //  cout << "The content in n variable is :" << n <<  endl;
    //  int * p = &n;
    //  *p = *p + 1;   
    // //  n ++; 
    //  cout << "The modified value of the integer n is :" << n <<  endl;

    //  char ch = 'a'; 
    //  char *c = &ch; 
    //  cout <<"The original value of the char ch was :" << ch << endl;
    //  *c = *c + 1; 
    //  cout << "The modified value of the char ch is :" <<  ch << endl;
    //  cout << "The address pointed by c:" << c << endl;
    //  cout << "The address stored at p is :"<<p << endl;
    //  cout << "The size of integer " << sizeof(n) << endl;
    //  cout << "The size of the pointer is :" << sizeof(p) << endl;
    //  cout << "The size of the pointer is :" << sizeof(c) << endl;
    //  cout << "The size of the pointer is :" << sizeof(m) << endl;
    //int *p; // pointer to int is created and pointing to some garbafe address.  
    // int *p = 0; // pointer p is created pointing to the memory address that does not exist. 
    // cout << *p << endl; 
    // int i = 5; 
    // int *p = &i; 
    // // int *p = 0; 
    // p = &i; 
    // int *q = &i; 
    // cout << *p << endl;
    // cout << p << endl;
    // cout << *q << endl;  
    // cout << q << endl;
    
    // *p = *p * 2;  
    // (*p) ++; 
    // p++ --------> go to the next datatype. 
    // cout << i << endl; 

    // copying the pointer. 

    // int *m = p; 
    // cout << *p << "-" << *m << endl; 
    // cout << p << "-" << m << endl; 
    // int **m = &p; 
    // cout << "*m :" << *m << endl; 
    // cout <<"**m :" <<**m << endl; 
    // cout << "m :" << m <<" " <<" &p" << &p << endl; 

    /*
        Types of the pointer: 
            1] Null Pointer. 
            2] Double Pointers. 
            3] Void Pointers. 
            4] Wild Pointers. 
            5] Dangling pointers. 

    */

   // 2] Double Pointer: 
//    int a = 10; 
//    int *p = &a; 
//    int **q = &p;  
//    cout << "**q --->" << **q <<"----> *q ---->" << *q  << "----> q -----> " << q << endl; 

    void *ptr; 
    int i = 10; 
    ptr = &i; 
    cout << "Adress of the variable i is :" << &i << endl; 
    cout << "Address where the variable is is pointing :" << ptr << endl;
  return 0;
}