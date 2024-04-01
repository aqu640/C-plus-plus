/*Ch1&2 作業
2.	假設您現在修的科目有計概、C++ 程式設計、微積分、會計學和經濟學，試著將它們取適當的變數名稱，並在宣告時順便給予初值，請計算這五科的總和及平均分數為何？*/
#include <iostream>
using namespace std;
 
int main() {
	int Average_score ;
	int CS = 90 ;/*計概*/
	int programming = 80 ;/*程式設計*/
	int calculus = 70;/*微積分*/
	int Accounting = 60 ;/*會計學*/
	int economics = 50 ;/*經濟學*/
 
	Average_score   = (CS+programming+calculus+Accounting+economics)/5;
 
	cout << "The average scores of these five subjects are " << Average_score << endl;
	return 0;
}

