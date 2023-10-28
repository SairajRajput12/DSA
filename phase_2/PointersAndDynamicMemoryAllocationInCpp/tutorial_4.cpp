#include<bits/stdc++.h>
using namespace std;

void update(int **p){

    // p = p + 1; // pass by value. 
    // kuch change hoga ?? --------> NO 
    // *p = *p + 1; //-------------> yes,ptr address changes. 
    // kuch change hoga ?? 
    **p = **p + 1; // yes,value of i changes
    // change hoga ?? 
}

int main(){
     // enter the project name
     cout << "Double pointers :" << endl; 
     int i = 69; 
     int *ptr = &i; 
     int **ptr2 = &ptr; 
    //  cout << **ptr2 << endl; 
    //  cout << *ptr2 << endl; 
    //  cout << ptr2 << endl; 
    //  cout << *ptr2 << " "<< ptr << endl;
    //  cout << i << " " << *ptr << " " << **ptr2 << endl; // jitna star lagaoge utna depth mein jaoge. 


    //  cout << &i << " " << ptr << " " << ptr2 << endl;
    //  cout << &ptr << " "<< ptr2 << endl;
    //  // functions: 
    cout << endl << endl; 
    cout <<"before :" << i << endl; 
    cout <<"before :" << ptr << endl; 
    cout << "before :" << ptr2 << endl; 
    update(ptr2); 
    cout << "After : " << i << endl; 
    cout << "After : "<< ptr << endl; 
    cout << "After : "<< ptr2 << endl; 
     cout << "Sab changa si!"<< endl;
  return 0;
}