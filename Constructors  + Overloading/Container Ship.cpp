//#include <stdafx.h>
#include <iostream>
#include<string>

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
          void getData()
          {
               cout << "Please Enter Name : ";
               getline(cin, name);
               cout << "Please Enter Address : ";
               getline(cin, address);
          }
          void show()
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
          void st ()     
          {
               Person::getData();
               cout << "Please Enter Registration Number : ";
               getline(cin, regNo);
               cout << "Please Enter cgpa : ";
               cin >> cgpa;
               cin.ignore();
          }
          void show()
          {
               Person::show();
               cout << "Registration Number : " << regNo << endl;
               cout << "CGPA : " << cgpa << endl;
          }
};
class Teacher :public Person
{
     string designation;

     public:
          void getData()
          {
               Person::getData();
               cout << "Please Enter Department : " ;
               getline(cin, designation);
          }
          void show()
          {
               Person::show();
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
          void getRecord()
          {
               cout << "***Getting Student Record*** \n\n";
               s.getData();
               cout << "\n***Getting Teacher Record*** \n\n";
               t.getData();
          }
          void showRecord()
          {
               cout << "\n***Student Record*** \n\n";
               s.show();
               cout << "\n***Teacher Record*** \n\n";
               t.show();
          }
};
main()
{
     School sch;
     cout << "\n***School Record*** \n\n";
     sch.showRecord();
}
