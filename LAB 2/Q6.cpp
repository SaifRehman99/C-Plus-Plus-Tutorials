#include<iostream>
using namespace std;
int* Time(int time_in_sec)
{
	static int M[3],M1;
	for(int i=0;i<3;i++)
	{
		if(i==0)
		{
		    M[i]=time_in_sec/3600;
		    M1=time_in_sec%3600;
			
		}
		else if(i==1)
		{
			M[i]=M1/60;
		}
		else if(i==2)
		{
			M[i]=M1%60;
		}
    }
    return M;
}
main()
{
	int time_in_sec;
	cout<<"ENTER THE TIME IN SECOND";
	cin>>time_in_sec;
	int *M=Time(time_in_sec);
		cout<<"Hours"<<endl<<"Mins"<<endl<<"Seconds"<<endl;
	for(int i=0;i<3;i++){
		cout<<M[i]<<endl;
	}
}
