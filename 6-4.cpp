//Ch6 作業
//4.  利用某一迴圈敘述輸入 20 個整數，計算輸入的整數中有多少個奇數，有多少個偶數。
 
#include <iostream>
using namespace std;
 
int main() {
	int num=0, odd=0, even=0;
	for(num=0; num<=20; num++)
	{
		if(num %2 == 0) //if else 超過2行需+{ }
		{
			even = num;
			cout << even << " is even"  << endl;
		}
		else
		{
			odd = num;
			cout << odd << " is odd"  << endl;
		}
 
	}
		return 0;
}