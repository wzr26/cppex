#include<iostream>
#include<vector>
using namespace std;
int minElement(const vector<int>& a){
int min = a[0];
for (int x : a){
    if(x < min){
    min = x;
    }
}
    return min;
}
int main(){
    vector <int> a{4, 6, 5, 1, 3};
    cout << minElement(a) << "\n";
    return 0;
}