#include <iostream>
#include <string>
using namespace std;

//prototype
double volumeTabung(double r, double t);
double luasPermukaan(double r, double t);

int main(){
	double jari, tinggi, output;
	cout << "-------------------------------------------------" <<endl;
	cout << "Program Menghitung Volume & Luas Permukaan Tabung" <<endl;
	cout << "-------------------------------------------------" <<endl;

	cout << "Masukkan jari - jarinya: ";
	cin>>jari;
	cout << "Masukkan Tingginya: ";
	cin>>tinggi;

	//memulai operator
	output = volumeTabung(jari, tinggi);
	cout << "hasil Volume Tabung: " <<output <<endl;
	output = luasPermukaan(jari, tinggi);
	cout << "hasil Luas Permukaan Tabung: " <<output <<endl;
	cout<<endl;
	cout << "PROGRAM SELESAI !!!" <<endl;
	return 0;
}

//Function
double volumeTabung(double r, double t){
	double hitungVolume;
	hitungVolume = 3.14 * r * r * t;
	return hitungVolume;
}

double luasPermukaan(double r, double t){
	double hitungLuas;
	hitungLuas = (2 * (3.14 * r * r)) + ((3.14 * 2 * r) * t);
	return hitungLuas;
}