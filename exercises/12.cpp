#include <iostream>
using namespace std;
// Check for Armstrong number //
int main(){
int digit, num, num2;
int sum = 0;
cout << "Enter a number (3 digits): ";
cin >> num;
num2 = num;
while (num2 != 0){
    digit = num2 % 10;
    sum = digit * digit * digit + sum;
    num2 = num2 /10;
}
if (sum == num) {
    cout << "This is an Armstrong number. \n";
}
else {
    cout << "This isn't an Armstrong number.\n";
}
return 0;
}