#include<iostream>
#include<string>
using namespace std;

class businessman{
	
	public:
		
		string name;
		
		void display(){
			
			cout<<"Hi,This is "<<name;
		}
};
main(){
	
	businessman ibad ,saif;
	ibad.name="Ibad";
	ibad.display();
	saif.display();
	
	
}
