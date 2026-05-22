#include <iostream>
using namespace std;
// Check For Palindrome Number //
int main(){
    int num, digit, num2;
    int reverse = 0;
    cout << "Type a number: ";
    cin >> num;
    num2 = num;
    while (num2 !=0){
digit = num2 % 10;
reverse = reverse * 10 + digit;
num2 = num2 / 10;
    }
if(reverse == num){
    cout <<"This is a Palindrome Number" << "\n";
}
else {
    cout << "This is not a Palindrome Number" << "\n";
}
return 0;
}
