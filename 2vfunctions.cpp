#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int x;float a, b;
	do {
		system("cls");

		cout << "1.add" << endl;
		cout << "2.sub" << endl;
		cout << "3.mul" << endl;
		cout << "4.div" << endl;
		cout << "0.exit" << endl;
		cout << "Enter your choice (1-2-3-4-0) : ";
		cin >> x;
		if (x == 0) exit(0);
		cout << "Enter two values : ";
		cin >> a >> b;
		switch (x) {
		case 1:cout << a << '+' << b <<'='<< a + b << endl;break;
		case 2:cout << a << '-' << b <<'='<< a - b << endl;break;
		case 3:cout << a << '*' << b <<'='<< a * b << endl;break;
		case 4:cout << a << '/' << b <<'='<< a / b << endl;break;
		default: cout << "Unvalid value . \n";
		}system("pause");

    	} while (1);

}
