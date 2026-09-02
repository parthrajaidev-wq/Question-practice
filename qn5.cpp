#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
  //uppercase conversion
    for (char &c : str) {
        c = toupper(c);
    }
    cout << "Uppercase: " << str << endl;
    //lowercase conversion
    for (char &c : str) {   
        c = tolower(c);
    }
    cout << "Lowercase: " << str << endl;

    return 0;
}