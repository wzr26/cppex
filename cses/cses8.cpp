#include<iostream>
#include<vector>
using namespace std;
/*Two Sets 
Divide the numbers 1,2,...n into two sets of equal sum */
int main(){
    int n;
    cout << "Type an interger: ";
    cin >> n;
    int sum, sum2 = 0, count1 = 0, count2 = 0;
    sum = n * (n + 1)/2;
    vector<int> arr1(100);
    vector<int> arr2(100);
    if (sum % 2 != 0){
        cout << "NO";
        return 0;
    }
    else if (sum % 2 == 0){
        sum = sum / 2;
        for(int i = n; i >=1 ; i--){
            if(sum2 + i <= sum){
                arr1[count1] = i;
                count1++;
                sum2 = sum2 + i;
            }
            else{
                arr2[count2] = i;
                count2++;
            }
        }
}
    cout << count1 << "\n";
    for (int i = 0; i < count1; i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";
    cout << count2 << "\n";
        for (int i = 0; i < count2; i++){
        cout << arr2[i] << " ";
    }
    cout << "\n";
    return 0;
}