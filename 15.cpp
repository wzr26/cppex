#include<iostream>
#include <vector>
using namespace std;
// Merge two arrays //
int main(){
    int a, b;
    cout << "Size of the first array: ";
    cin >> a;
    cout << "Size of the second array: ";
    cin >> b;
    vector<int> arr1(a);
    vector<int> arr2(b);
    vector<int> arr3(a + b);
    for(int i = 0; i < a; i++){
        cout << "Value of arr1[" << i << "]: ";
        cin >> arr1[i];
    }
    for(int i = 0; i < b; i++){
        cout << "Value of arr2[" << i << "]: ";
        cin >> arr2[i];
    }
    for(int i = 0; i < a + b; i++){
        if (i < a){
        arr3[i] = arr1[i];
        }
        else {
            arr3[i] = arr2[i - a];
        }
    }
    for (int i = 0; i < a + b; i++){
        cout << arr3[i] << " ";
    }
    cout << "\n";
    return 0;
}