#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;

    cout << "Masukkan kata: ";
    cin >> kata;

    bool isPalindrom = true;
    int n = kata.length();

    // Membandingkan karakter dari depan dan belakang secara bersamaan
    for (int i = 0; i < n / 2; i++) {
        if (kata[i] != kata[n - 1 - i]) {
            isPalindrom = false; // Jika ada 1 pasang karakter yang beda,berarti bukan palindrom
            break;
        }
    }

    // Menampilkan hasil
    if (isPalindrom) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Bukan Palindrom" << endl;
    }

    return 0;
}