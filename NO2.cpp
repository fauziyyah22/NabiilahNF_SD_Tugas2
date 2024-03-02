#include <iostream>
using namespace std;

void rotateMatrix(int matrix[3][3]) { // Fungsi untuk merotasi matriks sebesar 90 derajat
    int rotatedMatrix[3][3]; // Deklarasi matriks untuk menyimpan hasil rotasi

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            rotatedMatrix[j][2 - i] = matrix[i]  [j];
        }
    }

    // Menampilkan output matriks yang telah diputar
    cout << "Matriks setelah diputar:" << "\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << rotatedMatrix[i]  [j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    //Informasi pembuat program
    cout << "Nama     : Nabiilah Nur Fauziyyah";
    cout << "\nNPM      : 2310631170105";
    cout << "\nKelas    : 2C - Informatika";
    cout << "\nProgram Memutar Matriks 90 Derajat " << "\n";
    for (int j = 0; j < 40; j++) {
    cout << "=";
    }
    cout << "\n";
    int matrix[3][3];

    // Input nilai matrix
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Masukan nilai dari matriks [" << i <<"] [ " << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    // Menampilkan matriks sebelum diputar
    cout << "Matriks sebelum diputar:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i]  [j] << " ";
        }
        cout << endl;
    }

    // Memutar matriks 90 derajat sekali
    rotateMatrix(matrix);

    return 0;
}
