#include<iostream>
using namespace std;
void array(int array[],int len);
main(){
	
	int arrays[]={1,2,3,4,5};
	int length=5;
	
	array(arrays,length);
	
	
	
	
}
void array(int array[],int len){
	
	for(int i=0 ; i<len; i++)
	 cout<<"Array = " << array[i] <<endl;
}
