#include <iostream>
#include <vector>
using namespace std;
long long sum(const vector<int>& a){
    long long sum = 0;
    for (int x : a){
        sum += x;
    }
    return sum;
}
int main(){
    vector<int> a{1, 2, 3, 4, 5};
    cout <<  sum(a) << "\n";
    return 0;
}