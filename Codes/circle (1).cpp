#include<stdio.h>
#include<iostream>
using namespace std;
class circle{
	private:
		float radius,area,circumference,pi;
	public:
		circle(): radius(0.0),area(0.0),circumference(0.0),pi(3.14)
		{
			
		}
	    circle(float r): radius(r){
	    	
		}
		void Area(float rad)
		{
			radius = rad;
			area = pi*radius*radius;
			cout<<"area of circle is"<<area<<endl;
		}
		void Circumference(float rad)
		{
			radius = rad;
			circumference=2*pi*radius;
			cout<<"circumference of circle is<"<<circumference<<endl;
		}
};
int main()
{
	
	circle c1;
	float rad;
	int choice;
	char opt;
	do{
	    cout<<"1)area \n2)circumference \nEnter your choice"<<endl;
	    cin>>choice;
		cout<<"enter radius"<<endl;
	    cin>>rad;
	    switch(choice){
	    case 1:
	    	    c1.Area(rad);
	            break;
	    case 2:
               c1.Circumference(rad);
	            break;
        default:
        	cout<<"wrong entry";
	    }
            	 cout<<"Do you want to enter again? y/n"<<endl;
            	 cin>>opt;        	
            	}while(opt=='y'||opt == 'Y');
}
