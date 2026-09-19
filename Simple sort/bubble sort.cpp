#include <iostream>
using namespace std;

// Fungsi Bubble Sort untuk mengurutkan array angka
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            // Jika angka di kiri lebih besar dari di kanan, tukar posisinya
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        // Berhenti lebih awal jika dalam 1 pass tidak ada elemen yang ditukar
        if (!swapped) break;
    }
}

// Fungsi untuk mencetak elemen array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Sebelum Bubble Sort: ";
    printArray(data, n);

    // Panggil fungsi bubble sort
    bubbleSort(data, n);

    cout << "Setelah Bubble Sort: ";
    printArray(data, n);

    return 0;
}