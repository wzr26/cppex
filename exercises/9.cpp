#include <iostream>
using namespace std;
// Reverse String // 
int main(){
    string s;
    cout << "Type your string: ";
    getline(cin, s);
    string reverse;
    for (int i = s.length() - 1; i >= 0; i--){
        char ss = s[i];
        reverse = reverse + ss;
    }
    cout << "The reversed string is: " << reverse << "\n";
    return 0;
}