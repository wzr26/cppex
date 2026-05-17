#include <iostream>
using namespace std;
// Calculate sum of digits // 
int main(){
    int num, sum =0;
    cout << "Type in a number: ";
    cin >> num;
    while (num != 0){
int digit;
digit = num % 10;
num = num / 10;
sum = sum + digit;
    }
    cout << "The sum is: " << sum << "\n";
    return 0;
}