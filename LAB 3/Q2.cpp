#include<iostream>
using namespace std;

class Employee
{
	private:
	char *first_name[20];
	int salary;
	string last_name;
	public:
	Employee()
	{
	}
	void setdata (char f[],string l,int s)
	{
		*first_name=f;
		salary=s;
		last_name=l;
	}
	char* getfirst_name()
	{
		return *first_name;
	}
	int getsalary()
	{
		if(salary<0
		
		)
		{ 
		salary=0;
		}
		else
		return salary;
	}
	string getlast_name()
	{
		return last_name;
	}
	void Calculation()
	{
		int yearly_salary=getsalary()*12;
		cout<<endl<<"The yearly salary is"<<yearly_salary;
		int raise=(yearly_salary*0.1)+getsalary();
		cout<<endl<<"The yearly raise salary is"<<raise;
	}
};
main()
{
	Employee E1,E2;
	char name1[10],name2[10];
	cout<<endl<<"The first name of employee is: ";
	cin>>name1;
	E1.setdata (name1,"Akbar",10);
	cout<<endl<<"The name of Employee is: "<<E1.getfirst_name();
	cout<<endl<<"The lastname of Employee is: "<<E1.getlast_name();
	cout<<endl<<"The monthly salary is: "<<E1.getsalary();
	E1.Calculation();
	
	cout<<endl<<"The second name of employee is: ";
	cin>>name2;
	E2.setdata (name2,"Ghauri",10);
	cout<<endl<<"The name of Employee is: "<<E2.getfirst_name();
	cout<<endl<<"The lastname of Employee is: "<<E2.getlast_name();
	cout<<endl<<"The monthly salary is: "<<E2.getsalary();
	E2.Calculation();
}
