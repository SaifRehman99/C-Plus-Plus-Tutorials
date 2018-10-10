#include<iostream>
#include<conio.h>
using namespace std;
class fact{
	private:
		int x,y,z=1;
	public:
	void factorial(){
		cout<<"Enter factorial number: "<<endl;
		 cin>>x;
		 for(y=1;y<=x;y++){
		 	z=y*z;
		 }
		 cout<<"Factorial of "<<x<<" is "<<z<<endl;
	}
	void factorial(int x){
		for(y=1;y<=x;y++){
			z=y*z;
		}
		cout<<"Factorial of "<<x<<" is "<<z<<endl;
		
	}
	void factorial(char x){
		for(y=1;y<=x;y++){
			z=y*z;
		}
		cout<<"Factorial of "<<x<<" is "<<z<<endl;
	}	
	
	
};
int main(){
	fact f1;
	f1.factorial();
	cout<<endl;
	f1.factorial(3);
	cout<<endl;
	f1.factorial(4);
}
