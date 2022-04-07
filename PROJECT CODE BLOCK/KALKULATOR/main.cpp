#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;
    cout << "SELAMAT DATANG DI PROGRAM KALKULATOR \n\n";

    //INPUT NILAI
    cout << "Input Nilai/Angka Pertama : ";
    cin >> a;

    cout << "Pilih Metode +(tambah), -(kurang), *(kali), /(bagi) : ";
    cin >> aritmatika;

    cout << "Input Nilai/Angka Kedua : ";
    cin >> b;

    cout << "\nHasil Perhitungan : ";
    cout << a << aritmatika << b;

    if(aritmatika == '+'){
        hasil = a + b;
        cout << " = " <<hasil <<endl;
    }else if(aritmatika == '-'){
        hasil = a - b;
        cout << " = " <<hasil <<endl;
    }else if(aritmatika == '*'){
        hasil = a * b;
        cout << " = " <<hasil <<endl;
    }else if(aritmatika == '/'){
        hasil = a / b;
        cout << " = " <<hasil <<endl;
    }else{
        cout << "Operator Yang Anda Gunakan Tidak Di Temukan" <<endl;
    }

    return 0;
}
