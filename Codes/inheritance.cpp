#include<iostream>
#include<string>

using namespace std;

class publication
{
	private:
		string title;
		float price;
	public:
		void get()
		{
			cout<<"enter the title"<<endl;
			cin>>title;
			cout<<"enter price"<<endl;
			cin>>price;
		}
		void put()
		{
			cout<<"title  "<<title<<endl;
		    cout<<"price  "<<price<<endl;
		}
};
class Book: private publication
{
	private:
		int pageCount;
	public:
		void getData()
		{
			get();
			cout<<"enter page count"<<endl;
			cin>>pageCount;
		}
		void putData()
		{
			put();
			cout<<"page count: "<<pageCount<<endl;
		}
};
class Tape: private publication
{
	private:
		float mins;
	public:
		void getData()
		{
			get();
			cout<<"enter mins"<<endl;
			cin>>mins;
		}
		void putData()
		{
			put();
			cout<<"mins: "<<mins<<endl;
		}
};
int main()
{
	Book book1;
	Tape tape1;
	tape1.getData();
	book1.getData();
	tape1.putData();
	book1.putData();
	book1.get();
}
