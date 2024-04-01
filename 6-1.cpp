#include <iostream>
#include <iomanip>
using namespace std;
//Ch6 作業
//1.  試設計下列二個九九乘法表，其輸出格式如下(1)、(2)所示：
 
int main() { 
	cout <<"(1)" << endl ;
    for(int j = 1; j < 10; j++) {  //j = 1為第一列
        for(int i = 1; i < 10; i++) { 
            cout << j << "*" << i
                	 << "=" << setw(2) << j * i << " ";
        } 
        cout << endl; 
    } 
	cout << "(2)" << endl ;
    for(int j = 1; j < 10; j++) {  //j = 1為第一列
        for(int i = 1; i < 10; i++) { 
            cout << i << "*" << j 
                	 << "=" << setw(2) << i * j << " ";
        } 
        cout << endl; 
    } 
 
    return 0;
}
