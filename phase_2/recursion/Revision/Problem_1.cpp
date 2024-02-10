#include<bits/stdc++.h>
using namespace std;

void print(int n,string name){
    if(n <= 0){
        // cout << name << endl; 
        return;  
    }
    print(n-1,name); // this line will print the name n-1 means (5-1 = 4) times. 
    cout << name << endl; // this line will print the name 1 times 
    // means total number of printing will be 8 times. 
}

int main(){
     // enter the project name
     int n; 
     string name; 
     cin >> n;
     cin >> name; 
     print(n,name); 
  return 0;
}

/*
    Recursive tree will be: 
                    f(3,'sairaj')
                         | 
    _____________________|_____________________
    |                                          |
  1] f(2,'sairaj')                      2] f(1,'sairaj') 
_____|_______________                ________|_________ 
|                   |                |                |
f(1,'sairaj')   f(0,'sairaj')      f (0,'sairaj')    base case hitted


*/