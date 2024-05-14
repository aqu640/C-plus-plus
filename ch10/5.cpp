// C++ program to convert binary to decimal 二進位到十進制
/*
輸入： 111
輸出： 7    (1*1 + 1*2 + 1*4)
輸入： 1010
輸出： 10
輸入： 100001
輸出： 33
*/
#include <iostream>
using namespace std;
 
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
 
    	// cout << "last_digit=" << last_digit << endl;
        temp = temp / 10;
		// cout << "temp=" << temp << endl;
 
        dec_value += last_digit * base;
 
    	// cout << "base=" << base << endl;
 		// cout << "dec_value = base*last_digit = " << dec_value << endl;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
int main()
{
    int num ;
	cin >> num ;
    cout << binaryToDecimal(num) << endl;
}
 
