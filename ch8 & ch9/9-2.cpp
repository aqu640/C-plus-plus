// Ch9作業  
/*
1. 定義矩陣，並輸入 9 個數值給 3x3的矩陣，
2. 撰寫 add 函式，將 3x3 矩陣傳遞給 add 函式，每個元素+ 1 。
3. 印出原始矩陣和加 1 後的矩陣。
*/
 
// 定義函式時，必須定義傳回值型態，使用 void 表示不傳回任何數值
 
/* 輸入範例
1 2 3 
4 5 6 
7 8 9 */
 
#include <iostream>
using namespace std;
 
// 函式用來對傳入的3x3矩陣的每個元素加1
void add(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {     // 行
        for (int j = 0; j < 3; j++) { // 列
            matrix[i][j]++; // 將元素加1
        }
    }
}
 
int main() {
    // 定義3x3的矩陣
    int matrix[3][3];
 
    cout << "請輸入3x3的矩陣(9個數字，按行輸入，每行輸入3個數字):\n";
    // 讀取使用者輸入的數據填入矩陣
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cin >> matrix[i][j]; // 讀取用戶輸入
        }    
    }
 
    cout << "原始矩陣：\n";    
    // 印出原始矩陣
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cout << matrix[i][j] << " ";    
        }    
        cout << "\n";    
    }
 
    // 將矩陣傳遞給add函式進行加1操作
    add(matrix);
 
    cout << "\n加1後的矩陣：\n";    
    // 印出加1後的矩陣
    for (int i = 0; i < 3; i++) {    
        for (int j = 0; j < 3; j++) {    
            cout << matrix[i][j] << " ";    
        }    
        cout << "\n";    
    }
 
    return 0;
}
