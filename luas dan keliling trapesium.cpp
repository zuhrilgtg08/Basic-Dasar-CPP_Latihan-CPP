#include <iostream>
using namespace std;
//prototipe
double luasTrap(double a, double b, double t);
double kelilingTrap(double a, double b, double c, double d);

int main(){
	double atas, bawah, tinggi, hasilLuas, hasilKelilling;
	cout << "Program Menghitung luas & keliling trapesium" <<endl;
	cout<<endl;
	cout << "masukkan nilai atas trapesium : ";
	cin>>atas;
	cout << "masukkan nilai bawah trapesium : ";
	cin>>bawah;
	cout << "masukkan tinggi trapesium : ";
	cin>>tinggi;

	//memulai operator;
	hasilLuas = luasTrap(atas, bawah, tinggi);
	cout << "hasil luasnya adalah : " <<hasilLuas <<endl;

	hasilKelilling = kelilingTrap(atas, atas, bawah, tinggi);
	cout << "Kelilingnya adalah : " <<hasilKelilling <<endl;
	return 0;
}

//fungsi
double luasTrap(double a, double b, double t){
	double luas;
	luas = 0.5 * (a + b) * t;
	return luas;
}

double kelilingTrap(double a, double b, double c, double d){
	double keliling;
	keliling = a + b + c + d;
	return keliling;
}