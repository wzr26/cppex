#include <iostream>
using namespace std;
// Count the number of odd numbers in an array //
int main(){
    int n;
    cout << "Number of elements: ";
    cin >> n;
    int a[n];
for (int i = 0; i < n; i++){
        cout << "Type in a[" << i << "]: ";
        cin >> a[i];
    }
    int odd = 0;
for (int i = 0; i < n; i++){
    if (a[i] % 2 == 0){
        odd++;
    }
}
    cout << "The number of odd numbers is: " << odd << "\n";
    return 0;
}