#include <iostream>
using namespace std;
 
int main() {
	string a;
    string b;
    string c;
    string num;
 
    cout << " 請輸入學號:  " << endl;
    cin >> num;
    cout << " C++平時考成績:  " << endl;
    cin >> a;    
    cout << " C++期中考成績:  " << endl;
    cin >> b;
    cout << " C++期末考成績 : " << endl;
    cin >> c;
 
    cin >> a >> b >> c ;
 
    cout << " 學號: " << num <<"\n";
    cout << " 平時考: " << a <<"\n";
    cout << " 期中考: " << b <<"\n";
    cout << " 期末考: " << c << "\n" << endl;
	return 0;
}
