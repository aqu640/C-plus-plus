//ch6 6.判斷輸入的整數是否為質數（prime number）
 
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    for (int Enter_integers=0; Enter_integers<6; Enter_integers++)
    {
	    int number,flag = 0;
	    cout<<"Please enter a number:";
	    cin >> number;
	    for(int i=2;i<number;i++)
	    {
	        flag = (number%i == 0)?1:0;
	        if(flag == 1)
	            break;        
 
	    }
	    if(flag == 1)
	        cout << number << ", It isn't a prime number";
	    else
	        if(number>1)
	            cout << number << ",It is a prime number";
	        else
	            cout<<"please input a positive integer"<<endl; //正整數
	} 
	return 0; 
}