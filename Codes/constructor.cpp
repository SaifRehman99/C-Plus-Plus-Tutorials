#include<iostream>
#include<stdlib.h>
using namespace std;

class tollbooth{
	private:
		int total_vehicles,cars,vans,bikes,total_amount;
	public:
	  tollbooth(){
	  	total_vehicles = 0;
		cars = 0;
		vans = 0;
		bikes = 0;
		total_amount  = 0;
	  }
	  void payingCar()
	  {
	  	 total_vehicles++;
	  	 cars++;
	  	 total_amount+=20;
		  }	
	  void payingVan()
	  {
	  	 total_vehicles++;
	  	 vans++;
	  	 total_amount+=10;
		  }
	  void payingBike()
	  {
	  	 total_vehicles++;
	  	 bikes++;
	  	 total_amount+=5;
		  }
	   void display(){
	   	 cout<<"Total no of Vehicles"<<total_vehicles<<endl;
	   	 cout<<"Total no of Cars"<<cars<<endl;
	   	 cout<<"Total no of Vans"<<vans<<endl;
	   	 cout<<"Total no of Bikes"<<bikes<<endl;
	   	 cout<<"Total Amount"<<total_amount<<endl;	 
	   }  		
};
int main(){
	tollbooth t1;
	int choice;
    char opt;
    do{
    	cout<<"1)Add a car\n2)Add a van\n3)Add a bike\n4) display \nEnter your choice"<<endl;
    	cin>>choice;
    	switch(choice){
    		case 1:
    			t1.payingCar();
    			break;
    		case 2:
    			t1.payingVan();
    			break;
 	        case 3:
    			t1.payingBike();
    			break;
            case 4:
    			t1.display();
    			break;
    		default:
			cout<<"Invalid Choice."<<endl;			
		}
	 cout<<"Do you want to enter again? y/n"<<endl;
	 cin>>opt;	
	}while(opt=='y'||opt == 'Y');
}
