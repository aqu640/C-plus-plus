#include <iostream>
using namespace std;
 
/*Ch3&4 作業 (3.)	
提示使用者輸入你的C++平時作業、平時考、期中考、期末考，以及上機測試的分數，
上述的項目的權重分別佔 0.2、0.2、0.25、0.15 及 0.2，
計算你 C++ 語言最後的分數為何？*/
 
 
int main() {
 
    int C_plus;       /* C++ 語言 */
	int quiz;		  /* 平時考 */
	int mid;	      /* 期中考 */
	int final;	      /* 期末考 */
	int on_computer;  /* 上機測試 */
	int scores;	      /* 總成績 */
 
    cout << " 請輸入C++分數:  " << endl;
    cin >> C_plus;
    cout << " 請輸入平時考分數:  " << endl;
    cin >> quiz;
    cout << " 請輸入期中考分數:  " << endl;
    cin >> mid;
    cout << " 請輸入期末考分數:  " << endl;
    cin >> final;
    cout << " 請輸入上機測試分數:  " << endl;
    cin >> on_computer;
 
    scores = 0.2*C_plus + 0.2*quiz + 0.25* mid + 0.15*final + 0.2*on_computer ;
    cout << " 平均分數 = " << scores <<"\n" << endl;
 
	return 0;
}