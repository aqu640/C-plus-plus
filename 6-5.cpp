/* Ch6 作業
 (5.) 求1~100的偶数和
 1、利用 for loop 循環相加
 2、判斷是否為偶数, 除2是否為0
 3、如果為奇數就跳過,偶數則累加 */
 
#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum += 1;//如果偶數則累加
		}
		else
		{
		continue;//如果為奇数,跳出本次迴圈(當作本次迴圈已經執行完畢)，重回到迴圈的條件式判斷
		}
 
	}		
	cout << "1~100的偶數累加和是" << sum <<endl;
} 