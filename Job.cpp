#include<iostream>
#include<cmath>
using namespace std;
int main() { 
int age=0;
string a;
cout<<"Enter your age : ";
cin>>age;
cout<<"Do you have a driver licence (yes/no): ";
cin>>a;
if (age>=21 && a=="yes") cout<<"Hired"<<endl;
else cout<<"Cannot be hired";
return 0;
}