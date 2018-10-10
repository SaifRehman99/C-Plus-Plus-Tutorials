#include <iostream>
using namespace std;
void Converter1(int num)
{
switch(num)
{
 case 1: cout<<"One ";
         break;
 case 2: cout<<"Two ";
         break;
 case 3: cout<<"Three ";
         break;
 case 4: cout<<"Four ";
         break;
 case 5: cout<<"Five ";
         break;
 case 6: cout<<"Six ";
         break;
 case 7: cout<<"Seven ";
         break;
 case 8: cout<<"Eight ";
         break;
 case 9: cout<<"Nine ";
         break;
 case 10: cout<<"Ten ";
         break;
 case 11: cout<<"Eleven ";
         break;
 case 12: cout<<"Twelve ";
         break;
 case 13: cout<<"Thirteen ";
         break;
 case 14: cout<<"Fourteen ";
         break;
 case 15: cout<<"Fifteen ";
         break;
 case 16: cout<<"Sixteen ";
         break;
 case 17: cout<<"Seventeen ";
         break;
 case 18: cout<<"Eighteen ";
         break;
 case 19: cout<<"Nineteen ";
         break;
}
return;
}

void Converter2(int num)
{
if(num>=90)
 {
 cout<<"Ninety ";
 Converter1(num-90);
 }
else if(num>=80)
 {
 cout<<"Eighty ";
 Converter1(num-80);
 }
else if(num>=70)
 {
 cout<<"Seventy ";
 Converter1(num-70);
 }
else if(num>=60)
 {
 cout<<"Sixty ";
Converter1(num-60);
 }
else if(num>=50)
 {
 cout<<"Fifty ";
 Converter1(num-50);
 }
else if(num>=40)
 {
 cout<<"Fourty ";
 Converter1(num-40);
 }
else if(num>=30)
 {
 cout<<"Thirty ";
 Converter1(num-30);
 }
else if(num>=20)
 {
 cout<<"Twenty ";
 Converter1(num-20);
 }
else
   Converter1(num);
}

int main()
{
  
  int number,temp,digit,digits=0,last_two=0,hundred=0;

  cout<<"Enter a number";
  cin>>number;

  if(number>999)
  {
    cout<<"Number out of range!";
  }

  if(number==0)
  {
   cout<<"Zero"; 
  }

  temp=number;

  while(temp!=0)               
  {
    temp=temp/10;
    digits++;
  }

  digit=number%10;                   
  last_two=digit;
  number=number/10;
  digit=number%10;
  last_two=(digit*10)+last_two;

  number=number/10;                  
  digit=number%10;
  hundred=digit;
  cout<<"The number in words is:";
  if(digits>=3)
  {
    if(hundred!=0)
    {
      Converter2(hundred);
      cout<<"Hundred ";
    }
  }
  Converter2(last_two);
}
