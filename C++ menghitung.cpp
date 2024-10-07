#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int angka1, angka2, jumlah;

    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Menghitung jumlah
    jumlah = angka1 + angka2;

    // Menampilkan hasil
    cout << "Jumlah dari " << angka1 << " dan " << angka2 << " adalah " << jumlah << endl;

    return 0;
}
