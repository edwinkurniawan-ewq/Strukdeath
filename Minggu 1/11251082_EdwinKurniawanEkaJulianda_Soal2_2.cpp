#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    bool awalKata = true; // marker apakah karakter saat ini adalah awal kata

    for (int i = 0; i < kalimat.length(); i++) {
        char c = kalimat[i];

        if (c == ' ') {
            awalKata = true; // Jika ketemu spasi, karakter berikutnya adalah awal kata
        } else {
            if (awalKata) {
                // Konversi ke huruf besar jika masih huruf kecil ( misal ASCII: selisih 'a' - 'A' = 32)
                if (c >= 'a' && c <= 'z') {
                    kalimat[i] = c - 32;
                }
                awalKata = false; // Karakter berikutnya dalam kata yang sama bukan awal kata
            } else {
                // Konversi ke huruf kecil jika masih huruf besar
                if (c >= 'A' && c <= 'Z') {
                    kalimat[i] = c + 32;
                }
            }
        }
    }

    cout << "Hasil Title Case: " << kalimat << endl;

    return 0;
}