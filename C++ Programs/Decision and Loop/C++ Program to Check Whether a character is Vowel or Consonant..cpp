#include<iostream>
using namespace std;
main(){
	   
	   char a;
	   int uppercase, lowercase;
	   
	   cout<<"Enter Any Character = ";
	   cin>>a;
	   
	   uppercase=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
	   lowercase=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
	   
	   if(lowercase||uppercase)
	   cout<<a<<" is Vowel";
	   else
	   cout<<a<<" is Constant";
	
	
}
