#include<iostream>
using namespace std;
// Increasing Array //
/* Modify the array so that every element is at least as large as the previous element 
On each move, increase the value of any element by one
Print the minimum number of moves.*/
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Type in arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        while (arr[i + 1] < arr[i]){
            arr[i + 1]= arr[i + 1] + 1;
            count ++;
        }
    }
    cout << "Minimum number of moves is: " << count << "\n";
    return 0;
}