#include<iostream>
using namespace std;
int main() {
	int m1,m2,m3;
	cout << "Enter 3 marks : \n";cin >> m1>>m2>>m3;
	if ((m1 + m2 + m3) / 3 >= 50)cout << "Passed\n"<<"The average is higher than 50.";
	else cout << "Failed\n"<<"The average is less than 50.";
}