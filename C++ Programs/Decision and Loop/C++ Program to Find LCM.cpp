#include<iostream>
using namespace std;
main (){
	    
	    int x1,x2,lcm,max;
	    
	    cout<<"Enter Two Numbers = ";
	    cin>>x1>>x2; // 12 18
	    
	    max=(x1>x2)?x1:x2; // max=18
	    
	    do{
	    	if(max%x1==0 && max%x2==0){ // 18%12,18%18==0 xx
	    		cout<<"LCM =" <<max;
	    		break;
			}
			else
			max++;
		}while(true);
	
	
}
