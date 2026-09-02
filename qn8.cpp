#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    //palindrome check
    int len = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    
    return 0;
}
    
    // for (int i = 0; i < len / 2; ++i) {
    //     // Convert both characters to lowercase before comparing
    //     if (tolower(str[i]) != tolower(str[len - i - 1])) {
    //         isPalindrome = false;
    //         break;
    //     }
    // }
    
