#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    double hour, min, length ,gsum ,nsum;  //毛成本:gross, 淨成本:net
	cout << "Please enter the time of call (1-24 hour): " << endl; //請輸入打電話的時間是幾點(1點-24點)
	cin >> hour ;
	cout << "Please enter the time of call (0-59 min): " << endl; //請輸入打電話的時間是幾點(1點-24點)
	cin >> min ;
	cout << "Please enter the length of the call (in minutes): " << endl; //請輸入打電話的長度(分鐘):
	cin >> length ;
 
    /*-----------*計算成本----------*/
    gsum=0.4*length;
    if(hour<8||hour>18) nsum=0.5*gsum; //AM 8:00以前或 PM 6:00以後
	else nsum=gsum;
	    				//超過2行要中括號*
    if(length>=60) { 	//長度超過 60 分鐘，用>=
	    nsum=0.85*gsum;
	    cout <<"The call fee is:" <<nsum;
	}
    else cout <<"The call fee is:" <<nsum *1.04;
 
	return 0;
}