#include <iostream>
#include "simpan.h"
using namespace std;                                                         

int main(){
	float jari, hasil;
	char lanjut;
	labelTerus:
	system("cls");
	cout << "\nProgram Menghitung Volume & Luas Bola" <<endl;
	cout << "=======================================" <<endl;
	cout << " - Masukkan Jari - Jari Bola: ";
	cin>>jari;
	cout <<endl;
	hasil = volume(jari);
	cout << "Hasil Volumenya Adalah: " <<hasil <<endl;
	hasil = luas(jari);
	cout << "Hasil Luasnya Adalah: " <<hasil <<endl;
	cout << "=======================================" <<endl <<endl;
	cout << "Lanjutkan ? [y / n] : ";
	cin>>lanjut;
	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelTerus;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout << "Terimakasih Sudah Mencoba" <<endl;
	}
	return 0;
}