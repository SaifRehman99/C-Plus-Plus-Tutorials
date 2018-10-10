#include<iostream>
using namespace std;
class s{
	private:
		int s;
	public:
		void sor(int x){
			s = x;
			
		}
		
		void disp(){
			for(int i=1 ; i<=s;i++)
			cout<<i<<"."<<"Sorry"<<endl;
		}
	
};
main(){
	s s1;
	int d;
	cout<<"Enter Number of --";
	cin>>d;
	s1.sor(d);
	s1.disp();
	
	
}
