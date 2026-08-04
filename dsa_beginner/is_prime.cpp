#include <iostream>
using namespace std;
bool isPrime(long long n){
if (n < 2){
    return false;
}
for (long long i = 2; i * i <= n; i++){
    if (n % i == 0){
        return false;
    }
}
    return true;
}
int main(){
    long long n;
    cout << "Enter a number: "; 
    cin >> n;
    if (isPrime(n) == 1){
        cout << "This is a prime number.\n"; 
    }
    else{
        cout << "This is not a prime number.\n";
    }
    return 0;
}