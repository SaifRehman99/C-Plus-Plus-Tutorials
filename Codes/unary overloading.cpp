#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private:
		int real,imag;
	public:
		complex(): real(0), imag(0) { }
	void setData(){
		cout<<"Enter real : ";
		cin>>real;
		cout<<"Enter imag : ";
		cin>>imag;
	}
//	complex operator-(){
//		complex temp;
//		temp.real=-real;
//		temp.imag=-imag;
//		return (temp);
//	}
	complex operator-(){
		complex dd;
		dd.real=-real;
		dd.imag=-imag;
		return(dd);
		
	}
	void showData(){
		cout<<"Real : "<<real<<endl<<"Imaginary : "<<imag<<endl;
	}
	
};
int main(){
complex c1,c2;
c1.setData();
c1.showData();
c2=-c1; //c2=c1.negative()
c2.showData();
return 0;
}

