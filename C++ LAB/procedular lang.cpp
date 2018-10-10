#include<iostream>
using namespace std;
int bmical(int w,int h){
	return (w/h*h)*703;
}
string status(int bmi){
	string status;
	if(bmi <18.5)
	status="Underweight";
	else if(bmi > 20)
	status ="Overweight";
	return status;
	
}
main(){
	int we,hi,bmi;
	cout<<"Enter Height and Weight =";
	cin>>hi>>we;
	bmi=bmical(we,hi);
	cout<<bmi<<endl;
	cout<<status(bmi);
}
