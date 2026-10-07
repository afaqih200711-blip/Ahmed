#include<iostream>
using namespace std;
int main() {
float mark;
cout<<"Enter your mark : "<<endl;
cin>>mark;
if(mark>=90&&mark<=100)cout<<"Excellent";
else if(mark>=80&&mark<=89)cout<<"Very good";
else if(mark>=65&&mark<=79)cout<<"Good";
else if(mark>=50&&mark<=64)cout<<"Accepted";
else if(mark>=0&&mark<=49)cout<<"Failed";
else cout<<"Error";
return 0;
/*cout<<"Enter your mark : "<<endl;cin>>mark;
if(mark<=100){if(mark>=90)cout<<"Excellent";}
else if(mark<=89){
if(mark>=80)
cout<<"Very good";
}
else if(mark<=79){
if(mark>=65)
cout<<"Good";
}
else if(mark<=64){
if(mark>=50)
cout<<"Accepted";
}
else if(mark<=49){
if(mark>=0)cout<<"Failed";
}
else
 cout<<"Error";
return 0;*/
}
