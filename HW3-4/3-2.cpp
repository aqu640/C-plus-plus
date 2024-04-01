#include <iostream>
using namespace std;
 
/*Ch3&4 作業 (2.)	輸入下列三個科目的分數，C++ 語言、微積分、計概，
而且每科所佔的權重（weight）為0.4、0.3、0.3，試求其平均分數為何？*/
 
 
int main() {
 
    int C_plus;       /* C++ 語言 */
	int calculus;  /* 微積分 */
	int CS;	       /* 計概 */
	int scores;	       /* 計概 */
 
    cout << " 請輸入C++分數:  " << endl;
    cin >> C_plus;
    cout << " 請輸入微積分分數:  " << endl;
    cin >> calculus;
    cout << " 請輸入計概分數:  " << endl;
    cin >> CS;
 
    scores = 0.4*C_plus + 0.3*calculus + 0.3* CS ;
    cout << " 平均分數 = " << scores <<"\n" << endl;
 
	return 0;
}
