#include <iostream>
using namespace std;

/*
4.	輸入某一同學的 gpa，當
	gpa = 4時，印出excellent student
	gpa = 3時，印出good student
	gpa = 2時，印出satisfactory
	gpa = 1時，則直接印出score = 50，
	其他則印出are you a fool or a genius，
	請利用 else...if 選擇敘述執行之。
*/
 
int main() {
    int gpa;
    cout<<"Please input your classmate's gpa 1 to 4"<< endl;
    cin>>gpa;
 
	if (gpa==4) 
		cout<<"excellent student"<< endl;
    else if (gpa==3) 
		cout<<"good student"<< endl;
    else if (gpa==2) 
		cout<<"satification student"<< endl;
 
    else if (gpa==1)
   		    cout<<"score=50"<< endl;
    else  
			cout<<"Are you a fool or genius"<< endl;
	return 0;
}
