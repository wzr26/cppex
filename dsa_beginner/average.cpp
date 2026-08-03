#include <iostream>
#include <vector>
using namespace std;
// trả về trung bình cộng của mảng //
double average(const vector<int>& a){
    double sum = 0;
    for(int x : a){
        sum += x;
    }
    return sum / a.size();
}
int main(){
    vector<int> a{1, 2, 3, 4, 5};
     cout << average(a) << "\n";
    return 0;
}