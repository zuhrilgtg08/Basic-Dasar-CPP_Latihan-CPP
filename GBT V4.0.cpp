#include <iostream>
#include <string>
using namespace std;

struct barang{
    string nama;
    string produk;
    int jumlah;
    int harga;
};
int main(){
    barang jualan;
    cout << "program menampilkan barang" <<endl;
    jualan.nama = "Akmal Luthfi";
    jualan.produk = "Air Pods F9"
    jualan.jumlah = 19;
    jualan.harga = 300000;

    cout <<jualan.nama <<endl;
    cout <<jualan.produk <<endl;
    cout <<jualan.jumlah <<endl;
    cout <<jualan.harga <<endl;
    cin.get();
    return 0;
}