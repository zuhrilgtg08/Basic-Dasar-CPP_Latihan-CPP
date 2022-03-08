#include <iostream>
#include <string>
using namespace std;

struct barang{
    string nama;
    string produk;
    int jumlah;
    string harga;
};
int main(){
    barang jualan;
    cout << "--------------------------" <<endl;
    cout << "program menampilkan barang" <<endl;
    cout << "--------------------------" <<endl;
    jualan.nama = "Akmal Luthfi";
    jualan.produk = "Air Pods F9";
    jualan.jumlah = 19;
    jualan.harga = "Rp. 300.000,00";

    cout <<"Nama Pelanggan: " <<jualan.nama <<endl;
    cout <<"Nama Produk: " <<jualan.produk <<endl;
    cout <<"Jumlah Barang: " <<jualan.jumlah <<endl;
    cout <<"Harga Barang: " <<jualan.harga <<endl;
    cin.get();
    return 0;
}