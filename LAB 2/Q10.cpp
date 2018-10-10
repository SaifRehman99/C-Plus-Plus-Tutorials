#include<iostream>
using namespace std;
main()
{
	int M[5];
	cout<<"INPUT THE ELEMENTS IN ARRAY";
	for(int i=0;i<5;i++)
	{
		cin>>M[i];
	}
	for(int j=0;j<5;j++)
	{
		for(int k=0;k<5;k++)
		{
			if(M[k+1]<M[k])
			{
				
				int temp = M[k];
				M[k] = M[k + 1];
				M[k + 1] = temp;
		
			}
		}
	}
	cout<<"ASCENDING ORDER"<<endl;
	for(int l=0;l<5;l++)
	{
		cout<<M[l]<<endl;
	}
	cout<<"DESCENDING ORDER"<<endl;
	for(int m=5;m>0;m--)
	{
		cout<<M[m]<<endl;
	}
	
	
}
