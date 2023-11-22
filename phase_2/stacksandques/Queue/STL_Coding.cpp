#include<bits/stdc++.h>
using namespace std;

int main(){
     // enter the project name 
     queue<int> q; 
     q.push(1); 
     q.push(2); 
     cout << "front of queue is " << q.front() << endl; 
     q.push(3); 
     q.push(4); 
     cout << "front of queue is " << q.front() << endl; 

     cout << "size of queue is : "<< q.size() << endl; 
     q.pop(); 
     cout << "front of queue is " << q.front() << endl; 
     cout << "size of queue is : " << q.size() << endl; 

     if(q.empty()){
        cout << "queue is empty " << endl; 
     }
     else{
        cout << "queue is not empty " <<endl; 
     }


  return 0;
}