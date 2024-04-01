#include <iostream>
using namespace std;
 
/*Ch3&4 作業 (1.)攝氏至華氏換算*/
/*華氏溫度= 9/5*(攝氏溫度)+32*/
 
int main() {
 
    int Celsius;    /* 攝氏 */
	int Fahrenheit; /* 華氏 */
 
    cout << " 請輸入攝氏溫度:  " << endl;
    cin >> Celsius;
    Fahrenheit = 9*Celsius/5+32;
    cout << " 華氏溫度= " << Fahrenheit <<"\n" << endl;
 
	return 0;
}
