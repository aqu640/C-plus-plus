#include <iostream>
using namespace std;
 
/*Ch3&4 作業 (4.)三角形的面積為 (底*高) / 2，
  試輸入三角形的底和高，然後求出其面積。*/
 
int main() {
 
    int triangle_area,base,height;    /* 三角形, 底, 高  */
 
    cout << " 請輸入三角形的底和高:  " << endl;
    cin >> base >> height ;
 
    triangle_area = base*height/2;
    cout << " 三角形的面積= " << triangle_area <<"\n" << endl;
 
	return 0;
}