#include <string>
#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    string str;
    for (char x : s) {
        if (isalnum(x)) {
            str += tolower(x);
        }
    }
    string copy = str;
    reverse(str.begin(), str.end());
    return str == copy;
}
int main()
{
    cout << "enter the string to check for a palindrome" << endl;
    string str;
    cin >> str;
    if (isPalindrome(str)) {
        cout << "the string is a palindrome" << endl;
    }
    else {
        cout << "the string is not a palindrome" << endl;
    }

}

