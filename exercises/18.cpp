#include<iostream>
using namespace std;
// calc_core
int main(){
    int choice;
    long long a, b;
    while(1){
        cout <<"Chọn phép toán cần thực hiện: \n";
        cout << "1. Cộng\n";
        cout << "2. Trừ\n";
        cout << "3. Nhân\n";
        cout << "4. Chia\n";
        cout << "99. Thoát\n";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Nhập số thứ nhất:";
                cin >> a;
                cout << "Nhập số thứ hai:";
                cin >> b;
                cout << "Kết quả: "<< a + b << "\n";
                break;

            case 2:
                cout << "Nhập số thứ nhất:";
                cin >> a;
                cout << "Nhập số thứ hai:";
                cin >> b;
                cout << "Kết quả: "<< a - b << "\n";
                break;

            case 3:
                cout << "Nhập số thứ nhất:";
                cin >> a;
                cout << "Nhập số thứ hai:";
                cin >> b;
                cout << "Kết quả: "<< a * b << "\n";
                break;

            case 4:
                cout << "Nhập số thứ nhất:";
                cin >> a;
                cout << "Nhập số thứ hai:";
                cin >> b;
                cout << "Kết quả: "<< a / b << "\n";
                break;

            case 99:
                return 0;
        }
    }
    return 0;
}