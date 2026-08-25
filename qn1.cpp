#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) cout<<i<<" "<<endl; //vertically count hoga ek no ke niche ek
    for(int i=0;i<=n;i++) cout<<i<<" "; // ek hi line me count hoga tb next line aage
    cout<<endl;
    for(int i=n;i>0;i--) cout<<i<<" "; //same line me count hoga but reverse order me
    cout<<endl;
    int sum=0;
    for(int i=1;i<=n;i++) sum += i; //sum of all numbers from 1 to n
    cout<<sum<<endl;
    int fact=1;
    for(int i=1;i<=n;i++) fact *= i; //factorial of n
    cout<<fact<<endl;
    return 0;
}