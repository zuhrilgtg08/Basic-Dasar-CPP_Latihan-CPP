//PERISMA SEGITIGA
#include <iostream>
#include "rumus.h"
using namespace std;

int main(){
	char lanjut;
	double a,t,tinggiPrisma,sisi,output;
	labelTerus:
	system("cls");
	cout << "\nProgram Menghitung Prisma Segitiga" <<endl;
	cout << "====================================" <<endl;
	cout << "1. Masukkan Panjang Alas Prisma: ";
	cin>>a;
	cout << "2. Masukkan Tinggi Alas Prisma: ";
	cin>>t;
	cout << "3. Masukkan Tinggi Prisma: ";
	cin>>tinggiPrisma;
	cout << "4. Masukkan Sisi Alas Prisma: ";
	cin>>sisi;
	cout << "====================================" <<endl <<endl;

	//memulai perhitungan
	output = volume(a,t,tinggiPrisma);
	cout <<V <<output <<endl;
	output = luas_prisma(a,t,sisi);
	cout <<L <<output <<endl;
	output = luas_selimut(sisi,t);
	cout <<LS <<output <<endl;
	output = luas_segitiga(a,t);
	cout <<LT <<output <<endl;
	cout << "====================================" <<endl;

	//mau lanjut ?
	cout << "Terus Lanjut ? [y / n] : ";
	cin>>lanjut;
	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelTerus;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout << "Program Selesai, Terimakasih :)" <<endl;
	}
	return 0;
}