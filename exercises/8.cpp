#include <iostream>
using namespace std;
// Count Vowels in a String //
int main(){
string s;
int count = 0;
cout << "Type your string: ";
getline(cin, s);
for(int i = 0; i < s.length(); i++){
    char c = tolower(s[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        count++;
    }
}
cout << "The number of vowels in the string is " << count << ".\n";
return 0;
}