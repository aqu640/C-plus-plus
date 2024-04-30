/* 作業 8-1 
氣泡排序（bubble sort）
將相鄰的資料兩兩相比，
將下列資料由小至大排序之，
假設有五個資料分別為 18, 2, 20, 34, 12*/ 

#include <cassert>
#include <cstddef>
#include <iostream>
using namespace std;
 
int main() {
	int A[] = {18, 2, 20, 34, 12}; 
	int i, j, tmp;
	int n = sizeof(A)/sizeof(int);  //sizeof(int) = 4, int 的大小是 4 bytes, sizeof(A) = 20, 可得 length of A
	for(i = n-1; i > 0; i--) // 最多交換4 次
	{
	    for(j = 0; j <= i-1; j++)
	    {
	        if( A[j] > A[j+1])
	        {
	            tmp = A [j];
	            A[j] = A[j+1];
	            A[j+1] = tmp;
	        }
	    }
	}
    for (size_t i = 0; i < 5; i++) {
        cout << A[i] << endl;
    }
	return 0;
}



