/*將第8章8-4節的應用範例，
插入排序改以函式呼叫的方式撰寫之，
我們可以將欲排序陣列送到insertionSort() 的函式，
此函式的任務與本章的選擇排序 selectionSort() 函式類似。*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
 
#define SIZE 10
 
void insertionSort(int *arr, int size);
void list(int *arr, int size); // 指標宣告不給值，之後才給值
 
int main() {
    int ary[SIZE];
    srand(unsigned(time(NULL)));
 
    // 生成隨機陣列
    for (int i = 0; i < SIZE; i++)
        ary[i] = rand() % 100 + 1;
 
    // 顯示初始陣列
    std::cout << "Original Array:\n";
    list(ary, SIZE);
 
    // 插入排序
    insertionSort(ary, SIZE);
 
    // 顯示排序後的陣列
    std::cout << "\nSorted Array:\n";
    list(ary, SIZE);
 
    return 0;
}
 
void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
 
        // 移動較大的元素
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
 
        // 插入新的元素
        arr[j + 1] = temp;
 
        // 印出排序的每一步
        std::cout << "#" << i << " step: ";
        list(arr, i + 1); // 顯示已排序的部分
    }
}
 
void list(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(4) << arr[i];
    }
    std::cout << std::endl;
}


/* 插入排序程式碼 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SIZE 10

int main()
{
    int ary[SIZE];
    int i,j;
    int temp;

    srand(unsigned(time(NULL)));
    for (i=0; i<SIZE; i++)
        ary[i] = rand() % 100 + 1;
        
    cout << "Original Array ..." << endl;
    for (i=0; i<SIZE; i++) {
        cout << setw(4) << ary[i];
    }
    cout << endl << endl;
    
    //Insertion Sorting
    cout << "sorting..." << endl;
    for (i=1; i<SIZE; i++) {
        temp = ary[i];
        for (j=i; ary[j-1]>=temp; j--)
            ary[j] = ary[j-1];
        ary[j] = temp;

        //印出每一步驟
        cout << "#" << i << " step: ";
        for (int k=0; k<=i; k++) {
            cout << setw(4) << ary[k];
        }
        cout << endl;
    }

    cout << "\nSorted Array ..." << endl;
    for (i=0; i<SIZE; i++) {
        cout << setw(4) << ary[i];
    }
    cout << endl;
    
    return 0;
}
*/


/*
使用函式撰寫的選擇排序參考程式碼如下:
//selectionSort.cpp
#include <iostream>
#include <iomanip>
using namespace std;

#define N 10
void list(int *);
void swap(int *, int *);
void selectionSort(int *);

int main()
{
    int i,arr[N];
    srand(unsigned(time(NULL)));
    for (i=0; i<N; i++)
        arr[i] = rand() % 100 + 1;
          
    cout << "\nSource array ...\n";
    list(arr);
       
    selectionSort(arr);
    cout << "Sorting ...\n";
    list(arr);

    return 0;
}

void list(int *array)
{
    int i;
   
    for (i=0; i<N; i++) {
        cout << setw(5) << array[i];
        if (((i+1) % 5) == 0)
            cout << endl;
    }
    cout << endl;
}
     
void swap(int *i, int *j)
{
    int temp;
    
    temp = *i;
    *i = *j;
    *j = temp;
}
    
void selectionSort(int *arr2)
{
    int i, j, min;
     
    for (i=0; i<N; i++) {
        min = i;
        for (j=i; j<N; j++)
            if (arr2[j] < arr2[min])
                min = j;
        swap(&arr2[min], &arr2[i]);
    }
}

*/ 
