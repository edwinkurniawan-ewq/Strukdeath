#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 45, 23, 89, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // print array pertama
    cout << "Array Awal  : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // logic reverse
    // Menukar elemen ke-i dari depan dengan elemen ke-(n - 1 - i) dari belakang
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // print array setelah dibalik
    cout << "Array Dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}