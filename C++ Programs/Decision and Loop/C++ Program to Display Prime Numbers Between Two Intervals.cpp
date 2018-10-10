#include<iostream>
using namespace std;
main(){
     
	 int x1,x2,temp,i,flag;
	 
	 cout<<"Enter Two Numbers =";
	 cin>>x1>>x2;
	 
	 if(x1>x2){
	 	temp=x1;
	 	x1=x2;
	 	x2=temp;
	 }	
	 while(x1<x2){
	 	flag=0;
	 	  
	 	  for(i=2;i<=x1-1;i++){
	 	  	if(x1%i==0){
	 	  	flag=1;
	 	  	break;
			   }
		   }
		   
	 	if(flag==0)
	 	cout<<"Prime Numbers between "<<x1<<" "<< x2<<" "<<"is"<<" "<<x1<<endl;
	 	x1++;
	 }
}
//    while (low < high)
//    {
//        flag = 0;
//
//        for(int i = 2; i <= low/2; ++i)
//        {
//            if(low % i == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//            cout << low << " ";
//
//        ++low;
//    }
//    return 0;
//}
//
//	 	    
//	 	    
//	 }
//  	
//	
//}

