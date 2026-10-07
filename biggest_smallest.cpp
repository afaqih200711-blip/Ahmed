#include<iostream>
using namespace std;
int main()
{ int a,s,d;
cout<<"Enter 3 numbers : ";
cin>>a>>s>>d;
if (a>s&&a>d) cout<<"The biggest number is : "<<a<<endl;
else if (s>d) cout<<"The biggest number is : "<<s<<endl;
else cout<<"The biggest number is : "<<d<<endl;
if (a<s&&a<d) cout<<"The smallest number is : "<<a<<endl;
else if (s<d) cout<<"The smallest number is : "<<s<<endl;
else cout<<"The smallest number is : "<<d<<endl;
}