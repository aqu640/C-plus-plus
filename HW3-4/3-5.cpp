#include <iostream>
using namespace std;
 
/*Ch3&4 作業 (5.)梯形的面積為 (上底+下底)*高/2，
  試輸入上底、下底及高，並求出其梯形的面積為何？*/
 
int main() {
 
    int trapezoid_area, upper_line , lower_line, height;    /* 梯形的面積, 上底, 下底, 高  */
 
    cout << " 請輸入梯形的上底、下底和高:  " << endl;
    cin >> upper_line >> lower_line>> height ;
 
    trapezoid_area =  (upper_line+lower_line)* height/2;
    cout << " 梯形的面積= " << trapezoid_area <<"\n" << endl;
 
	return 0;
}