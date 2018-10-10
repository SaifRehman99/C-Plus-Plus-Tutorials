#include<iostream>
using namespace std;
main(){
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;  // 4 8
     
    while(n1 != n2) //4!=8 // 4!=4
    {
        if(n1 > n2)  
            n1 -= n2; 
        else  
            n2 -= n1;   // 8=8-4=4 
    }

    cout << "HCF = "<<n1;
}	
