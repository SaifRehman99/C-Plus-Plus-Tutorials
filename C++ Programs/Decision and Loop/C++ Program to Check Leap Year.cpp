#include<iostream>
using namespace std;
main(){
	   
	   int year;
	   
	   cout<<"Enter Year to check Leap Year = ";
	   cin>>year;
	   
	   if(year%4==0){
	   	   cout<<"Leap Year";
	   }
	   else if(year%400==0){
	   	cout<<"Leap Year";
	   }
	   else 
	   cout<<"Not a Leap year";
	
	
	
}
