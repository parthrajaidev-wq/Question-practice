#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size = ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
  // Display the vector elements
    cout << "Vector elements: ";    
    for (const int &x : v) {
        cout << x << " ";
    }
    cout << endl;
    // Calculate the sum of vector elements
    int sum = 0;
    for (const int &x : v) {
        sum += x;
    }
    cout << "Sum of vector elements: " << sum << endl;
   // Calculate the average of vector elements
    double average = static_cast<double>(sum) / n;
    cout << "Average of vector elements: " << average << endl;
    return 0;
}