//PERSEGI PANJANG
#include <iostream>
using namespace std;
#define LUAS(PANJANG,LEBAR) (PANJANG*LEBAR)
int main(){
	double p,l;
	string lanjut;
	system("cls");
	labelTerus:
	cout << "\nMenghitung Luas & Keliling Persegi Panjang" <<endl;
	cout << "============================================" <<endl <<endl;
	cout << "1. Masukkan Panjangnya: ";
	cin>>p;
	cout << "2. Masukkan Lebarnya: ";
	cin>>l;
	cout << "============================================" <<endl;
	//output
	cout << "Hasil Luasnya Adalah: " <<LUAS(p,l) <<endl;
	cout << "Hasil Kelilingnya Adalah: " <<2 * (p + l) <<endl;
	cout <<endl;
	//Menu lanjut
	cout << "============================================" <<endl;
	cout << "Mau Lanjutkan ? (yes / no) : ";
	cin>>lanjut;
	//lanjutkah ?
	if(lanjut == "yes" || lanjut == "YES"){
		goto labelTerus;
	}else if(lanjut == "no" || lanjut == "NO"){
		cout << "Terimakasih Sudah Mencoba Program ini." <<endl;
	}
	return 0;
}