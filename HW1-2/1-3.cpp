/*Ch1&2 作業
3.	若有一宣告敘述如下：
double a2 = 12.345, b2 = 1234.567, c2 = 1.23; 請撰寫一程式，其輸出結果如下*/
 
/*setw(n) :set_width設定寬為n */
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	double a2 = 12.345, b2 = 1234.567, c2 = 1.23 ;
 
	cout << "using fixed and precision" << endl;
	cout << "123456789012345678901234567890" << endl;
	cout << setw(9)<<a2<< setw(9)<<b2<< setw(9)<<c2 << endl;
	cout << setw(9)<<b2<< setw(9)<<c2<< setw(9)<<a2 << endl;
	cout << setw(9)<<c2<< setw(9)<<a2<< setw(9)<<b2 << endl;
	cout <<"\n";
	cout << "using fixed and precision" << endl;
	cout << "123456789012345678901234567890" << endl;
	cout << left << setw(9)<<a2<< setw(9)<<b2<< setw(9)<<c2 << endl;
	cout << left << setw(9)<<b2<< setw(9)<<c2<< setw(9)<<a2 << endl;
	cout << left << setw(9)<<c2<< setw(9)<<a2<< setw(9)<<b2 << endl;
 
	return 0;
}
