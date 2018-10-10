	#include<stdio.h>
#include<iostream>
using namespace std;
class dist{
	private:
		int feet;
		int meter;
	public:
		dist(): feet(0),meter(0)
		{
		}
		dist(int f , int m): feet(f),meter(m)
		{
		}
		void get()
		{
			cout<<"enter feet"<<endl;
		cin>>feet;
		cout<<"enter meter"<<endl;
		cin>>meter;
		 
		}
		void display()
		{
			cout<<feet<<"feets and"<<meter<<"meters";
		}
		dist operator + (dist) const;
};
dist dist::operator + (dist d2) const {
   int f,m;
   f = feet+ d2.feet;
   m = meter + d2.meter;
   return dist(f,m);
}
int main() { 
dist dist1, dist3, dist4;   //define distances 
dist1.get();                //get dist1 from user
dist dist2(2,3);       //define, initialize dist2
dist3 = dist1 + dist2;          //single ‘+’ operator
dist4 = dist1 + dist2 + dist3;  //multiple ‘+’ operators //display all lengths 
cout <<"dist1 =";  
dist1.display(); 
cout << endl; 
cout <<"dist2 = ";  
dist2.display(); 
cout << endl;
cout <<"dist3 = ";  
dist3.display(); 
cout << endl; 
cout <<"dist4 = ";  
dist4.display(); 
cout << endl; 
return 0; 
}
