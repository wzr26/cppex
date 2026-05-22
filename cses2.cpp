#include<iostream>
#include <vector>
/*You are given all numbers between 1,2,...,n except one. 
Your task is to find the missing number.*/
using namespace std;
int main(){
    int n;
    cout << "Number of elements: ";
    cin >> n;
vector<int> arr(n);
for (int i = 0; i < n - 1; i++){
    cout << "Enter arr[" << i << "]: ";
    cin >> arr[i];
}
int sum = n * (n+1)/2; 
for (int i = 0; i < n - 1; i++){
    sum = sum - arr[i];
}
cout << "The missing number is: " << sum << ".\n";
    return 0;
}