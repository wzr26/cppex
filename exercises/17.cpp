#include<iostream>
#include<vector>
using namespace std;
// Fibonacci Sequence //
int main(){
    int n;
    cout << "Type an integer: ";
    cin >> n;
    vector<long long> arr(n);
    if (n == 1){
        arr[0] = 0; 
    }
    else if (n == 2){
        arr[0] = 0;
        arr[1] = 1;
    }
    else if (n > 2){
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}