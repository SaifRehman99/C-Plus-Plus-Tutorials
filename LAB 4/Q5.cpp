#include<iostream>
using namespace std;
class Student
{
	private:
		string name,section;
		int roll_no,semester;
	public:
		Student()
		{
		}
		Student(string n,int r,int s,string ss)
		{
			name=n;
			roll_no=r;
			semester=s;
			section=ss;	
		}
	    void display()
	    {
	    cout<<"THE DATA OF STUDENT IS:"<<endl;
	    cout<<"NAME="<<name<<endl<<"ROLL_NUMBER="<<roll_no<<endl
	    <<"SEMESTER="<<semester<<endl<<"SECTION="<<section;
		}
		
};
main()
{
	Student s1("Mutiba",3884,2,"B2");
	s1.display();

}
