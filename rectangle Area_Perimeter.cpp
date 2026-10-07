#include<iostream>
using namespace std;
int main()
{int L= 0,W= 0;
 cout<<"Enter the length of the rectangle : ";
cin>>L;
cout <<"Enter the width of the rectangle : ";
cin>>W;
int Area =0;
Area = L*W;
int Perimeter=0;
Perimeter = 2*(L+W);
cout<<"\033[33mArea = "<<Area<<endl;
cout<<"Perimeter = "<<Perimeter<<endl;
return 0;
}