#include <iostream>
using namespace std;
// Find the largest element of an array //
int main(){
    int n;
    cout << "Number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cout << "Type in a[" << i << "]: ";
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << "The largest element in the array is: " << max << "\n";
    return 0;
}