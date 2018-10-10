#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class concat{
	private:
		char string[100];
	public:
		concat()
		{
			strcpy(string,"");		}
		concat(char str[])
		{
			strcpy(string,str);
		}
	    void getstring()
	    {
	    	cout<<"enter string"<<endl;
	    	gets(string);
		}
		void disp()
	  {
		  cout<<string<<endl;
	  }
		concat operator + (concat);
};
concat concat::operator + (concat s2)  {
          //concat temp;
          char temp[100];
		  strcpy(temp,string);
		  strcat(temp,s2.string);
   return concat(temp);
}
int main()
{
	concat s1,s2("world"),s3;
	s1.disp();
	s1.getstring();
	s3 = s1 + s2;
	s1.disp();
	s2.disp();
	s3.disp();
}
