#include<iostream>
#include<string>
using namespace std;
// Count Spaces in a string //
int main(){
    string s;
    int count = 0;
    cout << "Type your string: ";
    getline (cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    cout << "The number of spaces is : " << count << "\n";
    return 0;
}