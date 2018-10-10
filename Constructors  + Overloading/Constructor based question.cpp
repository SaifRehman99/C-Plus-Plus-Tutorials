#include<iostream>
using namespace std;
class Departmental_Store{
	
	int code_no,price,qty,total,cnt=0,count=0,qq,dq,a,q;
	int add_total,fa,dm;
	
	public:
		Departmental_Store(){
			cout<<"Welcome to Our Departmental Store!";
			
		}
		
		void set(){
			cout<<endl;
			cout<<"Enter Code Number =";
			cin>>code_no;
						cout<<endl;
			cout<<"Enter Quantity =";
			cin>>qty;
						cout<<endl;
			cout<<"Enter Price =";
			cin>>price;
		}
	
		void add(){
			
			
			
						cout<<endl;
						cout<<"Enter Your Code Number =";
						cin>>a;
						if(code_no==a){
							cout<<"Enter Quantity to Add =";
							cin>>q;
							count++;
							
						}
						if(count==0){
							cout<<"Cant add,Invalid Code Number!";
						}
			
		}
		void del(){
			cout<<endl;
			cout<<"Enter Code Number to Delte Items =";
			cin>>qq;
			cout<<endl;
			if(qq == code_no){
				cout<<endl;
				cout<<"Enter Quantity to Delete =";
				cin>>dq;
				cnt++;
			}
			if(cnt == 0){
				cout<<endl;
				
				cout<<"Invalid Code Number !";
				cout<<endl;
				
			}
			
		}
				void disp(){
						cout<<endl;
			cout<<"Code Number ="<<code_no;
						cout<<endl;
			cout<<"Quantity ="<<qty;
						cout<<endl;
			cout<<"Total Price ="<<total;
						cout<<endl;
					
		}
		void disp_add(){
				if(count>=1){
					cout<<endl;
					cout<<"Added Items are ="<<count;
					cout<<endl;
							cout<<"Total Price After Adding ="<<add_total;
							cout<<endl;
							cout<<"Added Items are ="<<count;
							cout<<endl;
						}
		
		}
		void disp_del(){
			cout<<endl;
			cout<<"Deleted Items are ="<<cnt;
			dm =(qq*price);
			cout<<endl;
			cout<<"Dedected Amount are ="<<dm;
			cout<<endl;
			fa=total - dm;
			cout<<"Final Amount is ="<<fa;
		}
		
		
			void cal(){
			
			total = price * qty;
			if(count>=1){
					total = price * qty;
				 add_total =(q * price)+total;
			}
			
		}
		

		~Departmental_Store(){
						cout<<endl;
			cout<<"Thankyou For Shopping!";
		}
};
main(){
	
	Departmental_Store a;
	a.set();
	a.cal();
	a.disp();
	int choice ;
	char w;
	cout<<endl;
	

	
	while(1){
		cout<<endl;
		
	cout<<"Press 1 for Add:";
	cout<<endl;
	cout<<"Press 2 for Del:";
	cout<<endl;
	cout<<"Press 3 for Display Add items:";
	cout<<endl;
	cout<<"Press 4 for Display Del items:";
	cout<<endl;
	cout<<"Press 5 for Exit:";

	cin>>choice;
		
//		cin>>choice;
		switch(choice){
			
			case 1:
				a.add();
				break;
			case 2:
				a.del();
				break;
				
			case 3:
				a.cal();
				a.disp_add();
				break;
			case 4:
				a.disp_del();
				break;
			case 5:
				exit(1);
			default:
				cout<<endl;
				cout<<"Enter a Valid Choice !";
		}
		
		
	}
	 
}
