#include<iostream>
using namespace std;
void reverse_array(int *M,int size)
{
	int *M1;
	cout<<endl<<"THE REVERSE ARRAY IS:";
	for( int i=size-1;i<=0;i--)
	{
		cout<<endl<<M1[i];
	}
}

int main()
{
	int size;
	cout<<"ENTER THE SIZE OF ARRAY";
	cin>>size;
	int M[size];
	for(int i=0;i<size;i++)
	{
		cin>>M[i];
	}
	cout<<endl<<"THE ACTUAL ARRAY IS:";
	for(int i=0;i<size;i++)
	{
		cout<<endl<<M[i];
	}
	reverse_array(M,size);
}

