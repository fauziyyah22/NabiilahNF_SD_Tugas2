#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MIN_TANGGAL = 5; // Minimal jumlah hari

struct DataBarang {
    string nama; // Variabel menyimpan nama barang
    int jumlah; // Variabel menyimpan jumlah barang
};

int main() {
    for (int j = 0; j < 60; j++) {
        cout << "=";
    }
    int jumlahinput; // Variabel menyimpan jumlah barang
    cout << "\nMasukkan jumlah barang yang diinputkan : ";
    cin >> jumlahinput;

    // Validasi jumlah barang
    if (jumlahinput <= 0) { // Jika jumlah barang kurang dari atau sama dengan 0
        cout << "Jumlah barang harus lebih dari 0." << "\n";
        return 1;
    }

    int jumlahtanggal; // Variabel menyimpan jumlah tanggal
    cout << "Masukkan jumlah tanggal : ";
    cin >> jumlahtanggal;

    // Validasi jumlah tanggal
    if (jumlahtanggal < MIN_TANGGAL) { // Jika jumlah tanggal kurang dari minimal yang ditentukan
        cout << "Tanggal harus minimal " << MIN_TANGGAL << "\n";
        return 1;
    }

    // Alokasi memori untuk array data berdasarkan jumlah barang
    DataBarang *data = new DataBarang[jumlahinput]; // Menggunakan alokasi dinamis untuk array data

    // Memasukkan nama barang
    for (int i = 0; i < jumlahinput; ++i) {
        cout << "Masukkan nama barang " << i+1 << " : ";
        cin >> data[i].nama;
    }

    cout << "\n";

    // Memasukkan jumlah barang untuk setiap tanggal
    DataBarang **barangPerTanggal = new DataBarang*[jumlahtanggal]; // Array 2 dimensi untuk menyimpan jumlah barang per tanggal
    for (int i = 0; i < jumlahtanggal; ++i) {
        barangPerTanggal[i] = new DataBarang[jumlahinput];
        cout << "Tanggal ke-" << i+1 << "\n";
        for (int j = 0; j < jumlahinput; ++j) {
            cout << "Masukkan jumlah barang " << data[j].nama << " tanggal " << i+1 << " : ";
            cin >> barangPerTanggal[i][j].jumlah;
        }
    }
    cout << "\n";

    // Menampilkan data barang dalam bentuk tabel
    for (int j = 0; j < 60; j++) {
        cout << "=";
    }
    cout << "\n\t\t\tData Barang:\n";
    for (int j = 0; j < 60; j++) {
        cout << "-";
    }
    cout << "\n| Tanggal |";
    for(int i = 0; i < jumlahinput; i++) {
        cout << " " << data[i].nama << "    |";
    }
    cout << "\n";
    for (int j = 0; j < 60; j++) {
        cout << "-";
    }
    cout << "\n";

    for(int i =0; i < jumlahtanggal; i++) {
        cout << "|    " << i+1 << "    |";
        for (int j = 0; j < jumlahinput; j++) {
            cout << setw(9) << barangPerTanggal[i][j].jumlah << " |";
        }
        cout << "\n";
    }
    for (int j = 0; j < 60; j++) {
        cout << "=";
    }

    // Mencetak detail barang
    cout << "\n";
    char inginCariLagi; // Variabel untuk menyimpan jawaban pengguna apakah ingin mencari lagi
    do { // Loop untuk mencari data barang lagi
        cout << "\n\t\t\tDetail Barang:\n";
        for (int j = 0; j < 60; j++) {
            cout << "-";
        }
        int tanggalCari;
        cout << "\nMasukkan tanggal yang ingin dicari (1 - " << jumlahtanggal << "): ";
        cin >> tanggalCari;
        if (tanggalCari < 1 || tanggalCari > jumlahtanggal) {
            cout << "Tanggal tidak valid." << "\n";
            return 1;
        }
        for (int j = 0; j < 60; j++) {
            cout << "-";
        }
        cout << "\n| Tanggal | Nama Barang | Jumlah | Alamat  |" << "\n";
        for (int j = 0; j < 60; j++) {
            cout << "-";
        }
        cout << "\n";
        for (int i = 0; i < jumlahinput; ++i) {
            cout << "|    " << tanggalCari << "    |";
            cout << setw(12) << data[i].nama << " |";
            cout << setw(7) << barangPerTanggal[tanggalCari-1][i].jumlah << " |";
            cout << setw(7) << &barangPerTanggal[tanggalCari-1][i] << " |" << "\n";
        }
        for (int j = 0; j < 60; j++) {
        cout << "=";
        }
        cout << "\n";
        cout << "\nApakah ingin mencari data barang lagi? (Y/N): "; // Tanya pengguna apakah ingin mencari lagi
        cin >> inginCariLagi; // Mengambil jawaban pengguna

    } while (inginCariLagi == 'Y' || inginCariLagi == 'y'); // Ulangi proses jika pengguna ingin mencari lagi
        cout << "\n";

    cout << "\n\tTerimakasih telah menggunakan program ini ^_^" << endl; // Pesan keluar dari looping
    for (int j = 0; j < 60; j++) {
        cout << "=";
    }
    cout << "\nNama     : Nabiilah Nur Fauziyyah";
    cout << "\nNPM      : 2310631170105";
    cout << "\nKelas    : 2C - Informatika";
    cout << "\nProgram Mencari Alamat Pointer Pada Data Barang " << "\n";
    for (int j = 0; j < 60; j++) {
        cout << "=";
    }
    cout << "\n";

    return 0;
}
