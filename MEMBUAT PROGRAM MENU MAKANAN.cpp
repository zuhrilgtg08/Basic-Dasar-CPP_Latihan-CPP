#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

#define potonganPermenu 0.15 //potonganPermenu = 15%
const int diskon = 20000;

int main(){
	char nama[50], menu[20], kembali;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian, harga[5] = {10500, 12000, 18500, 20000, 22500}, i=0;
	bool saldo;

	do{
		system("cls");
		cout << "============== Warung Makan Zuhril Istimewa ==============" <<endl;
		cout << "========== Enak & Nikmat Dengan Nuansa Pegunungan ========" <<endl;
		cout << "=============== Pilihan Menu Yang Beragam ================" <<endl;
		cout <<endl;
		cout << "Masukkan Nama Anda Sebagai Pemesan : ";
		cin>>nama;
		cout << "Pilhan Menu Yang Tersedia---" <<endl;
		cout << "-----------------------------------------------------------" <<endl;
		cout << "[1]. Bebek Goreng Sambel Matah			 = Rp 10.500 	 " <<endl;
		cout << "[2]. Pangsit Seafod Spesial			 = Rp 12.000 	 " <<endl;
		cout << "[3]. Nasi Goreng Smoke Beef 			 = Rp 18.500 	 " <<endl;
		cout << "[4]. Nasi Campur Ikan Tuna Spesial 	 = Rp 20.000 	 " <<endl;
		cout << "[5]. Sushi Ikan Salmon Sambal Ijo 		 = Rp 22.500 	 " <<endl;
		cout << "-----------------------------------------------------------" <<endl;
		cout << "Masukkan Menu Berdasarkan Nomor" <<endl;
		cout << "Silahkan Pilih Makanan Anda : ";
		cin>>makanan;

		//Memulai Operator Percabangan
		switch(makanan){
			case 1:
				strcpy(menu, "Bebek Goreng Sambel Matah");
				break;
			case 2:
				strcpy(menu, "Pangsit Seafod Spesial");
				i=1;
				break;
			case 3:
				strcpy(menu, "Nasi Goreng Smoke Beef");
				i=2;
				break;
			case 4:
				strcpy(menu, "Nasi Campur Ikan Tuna Spesial");
				i=3;
				break;
			case 5:
				strcpy(menu, "Sushi Ikan Salmon Sambal Ijo");
				i=4;
				break;
			default:
				cout << "Pilhan Yang Anda Pilih Tidak Tersedia" <<endl;
				goto labelUlang;
		}

		cout << "Anda Memilih : " <<menu <<endl;
		cout <<endl;
		cout << "Jumlah Makanan Yang Di beli : ";
		cin>>jumlah;

		//operator perhitungan
		makan = jumlah * harga[i];
		pajak = makan * potonganPermenu;
		total = pajak + makan;
		cout <<endl;

		cout << "\nWarung Makan Zuhril Istimewa" <<endl;
		cout << "==============================" <<endl;
		cout << "\tNama Pemesan     : 	" <<nama <<endl;
		cout << "\tMenu Makanan     : 	" <<menu <<endl;
		cout << "\tJumlah Makanan   : 	" <<jumlah << " Porsi" <<endl;
		cout << "\tHarga Makanan    :	" <<harga[i] << " * " <<jumlah <<endl;
		cout << "\tPajak Warung     :	" <<pajak <<endl;
		cout << "\tTotal Pembayaran : Rp. " <<total <<endl;

		//kondisi
		if(jumlah>=4){
			bonus = total - diskon;
			total = bonus;
			cout <<endl;
			cout << "# Anda Mendapatkan Diskon Potongan Harga : Rp. " <<diskon << " #" <<endl;
			cout << "Total Pembayaran Setelah Diskon : Rp. " <<total <<endl;
		}

			cout << "----------------------------" <<endl;
			cout << "Silahkan Bayar Disini : Rp. ";
			cin>>bayar;
			cout <<endl;

			//perulangan
			while(saldo = bayar < total){
				cout << "Maaf Saldo Anda Kurang, Silahkan Bayar Lagi : Rp. ";
				cin>>kurang;
				bayar += kurang;
			};

			kembalian = bayar - total;
			cout << "Uang Yang Anda Bayar : Rp. " <<bayar <<endl;
			cout << "Uang Kembalian : Rp. " <<kembalian <<endl;
			cout << "#######################################" <<endl;

			//ulang terus
			labelUlang:
			cout << "[Y = ya / T = tidak]" <<endl;
			cout << "Apakah Anda Ingin Memesan Lagi ? [Y/T] : ";
			cin>>kembali;

		}while(kembali == 'y' || kembali == 'Y');
		cout <<endl;
		cout << "Terimakasih Sudah Memesan Makanan Disini" <<endl;
		cout << "Selamat Menikmati" <<endl;
	return 0;
}
