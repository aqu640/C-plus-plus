// C++ program for the above approach
// 「迴文」。中文當中是指倒正著念和反著念都相同的句子，前後對稱，例如「上海自來水來自海上」。英文當中是指正著看和反著看都相同的單字，例如「 madam 」。
//  reverse() function 
#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}
 
// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}
