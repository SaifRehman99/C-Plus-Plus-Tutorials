#include<iostream>
using namespace std;
void swapfloat(float x,float y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
	
	cout<<"x="<<x<<"y="<<y<<endl;
}
main()
{
	float x,y;
	cin>>x>>y;
	swapfloat(x,y);	
}
