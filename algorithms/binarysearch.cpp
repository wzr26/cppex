#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, num, temp;
    cout << "Number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++){
        if (arr[j + 1] < arr[j]){
            cout << "This is not a sorted array.\n";
            return 0;
    }
}
    cout << "Enter a number to find: ";
    cin >> num;
    int low = 0, high = n - 1;
    int middle = (low + high)/2;
    while (num != arr[middle]){
        if(num > arr[middle]){
            low = middle + 1;
            middle = (low + high)/2;
    }
        else if(num < arr[middle]){
            high = middle - 1;
            middle = (low + high)/2;
    }
}
cout << "The number " << num << " is at index " << middle + 1 << ".\n";
    return 0;
}