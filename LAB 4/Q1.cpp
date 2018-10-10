#include<iostream>
using namespace std;
class shopping{
	private:
		int price[20],quantity[20],code[20],total[20],m,final_p;
	
	public:
		shopping()
		{
		}
		void setdata(int p,int q,int c)
		{
			price[m]=p;
			quantity[m]=q;
			code[m]=c;
		}
		void addingitem()
		{
			m++;
			int cc,qq,pp,count=0;
			cout<<"ENTER THE CODE OF ITEM";
			cin>>cc;
			for(int i=0;i<m;i++)
			{
				if(cc==code[i])
				{
					cout<<"ENTER THE QUANTITY";
					cin>>qq;
					quantity[i]=quantity[i]+qq;
					count++;
				}
			}
			if(count==0)
			{
				cout<<"ENETR THE PRICE AND QUANTITY";
				cin>>pp>>qq;
			
			    quantity[m]=qq;
			    code[m]=cc;
			    price[m]=pp;
			}
		}
		void totalprice()
		{
			
			for(int i=0;i<=m;i++)
			{
				total[i]=quantity[i]*price[i];
			}
		}
		void deletingitem()
		{
			int item,code_dlt;
			cout<<"ENTER THE CODE TO DELETE";
			cin>>code_dlt;
			for(int i=0;i<=m;i++)
			{
				if(code[i]==code_dlt)
				{
					cout<<"HOW MANY ITEM TO DELETE?";
					cin>>item;
					if(quantity[i]==item)
					{
						code[i]=0;
						price[i]=0;
						quantity[i]=0;
						total[i]=0;
						cout<<endl<<"ITEM DELETED";
						break;
					}
					else
					quantity[i]=quantity[i]-item;
					cout<<endl<<"ITEM DELETED";
				}
			}
		}
		
		int finalprice()
		{
			for(int i=0;i<=m;i++)
			{
			if(total>0)
			{
				final_p=final_p+total[i];
			}
		    }
		    return final_p;
		}
		void shoppinglist()
		{
			cout<<endl<<"*******SHOPPING LIST********";
			cout<<endl<<"CODE\t  QUANTITY\t  PRICE\t    TOTAL";
			for(int i=0;i<=m;i++)
			{
				cout<<code[i]<<"\t\t"<<quantity[i]<<"\t\t"<<price[i]<<"\t"<<total[i]<<endl;
			}
		}
		~shopping()
		{
		   cout<<endl<<"THANKS FOR SHOPPING :)";	
		}
};
main()
{
	shopping s;
	int q,p,c,op;
	cout<<"ENTER THE CODE,PRICE AND QUANTITY OF AN ITEM";
	cin>>c>>p>>q;
	s.setdata(p,q,c);
	s.totalprice();
	cout<<"WHICH OPTION YOU WANT TO PERFORM"<<endl;
	cout<<"PRESS 1 FOR ADD..."<<endl<<"PRESS 2 FOR DELETE..."<<endl<<"PRESS 3 FOR EXIT...";
	cin>>op;
	while(op!=3)
	{
		switch(op)
		{
		case 1:
			{
				s.addingitem();
				break;
			}
		case 2:
			{
		    	s.deletingitem();
		    	break;
			}
		case 3:
			{
				cout<<"EXIT...";
				break;
			}
	    }
    cout<<"PRESS 1 FOR ADD..."<<endl<<"PRESS 2 FOR DELETE..."<<endl<<"PRESS 3 FOR EXIT...";
	cin>>op;
	}
	s.totalprice();
	s.shoppinglist();
	cout<<"TOTAL AMOUNT OF SHOPPING:"<<s.finalprice();
}
