//check it is prime or not
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n<=1){
        cout<<n<<" is not prime"<<endl;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<n<<" is not prime"<<endl; // don't use break and return 0; because it will terminate the program and not check for other factors
                return 0;
            }
        }
        cout<<n<<" is prime"<<endl;
    }
    return 0;
}
 //Actually, terminating the program immediately is exactly what makes this code work perfectly.To prove a number is not prime, you only need to find one single factor. For example, once the code sees that 15 is divisible by 3, it does not need to check if it is divisible by 5. Finding 3 is already enough proof that 15 is not prime.Because return 0; exits the entire program right then and there, it prevents the code from moving downward and accidentally printing "15 is prime".
 //we can optimize this to run twice as fast by skipping even numbers