#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string m_make;
    string m_model;
 
public:
    Car(string make, string model): m_make(make), m_model(model)
    {
    	
    }
 
     friend bool operator== (const Car &c1, const Car &c2);
     friend bool operator!= (const Car &c1, const Car &c2);
};

bool operator== (const Car &c1, const Car &c2)
{
    return (c1.m_make== c2.m_make &&
            c1.m_model== c2.m_model);
}
 
bool operator!= (const Car &c1, const Car &c2)
{
    return !(c1== c2);
}
 
int main()
{
    Car corolla ("Toyota", "Corolla");
    Car camry ("Toyota", "Camry");
 
    if (corolla == camry)
        cout << "a Corolla and Camry are the same.\n";
 
    if (corolla != camry )
        cout << "a Corolla and Camry are not the same.\n";
 
    return 0;
}
