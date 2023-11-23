#include<bits/stdc++.h>
using namespace std;
int main(){
     // enter the project name 
     deque<int> d; 
     d.push_front(12); 
     d.push_front(13); 
     d.push_back(14); 
     d.push_back(15); 
     // 13 12 14 15 
     cout << d.front() << endl; 
     cout << d.back() << endl; 

     d.pop_front(); 
     cout << d.front() << endl; // 12
     cout << d.back() << endl;  // 15 
     d.pop_back(); 
     cout << d.front() << endl; // 12 
     cout << d.back() << endl;  // 14 
     
     d.pop_back(); 
     cout << d.front() << endl; 
     cout << d.back() << endl; 
     d.pop_back(); 
     if(d.empty()){
        cout << "queue is empty" << endl; 
     }
     else{
        cout << "queue is not empty" << endl; 
     }
  return 0;
}