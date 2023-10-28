#include<iostream> 
#include"myheader.h"
using namespace std;
using namespace Student;  


int main(){
	cout <<"Roll no :" <<Student::roll_no<<endl<<"Name :" << Student::name;	
	cout<<endl<<Student::addNum(2,3)<<endl; 
	return 0; 
}
