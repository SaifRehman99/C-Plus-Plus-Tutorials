#include<iostream>
#include<conio.h>
using namespace std;
class distances
{
	private:
		int inches;
		int feet;
	public:
		distances():inches(0),feet(0)
		{}
		distances(int in,int ft)
		{
			inches=in;
			feet=ft;
		}
		void get_dist()
		{
			cout<<"enter feet";cin>>feet;
			cout<<"enter inches";cin>>inches;
		}
		void disp()
		{
			cout<<"your distance is "<<feet<<"\'"<<inches<<endl;
		}
		distances operator +=(distances d2)
		{
			distances temp;
			temp.feet=feet+=d2.feet;
			temp.inches=inches+=d2.inches;
			if(inches>=12)
			{
				inches-=12;
				feet++;
			}
			return(temp);
		}
		bool operator > (distances d2)
		{
			int ft1,ft2;
			ft1=feet+inches;
			ft2=d2.feet+d2.inches;
			return(ft1>ft2?true:false);
			
		}
};
int main(){
	distances d1,d3;
	distances d2;
	d1.get_dist();
	d2.get_dist();
	d1.disp();
	d2.disp();
	if(d1>d2)
	cout<<"d1 is greater than d2"<<endl;
	else
	cout<<"d1 is less than d2"<<endl;
	d3=d1+=d2;
	d3.disp();
	
	}
	
