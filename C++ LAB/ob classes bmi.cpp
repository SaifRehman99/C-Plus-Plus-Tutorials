#include<iostream>
using namespace std;
class BMI {
	private:
		int weight,height,bmi;
		string st;
	public:
		void input(){
			cout<<"Enter Weight height "<<endl;
			cin>>weight>>height;
		}
		int BMI_CAL(){
			return weight/(height*height)*703;
			
		}
		string find(){
			if(bmi < 18.5)
			st = "Less";
			else if (bmi <20)
			st = "High";
			return st;
		}
		void print(){
			
			
		bmi=BMI_CAL();
		cout<<bmi;
		cout<<find();
			
		}
};
main(){
	BMI a;
	a.input();
	a.print();
}
