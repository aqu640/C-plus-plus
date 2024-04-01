#include <iostream>
using namespace std;
/*
5-3.	輸入某一整數，判斷它是否為 2 的倍數、或 3 的倍數、或 5 的倍數。
*/

int main() {
	int num;
	cin >> num;
 
	 if(num % 2 == 0 && num % 3 == 0 && num % 5 == 0)
		cout << "num="<< num << "  This number is a multiple of 2, 3 and 5" << endl;
	else if(num % 2 == 0 && num % 3 == 0)
		cout << "num="<< num << "  This number is a multiple of 2 and 3" << endl;
	else if(num % 3 == 0 && num % 5 == 0)
		cout << "num="<< num << "  This number is a multiple of 3 and 5" << endl;
	else if(num % 2 == 0  && num % 5 == 0)
		cout << "num="<< num << "  This number is a multiple of 2 and 5" << endl;
 
	else if(num % 2 == 0)
		cout << "num="<< num << "  This number is a multiple of 2" << endl;
 
	else if(num % 3 == 0)
		cout << "num="<< num << "  This number is a multiple of 3" << endl;
	else if(num % 5 == 0)
		cout << "num="<< num << "  This number is a multiple of 5" << endl;
	else 
		cout << "num="<< num << "  This number is not a multiple of 2, 3 or 5" << endl;  
 
	return 0;
}
