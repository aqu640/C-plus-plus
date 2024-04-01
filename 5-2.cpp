#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Please enter the CE year:"<< endl;
    cin>>year;
 
    if( year % 4 == 0		&&		year % 100 != 0		||   year % 100 == 0		&&  year % 400 == 0)
    cout << year << "is leap year"<< endl;
    else cout << year << "is normal year" << endl;
    return 0;
}
