#include<iostream>
using namespace std;
// Linear Search //
int main(){
    int n;
    cout << "Number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    int a;
    cout << "Enter a number to find: ";
    cin >> a;
    for(int j = 0; j < n; j++){
        if (a == arr[j]){
            cout << "The number is at index " << j + 1 << ".\n";
            j = n;
            a = 0;
        }
    }
    if (a != 0){
        cout << "There is no value that matches.\n";
    }
    return 0;
}