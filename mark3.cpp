#include<iostream>
using namespace std;
int main() {
float a;
cout<<"Enter your mark : "<<endl;
cin>>a;
string x;
x = (a<=100&&a>=90)?"excellent"
:(a<=89&&a>=80)?"Very good"
:(a<=79&&a>=65)?"Good"
:(a<=64&&a>=50)?"accepted"
:(a<=49&&a>=0)?"Failed"
:"Error";
cout<<"mark : "<<x<<endl;
}

