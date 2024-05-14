#include <iostream>
#include <algorithm> //利用此標頭檔，使用函數將容器轉置 reverse(v.begin(), v.end());
#include<string>
using namespace std; 
 
int main() 
{ 
	string str;
    cin >> str;
    cout<<"the initial state :"<< str << endl; 
    reverse(str.begin(), str.end()); 
	cout<<"after reverse :"<< str; 
    return 0;
}
