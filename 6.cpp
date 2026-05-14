#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// Find the 2nd smallest element in an array //
int main(){
int n;
cout << "Number of elements: ";
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++){
    cout << "Type the value of arr[" << i << "]: ";
    cin >> arr[i];
}
    int min1 = INT_MAX, min2 = INT_MAX;
for (int i = 0; i < n; i++){
    if (arr[i] < min1){
        min2 = min1;
        min1 = arr[i];
    }
    else if (arr[i] < min2 && arr[i] > min1){
        min2 = arr[i];
    }
}
cout << "The smallest element of the array is: " << min1 << "\n";
cout << "The second smallest element of the array is: " << min2 << "\n";
return 0;
}