#include<iostream>
using namespace std;
class Sales
{
	private:
		int saleID,Quantity;
		string Item_name;
	public:
		Sales()
		{
			saleID=1;
			Quantity=1;
			Item_name="perfume";
			
		}
		Sales(int x)
		{
			int s,q;
        	string i;
        	cout<<"ENTER THE SALEID,QUANTITY AND ITEMNAME"<<endl;
	        cin>>s>>q>>i;
	        cout<<"THE CONSTRUCTOR IS:"<<endl;
         	cout<<"saleID="<<s<<endl;
	        cout<<"Quantity="<<q<<endl;
         	cout<<"Item_name="<<i<<endl;
			
		}
		Sales(int ss,int qq,string ii)
		{
			saleID=ss;
			Quantity=qq;
			Item_name=ii;
		}
		Sales(const Sales &obj)
		{
			saleID=obj.saleID;
			Quantity=obj.Quantity;
			Item_name=obj.Item_name;
		}
		int getQuantity()
		{
			return Quantity;
		}
		int getsaleID()
		{
			return saleID;
		}	
		string getItem_name()
		{
			return Item_name;
		}
};

main()
{
	Sales s1;
	cout<<"THE DEFAULT CONSTRUCTOR IS:"<<endl;
	cout<<"saleID="<<s1.getQuantity()<<endl;
	cout<<"Quantity="<<s1.getsaleID()<<endl;
	cout<<"Item_name="<<s1.getItem_name()<<endl;
	
    Sales s3(456,3,"chocolate");
    cout<<"THE PARAMETERIZED CONSTRUCTOR IS:"<<endl;
	cout<<"saleID="<<s3.getQuantity()<<endl;
	cout<<"Quantity="<<s3.getsaleID()<<endl;
	cout<<"Item_name="<<s3.getItem_name()<<endl;
	
	Sales s4(s3);
	cout<<"THE COLONE CONSTRUCTOR IS:"<<endl;
	cout<<"saleID="<<s4.getQuantity()<<endl;
	cout<<"Quantity="<<s4.getsaleID()<<endl;
	cout<<"Item_name="<<s4.getItem_name()<<endl;
	
	Sales s2(0);
	return 0;
}
