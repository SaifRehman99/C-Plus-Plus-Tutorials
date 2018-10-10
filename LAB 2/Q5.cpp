#include<iostream>
using namespace std;
calculate(int width,int lenght)
{
	int area=width*lenght;
	int perimeter=2*(width+lenght);
	cout<<"THE AREA AND PERIMETER OF A RECTANGLE ARE "<<area<<" and "<<perimeter<<" respactively"<<endl;
}
void read()
{
	int width,lenght;
	cout<<"ENTER THE WIDTH AND LENGHT OF A RECTANGLE";
	cin>>width;
	cin>>lenght;
	calculate(width,lenght);
}

main()
{
	read();
}

