#include <iostream>
using namespace std;
//membuat sebuah fungsi diletakkan sebelum main
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

int kurang(int d, int e){
    int f;
    f = d - e;
    return f;
}
int main(){
    int input, hasil, a, b, hasil2, d, e, hasil3;
    //kuadrat
    cout << "Hasil Nilai Kuadrat dari : ";
    cin>>input;
    cout<<endl;

    hasil = kuadrat(input);
    cout << "Hasil Bilangan Kuadrat : " <<hasil <<endl;

    //tambah
    cout << "Masukkan Angka Pertama : ";
    cin>>a;
    cout << "Masukkan Angka Kedua : ";
    cin>>b;
    cout<<endl;

    hasil2 = tambah(a, b);
    cout << "Hasil Penjumlahan : " <<hasil2 <<endl;

    //kurang
    cout << "Masukkan Angka Pertama Untuk Melihat Pengurangan : ";
    cin>>d;
    cout << "Masukkan Angka Kedua Untuk Melihat Pengurangan : ";
    cin>>e;
    cout<<endl;

    hasil3 = kurang(d, e);
    cout << "Hasil Pengurangan : " <<hasil3 <<endl;


    cin.get();
    return 0;//return ini adalah fungsi
}
