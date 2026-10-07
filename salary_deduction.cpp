#include<iostream>
using namespace std ;
int main()
{ int sal,abs,one,two,three; 
cout<<"Enter your salary : ";cin>>sal;
cout<<"Enter absence days : ";cin>>abs;
one=sal-500,two=sal-2000,three=sal-3000; //dedcution from the salary
if (abs==1) cout<<"500 is deducted : "<<one;
else if (abs==2) cout<<"2000 is deducted : "<<two;
else if (abs==3) cout<<"3000 is deducted : "<<three;
else if (abs>3) cout<<"your salary is suspended.";
return 0;
}