#include <bits/stdc++.h>
using namespace std;
int secondLargest(const vector<int>& a){
long long best1 = LLONG_MIN; long long best2 = LLONG_MIN;
    for(int x : a){
    if (x > best1){
       best2 = best1;
       best1 = x;
    } else if (x < best1 && x > best2){
        best2 = x;
    }
    }
    return best2;
}
int main(){
    int n;
    cout << "So phan tu: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Phan tu cao thu 2:" << secondLargest(a) << "\n";
    return 0;
}