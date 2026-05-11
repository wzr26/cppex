#include <iostream>
using namespace std;
// reverse a number //
int main(){
    int num, digit;
    int reverse = 0;
    cout << "Type a number: ";
    cin >> num;
    while (num !=0){
digit = num % 10;
reverse = reverse * 10 + digit;
num = num / 10;
    }
    cout << "The reversed number is: " << reverse << "\n";
    return 0;
}
