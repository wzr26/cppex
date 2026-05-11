#include <iostream>
using namespace std;
// calculate sum from 1 to n //
int main(){
    int sum = 0;
    int n;
    cout << "Type a number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum of 1 to " << n << " is: " << sum << "\n";
    return 0;
}