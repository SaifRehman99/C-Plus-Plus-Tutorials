#include<iostream>
#include<conio.h>
using namespace std;
class Table
{
 private:
  int len,num;
  public:
   void set_num(int tab)
   {
    num=tab;
   }

   void set_len(int length)
   {
    len=length;
   }
   void display_tab()
   {
    cout<<"The table of "<<num<<"\n8"<<endl;
    for(int i=1;i<=len;i++)
    cout<<num<<"*"<<i<<"="<<num*i<<endl;
   }
   };
int main()
{
 Table bob;
 int n,l;
 cout<<"Enter a number to display its table\n";
 cin>>n;
 cout<<"Enter a number which specify the length of table\n";
 cin>>l;
 bob.set_num(n);
 bob.set_len(l);
 bob.display_tab();
 getch();
 return 0;
}
