#include <iostream>
using namespace std;
/*
* ISBN-13是識別圖書的新標準。
* 它使用 13 位數字 d1d2d3d4d5d6d7d8d9d10d11d12d13。 最後一位 d13 是檢查碼，
 
  * 使用以下公式從其他數字計算得出：
 
  * 10-(d1 +3d2 +d3 +3d4 +d5 +3d6 +d7 +3d8 +d9 +3d10 +d11 +3d12)%10
 
  * 如果校驗和為 10，則將其替換為 0。
* 10-(d1 +3d2 +d3 +3d4 +d5 +3d6 +d7 +3d8 +d9 +3d10 +d11 +3d12)%10
*/
int main() {
    string input;
    cout << "請輸入前九個數字：";
    cin >> input;
 
    // 檢查輸入是否有效
    if (input.length() != 9) {
        cout << "無效輸入" << endl;
        return 0;
    }
 
    int checkSum = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((i + 1) % 2 == 0) {
            checkSum += (input[i] - '0') * 3;
        } else {
            checkSum += input[i] - '0';
        }
    }
 
    checkSum %= 10;
    checkSum = 10 - checkSum;
    if (checkSum == 10) 
		input = '0';
    else 
    {
    	input += to_string(checkSum);
	}

 
    // 顯示結果
    cout << "ISBN-13 碼為：" << input << endl;
 
    return 0;
}

