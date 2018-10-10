#include<iostream>
using namespace std;
main()
{	int num,rem,quo,sum=0,x, sum1=0;
	cout<<"ENTER THE NUMBER";
	cin>>num;	
	while(num>0)
	{
		rem=num%10; //12345=5 // 1234=4 //123=3
		x=	rem+1;  //5+1=6 // 4+1=5 // 3+1=4
		if(x==10) 
		{
		  x=0;
	    }
		quo=num/10;  //12345=1234 // 1234=123 // 123=12
	    num=quo;     //1234 // 123 //12
	    sum=(sum*10)+x;  //0 =0 +6 // 6//60+5=65// 654
	}
//	cout<<sum;
	while(sum!=0)
	{
       int rem1=sum%10;
       sum=sum/10;
       sum1=(sum1*10)+rem1;
     }
     cout<<sum1;
}
