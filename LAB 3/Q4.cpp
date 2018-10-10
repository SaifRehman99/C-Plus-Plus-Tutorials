#include<iostream>
#include<stdlib.h>

using namespace std;
class Hittingame
{
    private:
	 int num1,num2,n,w,l;
    public:
     void Generatingnum()
     {
     	
     	cout<<endl<<"The time number of game run";
     	cin>>n;
     	for(int i=0;i<n;i++)
     	{
     		num1=rand()%2;
     		cout<<endl<<"The value of num1 is:"<<num1;
     		num2=rand()%2;
     		cout<<endl<<"The value of num2 is:"<<num2;
     		
     		if(num1==num2)
     		{
     			w++;
     			cout<<endl<<"Enemy got hit by your team!";
			}
			else
			{
				cout<<endl<<"You got hit by enemy!";
				l++;
			}	
		}
	 }
	 void result()
	 {
	 	if(w>l)
	 	cout<<endl<<"You won!";
	 	else
	 	cout<<endl<<"You lose!";
	 }
};

main()
{
	Hittingame G;
	G.Generatingnum();
	G.result();
	
}
