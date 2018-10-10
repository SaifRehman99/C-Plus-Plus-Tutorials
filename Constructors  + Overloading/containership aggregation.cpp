#include "iostream"
#include"string"
using namespace std;
class Person
{
     protected:
          string name;
          string address;
     public:
          Person()
          {
               name ="";
               address = "";
          }
          void getdata()
          {
               cout << "Please Enter Name : ";
               getline(cin, name);
               cout << "Please Enter Address : ";
               getline(cin, address);
          }
          void showdata()
          {
               cout << "Name : " << name << endl;
               cout << "Address : " << address << endl;
          }
};

class Student : public Person
{
     protected:
          string regNo;
          float cgpa;
     public:     
          void getdata()     
          {
               Person::getdata();
               cout << "Please Enter Registration Number : ";
               getline(cin, regNo);
               cout << "Please Enter cgpa : ";
               cin >> cgpa;
              // cin.ignore();
          }
          void showdata()
          {
               Person::showdata();
               cout << "Registration Number : " << regNo << endl;
               cout << "CGPA : " << cgpa << endl;
          }
};
class Teacher :public Person
{
     string designation;

     public:
          void getdata()
          {
               Person::getdata();
               cout << "Please Enter Department : " ;
               getline(cin, designation);
          }
          void showdata()
          {
               Person::showdata();
               cout << "Designation : " << designation << endl;
          }
};
class School
{
     /* Creating Objects of student and teacher class. 
        As Students and teachers are part of school. */
     Student s;
     Teacher t;
     
     public:
          void getdata()
          {
               cout << "***Getting Student Record*** \n\n";
               s.getdata();
               cout << "\n***Getting Teacher Record*** \n\n";
               t.getdata();
          }
          void showdata()
          {
               cout << "\n***Student Record*** \n\n";
               s.showdata();
               cout << "\n***Teacher Record*** \n\n";
               t.showdata();
          }
};
main()
{
     School sch;
     cout << "\n***School Record*** \n\n";
     sch.getdata();
     sch.showdata();
}
