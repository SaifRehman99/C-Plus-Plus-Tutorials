#include<iostream>
using namespace std;

class Vehicle
{
	private:
		string manufacture;
		int speed,year;
		
	public:	
	 void wheel(int n)
	  {
	   if(n=2)
		cout<<"Vehicle is BIKE"<<endl;
		
	   else
		cout<<"Vehicle is RICKSHAW"<<endl;
	 }
	 
     void setdata(int ss,int yy,string mm)
     {
    	year=yy;
    	manufacture=mm;
    	speed=ss;
     }
     
	 int getyear()
	 {
		return year;
	 }
	 
	 string getmanufacture()
	 {
		return manufacture;
	 }
	 
	 int getspeed()
	 {
		return speed;
	 }
	 
	  int brake()
     {
	    speed=speed-5;
	    return speed;
     }
     
    int accelerate()
     {
	    speed=speed+5;
	    return speed;
     }   
};
int main()
{

	Vehicle vehicle;
	int number,y,s;
	string m;
	cout<<"Enter number of wheels: ";
	cin>>number;
	vehicle.wheel(number);
	
	cout<<"Input year,name and speed: ";
	cin>>y>>m>>s;
	vehicle.setdata(s,y,m);
	vehicle.getyear();
	vehicle.getmanufacture();
	vehicle.getspeed();
	
	cout<<"CURRENT SPEED: ";
	vehicle.accelerate();
	vehicle.accelerate();
	vehicle.accelerate();
	vehicle.accelerate();
	cout<<endl<<vehicle.accelerate();
	
	cout<<endl<<"After calling brake function CURRENT SPEED:";
	vehicle.brake();
    cout<<endl<<vehicle.brake();

}


