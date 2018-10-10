#include<iostream>
#include<iomanip>
using namespace std;
class CoffeeOutlet
{
	private:
		float Cost,totalprice;
		int bag;
	public:
	
	void setbag(int bb)
	{
		bag=bb;	
	}
	
	int getbag()
	{
		return bag;
	}
	
	void display()
	{
		cout<<endl<<"NUMBER OF BOXES ARE:"<< getbag();
		Cost=getbag()*5.50;
		
		cout<<endl<<"THE COST OF BOXES ARE:$"<<fixed<<setprecision(3)<<Cost;		
	}
	
	void boxes_detail()
	{
		cout<<endl<<"THE NUMBER OF BOXES USED ARE:";
		float m1,m2,m3;
		int large,medium,small;
		
		large=getbag()/20;
		m1=large*1.80;
		cout<<endl<<"THE LARGE BOX :$"<<fixed<<setprecision(3)<<m1;
		
		bag=getbag()%20;
		medium=bag/10;
		m2=medium*1.00;
		cout<<endl<<"THE MEDIUM BOX :$"<<fixed<<setprecision(3)<<m2;
		bag=bag%10;
		
		if(bag>=5)
		{
			small=bag/5;
			bag=bag%5;
			if(bag>0)
			{
				small++;
			}
		}
		else
		small=1;
		m3=small*0.60;
		cout<<endl<<"THE SMALL BOX :$"<<fixed<<setprecision(3)<<m3;
		
		totalprice=m1+m2+m3+Cost;
		cout<<endl<<"THE TOTAL COST IS:"<<fixed<<setprecision(3)<<totalprice;
		
	}

};

main()
{
	CoffeeOutlet coffee;
	int num;
	cout<<"ENTER NUMBER OF BOXES:";
	cin>>num;
	coffee.setbag(num);
	coffee.display();
	coffee.boxes_detail();
}
