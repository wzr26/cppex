#include<iostream>
using namespace std;
// Check sorted array //
int main(){
int n;
int b = 0;
cout << "Number of elements: ";
cin >> n;
int arr[n];
for (int i = 0; i < n; i++){
    cout << "Enter arr[" << i << "]: ";
    cin >> arr[i];
}
for (int j = 0; j < n; j++){
    if (arr[j + 1] < arr[j]){
    cout << "This is not a sorted array.\n";
    b = 1;
    j = n;
    }
}
if (b != 1){
    cout << "This is a sorted array.\n";
}
    return 0;
}