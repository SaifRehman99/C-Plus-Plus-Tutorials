//#include <stdio.h>
#include <iostream>
 using namespace std;  
 void draw_solid_line(int size); 
 void draw_hollow_line(int size); 
 void draw_rectangle(int len, int wide); 
 char symbol;
int main(void)
 {     int length,width;
         cout<<"Enter length and width of rectangle >";   
		 cin>>length;
		 cin>>width;
		 cout<<"Enter the symbol";    
		 cin>>symbol; 
		 draw_rectangle(length, width);      
      return 0;
 } 
      
void draw_solid_line(int size)
{      
  for(int i=1;i<=size;i++)
   {
	cout<<symbol;
   }
    cout<<endl;   
} 
void draw_hollow_line(int size) 
{      
   for(int i=1;i<=size;i++)
  {
	if(i==1 || i==size)
	  {
	  	cout<<symbol;
	  }
	else
	   cout<<" ";
  }
cout<<endl;
}
 void draw_rectangle(int len, int wide)
{      int i;    
    draw_solid_line(wide); 
	     if (len > 2) 
		 {  for (i=1; i<=len - 2; i++)  
		     draw_hollow_line(wide);     
			 
		 }     
    draw_solid_line(wide);
 } 
