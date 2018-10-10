#include<stdio.h>
#include<iostream>
using namespace std;
class foo
{
	private:
	 	int count;
	public:
		foo()
		{
			count++;
		}
		int get()
		{
			return count;
		}
	    void conFunc() const 
	    {
	    	count = 99;
		}
};
//int foo::count = 0; 
int main()
{
	foo f1,f2,f3;
	cout<<f1.get()<<endl;
	cout<<f2.get()<<endl;
	cout<<f3.get()<<endl;
	f3.conFunc();
	cout<<f3.get()<<endl;
}
