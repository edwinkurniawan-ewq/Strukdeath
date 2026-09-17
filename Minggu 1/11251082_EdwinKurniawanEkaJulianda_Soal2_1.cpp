#include <iostream>
#include <string>

using namespace std;

int main(){
    string kalimat;
    int hurufBesar = 0;
    int hurufkecil = 0;

    cout << "masukkan kalimat:";
    getline(cin, kalimat);

    // iterasi setiap karakter menggunakan range for

    for (char c : kalimat){
        //logika ASCII
        if (c >= 'A' && c <= 'Z'){
        hurufBesar++;
        }

        else if ( c >= 'a' && c <= 'z'){
            hurufkecil++;
        }
    }
    cout << "Jumlah huruf besar (A-Z) : " << hurufBesar << endl;
    cout << "Jumlah huruf kecil (a-z) : " << hurufkecil << endl;

    return 0;
}