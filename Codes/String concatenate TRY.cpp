#include<iostream>
#include<string.h>
using namespace std;
class String{
	private:
		char str[80];
	public:
	String(){
		strcpy(str," ");
	}
	String(char s[]){
		strcpy(str,s);
	}
	void display(){
		cout<<str;
	}
	String operator +(String ss){
		String temp;
		strcpy(temp.str,str);
		strcat(temp.str,ss.str);
		return temp;
	}
		
};

 int main(){
 	String s1="Hello! ";
 	String s2="I really don't know how this program works :'(";
 	String s3;
 	s1.display();
 	cout<<endl;
 	s2.display();
 	cout<<endl;
 	cout<<endl;
 	s3.display();
 	s3=s1+s2;
 	s3.display();
 	
 	
 	return 0;
 }
