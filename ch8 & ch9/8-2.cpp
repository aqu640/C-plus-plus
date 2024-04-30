// 作業 8-2 輸入學生 C++ 期中考選擇題的答案，並與標準答案對照，計算答對和答錯的題數，試撰寫一程式執行之(你可以假設題目有>5題，並且用陣列儲存標準答案)。
  

// vector參考網址:https://www.796t.com/content/1546920554.html
/*
1. 輸入選擇題的數量
2. 建立標準答案和學生答案的陣列
3. 輸入標準答案與學生選擇題的答案
4. 與標準答案進行對比，計算答對和答錯的題數。
5. 輸出答對和答錯的題數
假設有至少5個問題，並且使用陣列來存儲答案*/
 
/* 程式輸入的範例
10
A B C D E A B C D E
A B C E E A C C D F*/
 
#include <iostream>
#include <vector> // 引入vector以使用動態陣列
using namespace std;
 
int main() {
    // 輸入選擇題的數量
    int n; // 題目數量
    cout << "請輸入題目的數量：";
    cin >> n;
 
    // 建立標準答案和學生答案的陣列
    // vector <A> B;// A 是資料結構，B 是動態陣列名
    vector<char> answers(n); // 標準答案
    vector<char> studentAnswers(n); // 學生答案
 
    // 輸入標準答案
    cout << "請輸入標準答案（每個答案用空格隔開）：";
    for (int i = 0; i < n; i++) {
        cin >> answers[i];
    }
 
    // 輸入學生答案
    cout << "請輸入學生答案（每個答案用空格隔開）：";
    for (int i = 0; i < n; i++) {
        cin >> studentAnswers[i];
    }
 
    // 初始化計算答對和答錯的題數
    int correct = 0; // 答對的題數
    int wrong = 0; // 答錯的題數
 
    for (int i = 0; i < n; i++) { // 檢查每一題的答案是否正確
        if (answers[i] == studentAnswers[i]) { // 如果標準答案和學生答案相同
            correct++; // 答對
        } else {
            wrong++; // 答錯
        }
    }
 
    // 輸出答對和答錯的題數
    cout << endl << "答對的題數: " << correct << endl;
    cout << "答錯的題數: " << wrong << endl;
 
    return 0; // 結束程式
}

