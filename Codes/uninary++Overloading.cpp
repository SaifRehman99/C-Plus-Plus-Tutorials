#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class counter{
	private:
		string concated,x,y;
	public:
		counter(): x("hello"),y("world")
		{
			
		}
		counter(string xx , string yy): x(xx),y(yy)
		{
			
		}
      string get()
      {
      	return concated;
	  }
	   void operator ++ ()
	   {
	   	  strcpy(x,y);
	   }
};
int main()
{
	counter c1;
	c1("hell","worl");
	++c1;
	c1.get();
}
