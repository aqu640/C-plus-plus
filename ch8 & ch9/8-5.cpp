/*作業 8-5 
撰寫一個 C++ 程式，隨機產生 6 個不同的號碼，範圍在 1 到 49 之間。
 
步驟：
1. 設定亂數種子：使用 srand 與 time(NULL) 設定種子，確保每次執行時產生不同的亂數序列。
2. 建立一個用於存儲號碼的陣列：這樣我們可以檢查產生的號碼是否重複。
3. 隨機產生號碼，並檢查是否重複：若重複則重新產生，否則將其加入陣列。
4. 輸出號碼：依序列出 6 個號碼。	*/
 
	/* 【筆記】
	亂數種子設定函式srand()，srand() 不必放入迴圈
	加上 srand(time(NULL))，讓每次產生的亂數不同*/
 
	/*【筆記】取特定範圍的隨機數
	網址:https://andyli.tw/random/
	rand() 會產生介於 0 到 RAND_MAX (2147483647) 之間的整數
	rand()%5  //0~4
	rand()%5+1  //1~5
	rand()%(100-60+1)+60 //60~100
	rand()%(R-L+1)+L
	*/
 
    /* 【筆記】set 初始化用法 set 插入元素用法
    C++11 之後才有
    網址: https://shengyu7697.github.io/std-set/
    set 容器裡面的元素是唯一的，具有不重複的特性，而且是有排序的容器，
    set 容器裡面元素的值是不可修改，但 set 容器可以插入或刪除元素，
    set 的實作方式通常是用紅黑樹(red-black tree)實作的。
    std::set<int> myset;
	myset.insert(1);	*/
 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int MAX_NUMBER = 49;
    const int NUMBERS_TO_GENERATE = 6;
    int lotto_numbers[NUMBERS_TO_GENERATE] = {0}; // 初始化為0

    // 設定亂數種子
    srand(time(NULL));

    // 隨機產生 6 個不同的號碼
    int generated_count = 0;
    while (generated_count < NUMBERS_TO_GENERATE) {
        int random_number = rand() % MAX_NUMBER + 1; //1~49
        // 檢查是否重複
        bool is_duplicate = false;
        for (int i = 0; i < generated_count; i++) {
            if (lotto_numbers[i] == random_number) {
                is_duplicate = true; // 重複
                break;
            }
        }
        // 若不重複，加入陣列
        if (!is_duplicate) {
            lotto_numbers[generated_count] = random_number;
            generated_count++;
        }
    }

    cout << "大樂透號碼: ";
    
    for (int i = 0; i < NUMBERS_TO_GENERATE; ++i) {
        cout << lotto_numbers[i] << " ";
    }
    return 0;
}
