#include<iostream>
using namespace std;
class Account {
	
	private:
		double balance;
	
	public:
	    
		string name;
		int account_number;
		
    void get_balance(double h){
    	balance=h;
	}
		
	void get_input(){
		
		cout<<"Enter Name =";
		cin>>name;
		cout<<"Enter Account Number =";
		cin>>account_number;
	}
	double print_balance(){
		return balance;
	}
	
	void diplay_details(){
		
		
		cout<<name<<endl;
		cout<<account_number<<endl;
		cout<<print_balance()<<endl;
		
		
		
		
	}	
		
};
main(){
    Account a;
    double accblnce;
      
      cout<<"Enter Account Details"<<endl;
      a.get_input();
      cout<<"Enter Your Balance "<<endl;
      cin>>accblnce;
      a.get_balance(accblnce);
      cout<<endl;
      cout<<"Printing Your Details ="<<endl;
      a.diplay_details();
      cout<<endl;
      cout<<"Thankyou!";
	
		
}
