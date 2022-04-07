#include <iostream>
using namespace std;
int main(){
	int bayar, totalAkhir, diskon;
	char lanjut;
	labelReturn:
    system("cls");
	cout << "\nProgram Menghitung Diskon Pembayaran" <<endl;
	cout << "======================================" <<endl;
	cout << "Masukkan Total Pembayarannya : ";
	cin>>bayar;

	//memulai pengkondisian 1
	if((bayar >= 10000) && (bayar < 30000)){
		diskon = bayar * 0.1;
		totalAkhir = bayar - diskon;
		cout << "\nSelamat Anda Mendapat Potongan Diskon Sebesar 10 %" <<endl;
	}else if((bayar >= 30000) && (bayar < 60000)){
		diskon = bayar * 0.2;
		totalAkhir = bayar - diskon;
		cout << "\nSelamat Anda Mendapatkan Diskon Sebesar 20 %" <<endl;
	}else if(bayar >= 60000){
		diskon = bayar * 0.15;
		totalAkhir = bayar - diskon;
		cout << "\nAnda Mendapatkan Potongan Harga Sebesar 15%" <<endl;
	}else{
		totalAkhir = bayar;
	}
	cout << "Jadi Total Pembayarannya Adalah : " <<totalAkhir <<endl;
	cout << "======================================" <<endl;

	//mulai tanya ? y / n
	cout << "Lanjutkan ? {y / n} : ";
	cin>>lanjut;
	if(lanjut == 'y' | lanjut == 'Y'){
		goto labelReturn;
	}else if(lanjut == 'n' | lanjut == 'N'){
		cout << "Program Selesai" <<endl;
	}
	return 0;
}
