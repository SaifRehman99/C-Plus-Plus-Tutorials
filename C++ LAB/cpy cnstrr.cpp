#include <iostream>
using namespace std;
class oneD {
       
	   private:
            int i;
        public:
		    
// simple constructor
oneD ( int len ){
cout << "Normal constructor allocating i" << endl;
i = len;
}
void displayy(){
	cout<<i;
}

// copy constructor
oneD (oneD &obj)
{
cout << "Copy constructor allocating i" << endl;
i = obj.i; // copy the value
}
// destructor
~ oneD (){
cout << "Freeing memory!" << endl;
}

int getLength(){
	   return i;
	   }

};
void display(oneD obj) {
cout << "Length of line : " << obj.getLength() <<endl;
}

main() {
 oneD a(10);
 oneD b=a;
 display(a);// This also calls copy constructor
 display(b);

}