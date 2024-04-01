#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	int a = 1234, b = 12, c = 1234567;
 
	cout << "using width" << endl;
	cout << "123456789012345678901234567890" << endl;
 
	cout.width(9);
	cout << a;
	cout.width(9);
	cout << b;
	cout.width(9);
	cout << c << endl;
 
	cout.width(9);
	cout << b;
	cout.width(9);
	cout << c;
	cout.width(9);
	cout << a << endl;
 
	cout.width(9);
	cout << c;
	cout.width(9);
	cout << a;
	cout.width(9);
	cout << b << endl;
	cout <<"\n";
 
	cout << "using left width" << endl;
	cout << "123456789012345678901234567890" << endl;
 
	cout.width(9);
	cout <<left << a;
	cout.width(9);
	cout <<left << b;
	cout.width(9);
	cout <<left << c << endl;
 
	cout.width(9);
	cout <<left << b;
	cout.width(9);
	cout <<left << c;
	cout.width(9);
	cout <<left << a << endl;
 
	cout.width(9);
	cout <<left << c;
	cout.width(9);
	cout <<left << a;
	cout.width(9);
	cout <<left << b << endl;
	return 0;
}
