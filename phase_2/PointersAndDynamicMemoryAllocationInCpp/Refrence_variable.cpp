#include<bits/stdc++.h>
using namespace std;

int& change(int n){ // bad practise. 
    int num = n; // local variable 
    int &ans = num; 
    return ans; 
}
void update(int &n){ // new memory will not created
    n ++; 
}

int* func(int n){
    int *ptr = &n; // local variable scope. 
    return ptr; 
}

int getSum(int *arr,int n){
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; 
    }

    return sum; 
    
}

int main(){
    // enter the project name
    cout << "Refrence Variables :" << endl; 
    // same name but different names. 
    /*
        int i = 5;
        int &j = i; 
    */
   /*
   int i =  69; 
   int &j = i; 
   cout << i << endl; 
   i ++;
   cout << j << endl; 
   j ++; 
   cout << i << endl; 
   // ek variable 2 names 
   int &k = i; 
   k ++; 
   cout << k << endl; 
   j ++; 
   cout << j << endl;
   */
    // int n = 5; 
    // cout << "Before value :" << n <<endl; 
    // update(n);  
    // cout << "After :" << n << endl;    
    // change(n); // wrong practise. -------> warning will be displayed. 
    // func(n); // wrong practise. ---------> warning will be displayed. 
    /*
        Bad Practise: 
        int n; 
        cin >>n; 
        int arr[n]; -----------> runtime par pata lagra hai (bhaiyanak cheeze hai)and bad practise.  
        // compile time mein pata hona chahiye. 

        Solution: 
        use int arr[1000] or any fixed size.    
    */

   // using heap memory. 
//    char *ch = new char; 
    // char ch = 'a'; 
    // cout << sizeof(ch) << endl; 
    // char *c = &ch; 
    // cout << sizeof(c)  << endl; 
    int n;
    cin >> n; 
    int *arr = new int[n];  // creating the array of the size 5 dynamically. 
    for (int i = 0; i < n; i++)
    {
            cin >> arr[i]; 
    }
    cout << "answer :" << getSum(arr,n) << endl;
    // case : 1: 
    // while(true){
    //     int i = 5; // ----------> 1 int memory ---------> 4 byte in stack 
    // }

    // // case : 2: 
    // while(true){
    //     int* ptr = new int; // -----------> 12 byte memory ----> stack memory will get free but not heap memory. 
    // } 

    // static allocation ------_> memory automatically realese. 
    // use delete function. 
    /*
        int* arr = new int[50]; 
        delete []arr;  // for array  

        delete i; -----> deleting the
        variable. 
    */
  return 0;
}















