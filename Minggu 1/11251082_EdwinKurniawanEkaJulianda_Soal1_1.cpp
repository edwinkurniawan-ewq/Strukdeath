#include <iostream>
using namespace std;

int main(){
    const int SIZE =5;
    int nilai[SIZE];
    double total = 0;

    //meminta input 5 nilai menggunakan loop dari user
    for (int i = 0; i < SIZE; i++){
        cout << "masukkan nilai mahasiswa ke-"<<(i + 1)<< ":";
        cin >> nilai[i];
        total += nilai[i]; //total untuk menghitung rata rata nilai
  }

// 
int nilaiTertinggi = nilai[0];
int indexTertinggi = 0;

//mencari nilai tertinggi dan posisi indeks nya
for (int i = 1; i < SIZE; i++) {
        if (nilai[i] > nilaiTertinggi) {
            nilaiTertinggi = nilai[i];
            indexTertinggi = i;
        }
    }

double rataRata = total / SIZE;

//menampilkan hasil
cout << "Rata rata nilai= "<< rataRata << endl;
cout << "Nilai tertinggi : " << nilaiTertinggi << " (index ke-" << indexTertinggi << ")" << endl;

return 0;
}