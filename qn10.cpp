#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> wordCount;
    string word;
    cout << "Enter words (type 'exit' to finish):" << endl;
    while (true) {
        cin >> word;
        if (word == "exit") {
            break;
        }
        ++wordCount[word];
    }
  // Display the word counts
    cout << "Word counts:" << endl;
    for (const auto &pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}