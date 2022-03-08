#include <iostream>
using namespace std;

//prototype
double l(double d1, double d2);
double k(double sisi);
int main(){
	double d1,d2,sisi,hasil;
	char tanya;
	labelLanjut:
	system("cls");
	cout << "\nProgram Menghitung Luas & Keliling Belah Ketupat" <<endl;
	cout << "==================================================" <<endl;
	cout << "Masukkan Diagonal 1: ";
	cin>>d1;
	cout << "Masukkan Diagonal 2: ";
	cin>>d2;
	cout << "Masukkan Ke Empat Sisinya: ";
	cin>>sisi;
	cout << "==================================================" <<endl;

	//operator
	hasil = l(d1,d2);
	cout << "Hasil Luasnya : " <<hasil <<endl;
	hasil = k(sisi);
	cout << "Hasil Kelilingnya : " <<hasil <<endl;

	//lanjut ?
	cout << "Coba Program Lagi Ka ? (y / n) : ";
	cin>>tanya;
	if(tanya == 'y' || tanya == 'Y'){
		goto labelLanjut;
	}else if(tanya == 'n' || tanya == 'N'){
		cout << "Sampai Jumpa Lagi Yah" <<endl;
	}
	return 0;
}
//function
double l(double d1, double d2){
	return 0.5 * d1 * d2;
}

double k(double sisi){
	return 4 * sisi;
}