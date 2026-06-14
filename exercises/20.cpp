#include <iostream>
using namespace std;

// Hàm so sánh tăng dần
bool tangDan(int a, int b) {
    return a > b;
}

// Hàm so sánh giảm dần
bool giamDan(int a, int b) {
    return a < b;
}

// Hàm sắp xếp nhận con trỏ hàm
void sapXep(int arr[], int n, bool (*cmp)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            // Nếu điều kiện đúng thì đổi chỗ
            if (cmp(arr[i], arr[j])) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {5, 2, 8, 1, 4};
    int arr2[] = {5, 2, 8, 1, 4};

    cout << "Mang ban dau: ";
    inMang(arr1, 5);

    sapXep(arr1, 5, tangDan);

    cout << "Tang dan: ";
    inMang(arr1, 5);

    sapXep(arr2, 5, giamDan);

    cout << "Giam dan: ";
    inMang(arr2, 5);

    return 0;
}