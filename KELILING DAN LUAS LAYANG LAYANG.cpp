//program manghitung luas dan keliling layang layang
#include <iostream>
using namespace std;

//prototipe
double luasLayang(double d1, double d2);
double kelilingLayang(double a, double b, double c, double d);
void printLuas(double x);
void printKeliling(double y);

int main(){
	double dG1, dG2, dG3, dG4, hl, hk;
	cout << "=============================================================================" <<endl;
	cout << "	PROGRAM MENGHITUNG LUAS DAN KELILING LAYANG - LAYANG " <<endl;
	cout << "=============================================================================" <<endl <<endl;

	cout << "Masukkan Diagonal 1 Layang - Layang : ";
	cin>>dG1;
	cout << "Masukkan Diagonal 2 Layang - Layang : ";
	cin>>dG2;
	cout << "Masukkan Diagonal 3 Layang - Layang : ";
	cin>>dG3;
	cout << "Masukkan Diagonal 4 Layang - Layang : ";
	cin>>dG4;

	//memulai operator
	hl = luasLayang(dG1, dG2);
	printLuas(hl);

	hk = kelilingLayang(dG1, dG2, dG3, dG4);
	printKeliling(hk);
	return 0;

}

//void tampilkan
void printLuas(double x){
	cout << "Hasil Luas Layang - Layang : " <<x <<endl;
}

void printKeliling(double y){
	cout << "Keliling Dari Layang - Layang : " <<y <<endl;
}

//fungsi
double luasLayang(double d1, double d2){
	double luas;
	luas = 0.5 * d1 * d2;
	return luas;
}

double kelilingLayang(double a, double b, double c, double d){
	double keliling;
	keliling = a + b + c + d;
	return keliling;
}