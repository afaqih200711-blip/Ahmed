#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Enter a positive value : ";
	cin >> x;
	cout << "The positive even numbers under this are : " << endl;

		for(int i=2;i<x;i+=2)
		{
			cout << i << endl;
			}
}