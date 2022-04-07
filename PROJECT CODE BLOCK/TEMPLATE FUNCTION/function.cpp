#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T data){
    cout << "Halo Selamat Datang ";
    cout <<data <<endl;
}

template<typename U>
void cetak(U data){
    cout << "Hai apa kabar: ";
    cout <<data <<endl;
}

int main()
{
    typedef string S;
    typedef int I;
    S huruf;
    I angka;
    cout << "masukkan nama anda: ";
    cin>>huruf;
    cout << "masukkan angka: ";
    cin>>angka;
    print(angka);
    cetak(huruf);
    return 0;
}
