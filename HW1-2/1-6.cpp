#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
	string a,b,c;
    double A,B,C;
 
 
    cout << " 請輸入第一科科目名稱和成績:  " << endl;
    cin >> a>>A;
    cout << " 請輸入第二科科目名稱和成績:  " << endl;
    cin >> b>>B;    
    cout << " 請輸入第三個科目和成績:  " << endl;
    cin >> c>>C;
 
 
    cin >> a >>A >> b>>B >> c>>C ;
 
	cout.width(15);
    cout <<  left <<a ;
    cout.width(15);
    cout <<  left <<A ;
    cout<<"\n";
 
    cout.width(15);
    cout <<  left <<b ;
    cout.width(15);
    cout <<  left <<B ;
    cout<<"\n";
 
    cout.width(15);
    cout <<  left << c ;
    cout.width(15);
    cout <<  left <<C ;
    cout<<"\n";
 
	return 0;
}


