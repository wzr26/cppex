#include<iostream>
#include<string>
using namespace std;
// Repetitions
/* Given a string consisting of characters A, C, G, and T.
Find the longest repetition in the sequence
This is a maximum-length substring containing only one type of character*/
int main(){
    string s;
    int best = 1;
    int count = 1;
    cout << "Type your string(Only A, C, G, and T): ";
    getline(cin, s);
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        best = max(best, count);
    }
    cout << "The length of the longest repetition is: " << best << "\n";
    return 0;
}