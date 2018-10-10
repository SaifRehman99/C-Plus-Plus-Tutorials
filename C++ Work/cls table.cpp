#include<iostream>
using namespace std;
class table{
	private:
	int tab,num,res;
public:
void tab_o(int x){
			tab=x;
		}
		void num_p(int y){
		num=y;
		}
		void res_i(){
			for(int i=0;i<=num;i++)
			cout<<tab<<"*"<<i<<"="<<tab*i<<endl;
		
		}      
};

main(){
	table t1;
	int n,m;
	cout<<"Enter Number of Table You Want =";
	cin>>n;
	cout<<"Enter where till you want =";
	cin>>m;
	t1.tab_o(n);
	t1.num_p(m);
	t1.res_i();
}
