#include<iostream>
using namespace std;

class Invoice
{
	private:
		string number;
		string description;
		int quantity;
		float price;
    public:
    	Invoice()
    	{	
		}
		void setdata(string n,string d, int q,float p)
		{
			number=n;
			description=d;
			quantity=q;
			if(p<0)
			price=0;
			else
			price=p;
		}
		string getnumber()
		{
			return number;
		}
		string getdescription()
		{
			return description;
		}
		int getquantity()
		{
			return quantity;
		}
		float getprice()
		{
			return price;
		}
		float getinvoiceacc()
		{
			if(getquantity()*getprice()<0)
			int c=0;
			else
			return getquantity()*getprice();
		}
			
};
main()
{
	Invoice i;
	i.setdata("Dark","Chocolate",3,10.9);
	cout<<endl<<"The Name of product is: "<<i.getnumber()<<i.getdescription();
	cout<<endl<<"The quantity of product is: "<<i.getquantity();
	cout<<endl<<"The price of single item is: "<<i.getprice();
	cout<<endl<<"The invoice amount is: "<<i.getinvoiceacc();
	
}
