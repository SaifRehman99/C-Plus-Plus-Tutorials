#include<iostream>
using namespace std;
class Phone{
	private:
		int area_code[3],exchange_code[4],consumer_no[4];
	long int phonenumber;
	public:
		Phone()
		{
		}
		Phone(long int x)
		{
			phonenumber=x;
		}
		codes()
		{
			for(int i=0;i<=3;i++)
			{
				int rem1=phonenumber%10;
				phonenumber=phonenumber/10;
				consumer_no[i]=rem1;
			}
			int x=phonenumber;
		    for(int i=0;i<=3;i++)
			{
				int rem2=x%10;
				x=x/10;
			    exchange_code[i]=rem2;
			}
			int y=x;
			for(int i=0;i<3;i++)
			{
				int rem3=y%10;
				y=y/10;
			    area_code[i]=rem3;
			}
		}
		display()
		{
			cout<<endl<<"Your AREA CODE is:";
			for(int i=2;i>=0;i--)
			{
				cout<<area_code[i];
			}
			cout<<endl<<"Your EXCHANGE CODE is:";
			for(int i=3;i>=0;i--)
			{
				cout<<exchange_code[i];
			}
			cout<<endl<<"Your CONSUMER CODE is:";
			for(int i=3;i>=0;i--)
			{
				cout<<consumer_no[i];
			}
		}
		
};
main()
{
	long int y;
	cout<<"ENTER THE PHONE NUMBER";
	cin>>y;
	Phone p(y);
	p.codes();
	p.display();
}

