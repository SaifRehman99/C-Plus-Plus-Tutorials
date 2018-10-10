#include<iostream>
#include<string>
using namespace std;
class buisnessman{
	public:
	
	string name ;
	void into();
};

void  buisnessman  :: into(){
	
	cout<<"This is a buisness Man";
}
main(){
	
	buisnessman man;
	
	man.into();
	
	
	
}
