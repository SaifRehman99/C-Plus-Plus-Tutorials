#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class  test
{
private:
	char a[100];
public:
	 void get_string()
	 { 
		 cout<<"Enter string";gets(a);
	  }
	  test operator +=(test x)
		  {test t;
		  strcat(a,x.a);
		  strcpy(t.a,a);
		  return t;
	  }
//	  test operator+=(test x){
//	  	test t;
//	  	strcat()
//	  }
	  void disp()
	  {
		  cout<<a<<endl;
	  }
};
int main()
{
	test t1,t2,t3;
	t1.get_string();
	t2.get_string();
	t3=t1+=t2;
	t1.disp();
	t2.disp();
	t3.disp();
}
