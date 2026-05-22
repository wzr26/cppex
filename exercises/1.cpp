#include <iostream>
using namespace std;
// count how many digits a number has //
int main(){
    int x;
    int count = 0;
    cout << "Type a number: ";
    cin >> x;
    while (x != 0) {
        x = x / 10;
        count ++;
    }
    cout << "The number of digits is: " << count << "\n";
    return 0;  
}