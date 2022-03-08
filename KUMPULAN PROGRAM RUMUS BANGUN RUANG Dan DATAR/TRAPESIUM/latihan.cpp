//TRAPESIUM
#include <iostream>
using namespace std;

#define KELILING(S) (S+S+S+S)
double luas(double alas, double bawah, double tinggi){
	return (0.5 * alas) + (bawah * tinggi);
}

int main(){
	double s,a,b,t,hasil;
	char lanjut;
	system("cls");
	labelTerus:
	cout << "\nProgram Menghitung Luas & Keliling Trapesium" <<endl;
	cout << "============================================" <<endl;
	cout << "1. Masukkan Sisi Alas Trapesium: ";
	cin>>a;
	cout << "2. Masukkan Sisi Bawah Trapesium: ";
	cin>>b;
	cout << "3. Masukkan Tinggi Trapesium: ";
	cin>>t;
	cout << "4. Masukkan Sisi Trapesium: ";
	cin>>s;
	cout << "============================================" <<endl;
	
	//memulai operator
	hasil = luas(a,b,t);
	cout << "Hasil Luasnya Adalah: " <<hasil <<endl;
	cout << "Hasil Kelilingnya Adalah: " <<KELILING(s) <<endl;
	cout << "============================================" <<endl;
	cout << "Mau Lanjut ? [y / n]: ";
	cin>>lanjut;
	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelTerus;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout << "Terimakasih Telah Mencoba !!!" <<endl;
	}
	return 0;
}