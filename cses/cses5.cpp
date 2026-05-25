#include<iostream>
using namespace std;
// Permutations
int main(){
    int n;
    cout << "Type an interger: ";
    cin >> n;
    if (n <= 3 && n > 1){
        cout << "No solution";
    }
    else if(n > 3){
        for (int i = 1; i <= n; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i++){
            if(i % 2 != 0){
                cout << i << " ";
            }
        }
    }
    else if(n == 1){
        cout << "1";
    }
    cout << "\n";
    return 0;
}