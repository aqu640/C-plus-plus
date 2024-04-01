/*Ch1&2 作業
1.	王先生每天都是從九點準時上班，一直到傍晚五點鐘下班。試問王先生中午時刻不休息，那他一天總共要工作多少秒。*/
#include <iostream>
using namespace std;
 
int main() {
 
	int work_time, start, end ;
	start   = 9 ;
	end    =17;
	work_time   = (end-start)*60*60;
 
	cout << "total need to  work a day " << work_time <<  " sencond a day  " << endl;
	return 0;
}
