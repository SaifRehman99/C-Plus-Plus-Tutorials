#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	 float num_of_courses,total_marks,res;
	 float avg;
	 
	cout<<"ENTER NUMBER OF COURSES"<<endl;
	cin>>num_of_courses;
	
	cout<<"Enter total marks";
	cin>>total_marks;
	
	res=total_marks/num_of_courses;
	
	 avg=res;
	
	
	cout<<"The average is "<<avg<<"%"<<endl;
	
}
