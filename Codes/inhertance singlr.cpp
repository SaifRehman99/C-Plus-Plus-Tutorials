#include<iostream>
using namespace std;
class sub{
	public:
		int x;
	public:
		void getdata(){
			cout<<"Enter Value of x =";
		     cin>>x;
		     
		}
};
class dev : public sub {
	private: 
	int y;
	public:
		void read(){
			cout<<"Enter Value of y =";
			cin>>y;
		}
		void product(){
			
			cout<<"Product ="<<x*y;
		}
};
main(){
	dev c;
	c.getdata();
	c.read();
	c.product();
	
}
