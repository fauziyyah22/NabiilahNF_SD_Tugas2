#include <iostream>
using namespace std;

int main() {
    //Informasi pembuat program
    cout << "Nama     : Nabiilah Nur Fauziyyah";
    cout << "\nNPM      : 2310631170105";
    cout << "\nKelas    : 2C - Informatika";
    cout << "\nProgram Perkalian Matriks Menggunakan Array " << "\n";
    for (int j = 0; j < 43; j++) {
    cout << "=";
    }
    int matrixA[2][2];
    int matrixB[2][2];

    // Deklarasi dua matriks dengan ukuran 2x2 yaitu matriks A dan matriks B
    cout << "\nMasukkan nilai dari matriks A:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan nilai dari matriks A[" << i << "][" << j << "] : ";
            cin >> matrixA[i][j];
        }
    }

    // Tampilkan matriks A
    cout << "Matriks A:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }

    // Input matriks B
    cout << "\nMasukkan nilai dari matriks B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan nilai dari matriks B[" << i << "][" << j << "] : ";
            cin >> matrixB[i][j];
        }
    }

    // Tampilkan matriks B
    cout << "Matriks B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

    // Melakukan operasi perkalian matriks antara matriks A dan matriks B
    int matrixC[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrixC[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Tampilkan hasil perkalian matriks
    cout << "\nHasil perkalian matriks A dan B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
