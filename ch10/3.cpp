/*
input:
aaaaaaaa琌礚盞絏
ab琌礚盞絏
777123456琌Τ盞絏
7.123456琌礚盞絏
7123琌礚盞絏
*/
 
 
#include <iostream>
#include <cctype> // ㄏノ isalnumisdigit
using namespace std;
 
bool isValidPassword(const string& password) {
    int length = password.length();
    int numCount = 0;
 
    // 浪琩盞絏琌单8じ
    if (length < 8) {
        return false;
    }
 
	//ノ猭呼:https://blog.csdn.net/weixin_41162823/article/details/80172379
    // isalnum 浪琩琌璣ゅダ㎝计
    for (char c : password) {
        if (!isalnum(c)) {
            return false;
        }
        //https://blog.csdn.net/qq_16488989/article/details/120156135?spm=1001.2101.3001.6650.3&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-3-120156135-blog-80172379.235%5Ev43%5Epc_blog_bottom_relevance_base3&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-3-120156135-blog-80172379.235%5Ev43%5Epc_blog_bottom_relevance_base3&utm_relevant_index=4
        // 浪代琌琌 0~9 秈计
        if (isdigit(c)) {
            numCount++;      // 璸衡计计
        }
    }
 
    // 浪琩计计琌ぶㄢ
    if (numCount < 2) {
        return false;
    }
    return true;
}
 
int main() {
    string password;
    cout << "叫块盞絏";
    cin >> password;
 
    if (isValidPassword(password)) {
        cout << password << "琌Τ盞絏" << endl;
    } else {
        cout << password << "琌礚盞絏" << endl;
    }
 
    return 0;
}

