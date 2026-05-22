#include<iostream>
using namespace std;
/* If n is even, the algorithm divides it by two.
 and if n is odd, the algorithm multiplies it by three and adds one. 
 The algorithm repeats this, until n is one */
int main(){
int n;
cout << "Type an interger: ";
cin >> n;
cout << n << " ";
while (n != 1){
    if (n % 2 == 0){
        n = n /2;
        cout << n << " ";
    }
    else {
        n = n * 3 + 1; 
        cout << n << " ";
    }
}
    return 0;
}