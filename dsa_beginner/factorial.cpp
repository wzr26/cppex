#include<iostream>
using namespace std;
long long factorial (int n){
    long long result;
    for (int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << factorial(n) << "\n";
    return 0;
}