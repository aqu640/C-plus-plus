#include <iostream>
#include<math.h>
using namespace std;

/*
 5.輸入某一同學的 gpa，當
	gpa = 4時，印出excellent student
	gpa = 3時，印出good student
	gpa = 2時，印出satisfactory
	gpa = 1時，則直接印出score = 50
	其他則印出are you a fool or a genius
	將它改為 switch...case 的形式撰寫之
*/
 
int main() {
    int gpa;
    cout<<"Please input your classmate's gpa 1 to 4"<< endl;
    cin>>gpa;
 
    switch(gpa){
    case 4:
		cout<<"excellent student"<< endl;
		break;
    case 3:
		cout<<"good student"<< endl;
	    break;
    case 2:
		cout<<"satisfactory"<< endl;
	    break;
    case 1:
   		    cout<<"score=50"<< endl;
	    break;
    default :
			cout<<"Are you a fool or genius"<< endl;
	return 0;
	}
}
 