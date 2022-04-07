#include <iostream>
using namespace std;
//fungsi perkalian
int kali(int a, int b){
    return a * b;
}
int main(){
    int angka1, angka2, hasil;
    cout << "program perkalian sederhana" <<endl;
    cout<<endl;
    cout << "masukkan angka pertama = ";
    cin>>angka1;
    cout << "masukkan angka kedua = ";
    cin>>angka2;
    cout<<endl;

    //memulai operator
    hasil = kali(angka1,angka2);
    cout << "hasilnya adsalah = " <<hasil <<endl;
    return 0;
}
