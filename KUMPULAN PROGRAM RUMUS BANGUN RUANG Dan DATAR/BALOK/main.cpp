#include <iostream>
#include "simpan.h"
using namespace std;
int main(){
	double p,l,t,output;
	labelCome:
	char tanya;
	system("cls");
	cout << "\nProgram Menghitung Balok" <<endl;
	cout << "==========================" <<endl;
	cout << "Masukkan Panjang Balok: ";
	cin>>p;
	cout << "Masukkan Lebar Balok: ";
	cin>>l;
	cout << "Masukkan Tinggi Balok: ";
	cin>>t;
	cout << "==========================" <<endl;
	cout <<endl;

	//memulai perhitungan rumus
	cout << "Hasil Volume Balok Adalah: " <<VOLUME(p,l,t) <<endl;
	output = luas_permukaan(p,l,t);
	cetak(output);
	output = keliling_balok(p,l,t);
	print(output);
	cout <<endl;
	cout << "==========================" <<endl;

	//mau lanjut ?
	cout << "Lanjutkan ? [y / n] : ";
	cin>>tanya;
	if(tanya == 'y' || tanya == 'Y'){
		goto labelCome;
	}else if(tanya == 'n' || tanya == 'N'){
		cout << "Terimakasih Sudah Mencoba :) !!" <<endl;
	}
	return 0;
}