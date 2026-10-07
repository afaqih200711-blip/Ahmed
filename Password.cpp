#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int ps=123,i=0, x;
	do {
		cout << "Enter the password : " << endl;
		cin >> x;i++;
		if (i > 4) exit(0);
	} while (x != ps);
	cout << endl << "welcome" ;
}