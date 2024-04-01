#include <iostream>
#include <iomanip>
using namespace std;
//Ch6 作業
//2.  試撰寫一程式輸出下列圖形(STAR)
 
int main() { 
    for(int j = 1; j < 6; j++) {     // 印1~5行
        for(int i = 0; i < j ; i++) {  // i = 0; j = 1; i < j 印1個星星
        							   // i+1=1，第1行印1個星星
            cout  << " *";
        } 
        cout << endl;  // 跑完 i = 0這個 for loop 後，換行
    } 
 
    for( int j = 4; j >=1; j--) {   // 接著印遞減的 1~4行，也就是6~9行
		 // i = 4;  i >0 印1個星星,  i --, i= 3， 再印1個星星, 第1行共印4個星星，
		 // 直到 i=0 終止
		 // i = 3;  i >0 印1個星星,  i --, i= 2， 再印1個星星, 第2行共印3個星星，
		 // 直到 i=0 終止
        for( int i = j; i >0 ; i--) { 
            cout  << " *";
        } 
        cout << endl; 
    } 
    return 0;
}