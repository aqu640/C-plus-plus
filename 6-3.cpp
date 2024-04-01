/*
 Ch6 作業
 3.  利用 while、do...while 以及 for 迴圈，計算 1+2+3+...+100
 Calculate the sum of the integers from 1 to 100*/
 
#include <iostream>
using namespace::std;
 
int main()
{
   // using While Loop 
   int while_sum = 0, x = 1;
   while ( x < 101 ) 
   {
      while_sum = while_sum + x; //sum += x; 
      x++; 
   } 
 
   cout << "using while \n" << "The sum is: " << while_sum << "\n" <<endl;
 
// using For Loop   
{
    int for_sum = 0, a;
    for (a = 1; a <= 100; a++)
    {
        for_sum = for_sum + a;
    }
   cout << "using for \n" << "The sum is: " << for_sum << "\n"  << endl;
}
 
// using do_while
{
	int a = 1, do_while_sum = 0;
    {
        do{
            do_while_sum += a;
            a++;
        }
            while (a <= 100);	
	}
    cout << "using do while \n" << "The sum is: " << do_while_sum << "\n"  << endl;
    return 0; 
} 
}

