#include <iostream>
using namespace std;
int main(){
	int x, produk1=2500, jumlah1, jumlah2=1, total, bayar, tunai, sisa, diskon;
	string barang1, barang2, barang3;

	cout << "=========================================================" << endl;
	cout << "	       		PROGRAM KASIR	" << endl;
	cout << "=========================================================" << endl;
	cout<<endl;

	cout << "Masukkan Nama Barang : ";
	cin>>barang1;
	cout << "Jumlah Barang : ";
	cin>>x;
	jumlah1 = x * produk1;
	cout << "Total Harga : Rp. " <<jumlah1<<endl;
	cout<<endl;

	bayar = jumlah1 * jumlah2;
	cout<<endl;
	cout << "=========================================================" << endl;
	cout << "Total Yang Dibayar : Rp. " <<bayar<<endl;

	if(bayar > 50000){
		diskon = 0.10 * bayar;
		cout << "Diskon 10%, Terkena Potongan Sebesar : Rp. "<<diskon<<endl;
		total = bayar - diskon;
		cout << "Total Setelah Diskon : Rp. "<<total<<endl;
	}else if(bayar < 50000){
		diskon = 0.10 * bayar;
		cout << "Tidak Dapat Diskon Sebesar : Rp. "<<diskon<<endl;
		total = bayar;
		cout << "Total : Rp. "<<total<<endl;
	}
	cout << "=========================================================" << endl;
	cout << "Bayar Uang Sebesar : Rp. ";
	cin>>tunai;
	sisa = tunai - total;
	cout << "Kembalian : Rp. " <<sisa <<endl;
	cout << endl;
}
