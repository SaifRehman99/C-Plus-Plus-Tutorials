#include<iostream>
using namespace std;
class counter
{
	protected:
		int count;
	public:
		counter(): count(0)
		{
			
		}
		counter(int c): count(c)
		{
			
		}
		void get()
		{
			cout<<count<<endl;
		}
		counter operator ++ ()
		{
			return counter( ++count );
		}
};
class countDm: public counter
{
	public:
		countDm(): counter()
		{
			
		}
		countDm(int c): counter(c)
		{
			
		}
		counter operator -- ()
		{
			return counter ( --count );
		}
};
int main()
{
	countDm c1,c3,c2(100);
	++c1;
	++c1;
	++c1;
	--c2;
	--c2;
	c1.get();
	c2.get();
	--c1;
	--c1;
	//c3 = --c2;
	c2.get();
	c3.get();
	c1.get();

}
