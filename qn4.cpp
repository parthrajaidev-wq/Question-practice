//palindrome number
#include <iostream>
using namespace std;

int main(){
    int original,rev=0,temp;
    cin>>original;
    temp=original;
    while(original>0){
        rev=rev*10+original%10; 
        original/=10; 
    }
    if(rev==temp) cout<<temp<<" is palindrome"<<endl;
    else cout<<temp<<" is not palindrome"<<endl;
    return 0;
}