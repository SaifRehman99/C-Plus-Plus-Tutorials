#include<iostream>
using namespace std;
main(){
	
	int a[5];
	int *p;
	p=a;
	*p=10;
     p++;
     *p=29;
      p=&a[2];
      *p=34;
      p=&a[3];
      *p=354;
      p=&a[4];
      *p=90;
      p=&a[5];
      *p=67;
	  for(int i=0;i<=5;i++){
	  	cout<<a[i]<<", ";
	  }	  	  	
}
