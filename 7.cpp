#include <iostream>
using namespace std;
// Count the Number of Character Appearances in a String //
int main(){
string s;
char c;
cout << "Type a character to count: ";
cin >> c;
cin.ignore();
int count = 0;
cout << "Type your string: ";
getline(cin, s);
for(int i = 0; i < s.length(); i++){
    if (s[i] == c){
        count++;
    }
}
cout << "The number of " << c << " characters in the string is " << count << ".\n";
return 0;
}