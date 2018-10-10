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
void display() const
{
	cout<<feet<<"\"-"<<meter<<"\'"<<endl;
	  }	   	          
distances add_dist( const distances) const;  // acccept two args
};
distances distances::add_dist(const distances d2) const 
{
	distances temp; // temporary object to save the add values and to return it
	temp.feet = feet + d2.feet; // adding feet of d1 that is "feet" into feet of d2 that is d2.feet in the temp 
	// object member variable feet
	temp.meter = meter + d2.meter; // same as above
	return temp; // returning the whole temporary object 
}
int main() 
{
const distances d4;
d4.display();
distances d3,d1; 
d1.get();
distances d2(4,9); 
d3 = d1.add_dist( d2); // d3 = temp;
d1.display();
d2.display();
d3.display();
}
