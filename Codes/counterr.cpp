#include<stdio.h>
#include<iostream>
using namespace std;
class distances{ 
private:
int feet , meter;
public:
 distances() : feet(0),meter(0){ 	
 }
 distances(int f , int m) :feet(f),meter(m) //constructor with 2 args
 {
 }
void get()
{
	cout<<"enter feet ";
	cin>>feet;
	cout<<"enter meter ";
    cin>>meter;	
	   }
void display()
{
	cout<<feet<<"\"-"<<meter<<"\'"<<endl;
	  }	   	          
void add_dist(distances , distances); // acccept two args
void add(distances , distances);
};
//void distances ::
void distances:: add_dist(distances d1 , distances d2)
{
	feet = d1.feet + d2.feet;
	meter = d1.meter + d2.meter;
}
int main() 
{
distances d3;
//d1.display();
distances d2(4,9);
distances d1(d2); // or d1=d2; // one arg constructor // this seems like like assignment operator but its not 
// both invoke the default copy constructor to copy member by member copy of d2 in d1  // this is default constructor
// which does not need to define and copy the object by just pasing the object in object creates the default constructor 
d3.add_dist(d1,d2);
d1.display();
d2.display();
d3.display();

}


