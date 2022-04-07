#include <iostream>
#include <string>
#define TAMBAH(A,B) (A + B)
#define KURANG(A,B) (A - B)
#define KALI(A, B) (A * B)
#define BAGI(A,B) (A / B)

using namespace std;
int main(){
    float angka1, angka2;
    cout << "\nProgram Kalkulator KW" << endl;
    cout << "=======================" << endl;
    cout << "Masukkan Angka Pertama : ";
    cin>>angka1;
    cout << "Masukkan Angka Kedua : ";
    cin>>angka2;
    cout << endl;

    cout << "Hasil Tambah " <<TAMBAH(angka1,angka2) <<endl;
    cout << "Hasil Kurang " <<KURANG(angka1,angka2) <<endl;
    cout << "Hasil Kali " <<KALI(angka1,angka2) <<endl;
    cout << "Hasil Bagi " <<BAGI(angka1,angka2) <<endl;
    return 0;
}
