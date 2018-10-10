#include<iostream>
using namespace std;
class Engine
{
public:
int power;
};
class Car
{
public:
Engine e;
string company;
string color;
void show_details()
{
cout<<"Compnay is: "<<company<<endl;
cout<<"Color is: "<<color<<endl;
cout<<"Engine horse power is: "<<e.power;
}
};
int main()
{
Car c;
c.e.power = 500;
c.company = "hyundai";
c.color = "black";
c.show_details();
return 0;
}
