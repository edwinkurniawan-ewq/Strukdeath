#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaDepan = "Andi";
    string namaBelakang = "Firaz";

    // 1. Penggabungan string dengan operator +
    string namaLengkap = namaDepan + " " + namaBelakang;
    cout << "Nama Lengkap        : " << namaLengkap << endl;

    // 2. Menampilkan panjang string
    cout << "Panjang Nama Lengkap: " << namaLengkap.length() << " karakter" << endl;

    // 3. Sisipkan "Dr. " di awal string (index ke-0)
    namaLengkap.insert(0, "Dr. ");
    cout << "Setelah Insert Gelar: " << namaLengkap << endl;

    // 4. Cari posisi spasi pertama
    size_t posisiSpasi = namaLengkap.find(' ');

    if (posisiSpasi != string::npos) {
        // Ambil substring nama depan saja (setelah gelar sampai spasi berikutnya)
        // Cari spasi kedua setelah gelar untuk mengekstrak nama depan murni
        size_t spasiKedua = namaLengkap.find(' ', posisiSpasi + 1);
        string extractedNamaDepan = namaLengkap.substr(posisiSpasi + 1, spasiKedua - (posisiSpasi + 1));
        
        cout << "Hasil Substr (Nama Depan): " << extractedNamaDepan << endl;
    }

    return 0;
}