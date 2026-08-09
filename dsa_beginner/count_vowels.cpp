#include <bits/stdc++.h>
using namespace std;
int countVowels(const string&s){
    int count = 0;
    for (char c : s){
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count ++;
        }
    }
    return count;
}
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of vowels: " << countVowels(str) << "\n";
    return 0;
}