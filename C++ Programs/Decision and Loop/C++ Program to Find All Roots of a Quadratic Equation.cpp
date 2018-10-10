#include<iostream>
#include<cmath>
using namespace std;

main(){
     
	  
	  int b,a,c,x1,x2,des,realnum,imgnum;
	  
	  cout<<"Enter Three Coefficient Numbers = ";
	  cin>>a>>b>>c;
	  des=b*b-4*a*c;
	  
	  if(des>0){
	   	x1=(-b+sqrt(des))/(2*a);
	   	x2=(-b-sqrt(des))/(2*a);
	   	cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
	  	
	  }	
	  else if(des==0){
	  	x1=(-b+sqrt(des))/(2*a);
	  	cout<<"Roots are same and real";
	  	cout<<"x1=x2="<<x1<<endl;
	  }
	   else {
        realnum = -b/(2*a);
        imgnum =sqrt(-des)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realnum << "+" << imgnum << "i" << endl;
        cout << "x2 = " << realnum << "-" << imgnum << "i" << endl;
    }
	
}
