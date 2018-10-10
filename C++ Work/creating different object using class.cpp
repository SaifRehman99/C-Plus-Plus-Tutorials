#include<iostream>
#include<string>
using namespace std;
class businessman{
	public:
	string name;
	void intro()
	{
		cout<<"my name is "<<name<<endl;
	}
	
};
main()
{
	businessman ibad;
	ibad.name="ibad";
	ibad.intro();
	businessman *saif=new businessman();
	saif->name="saif";
	saif->intro();
	
	
	
}
