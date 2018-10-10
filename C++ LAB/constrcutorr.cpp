#include<iostream>
using namespace std;
class Emp {
	private:
		int salary;
	public:
	Emp(int s){
		salary=s;
	}
	void dispaly(){
		cout<<"Salary ="<<salary;
	}
};
main(){
	
	Emp e(2300);
	e.dispaly();
	
	
}
