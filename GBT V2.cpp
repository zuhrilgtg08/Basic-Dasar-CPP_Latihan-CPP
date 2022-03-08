#include <iostream>
using namespace std;

//prototype
float volume(float alas, float tinggi, float tingPris);
double luasPermukaan(double alas, double tinggi, double sisi, double tingPris);

int main(){
	float hasil, alas, tinggi, sisi, tinggiP;
	cout << "-------------------------------------------------------------" <<endl;
	cout << "Program Menghitung Voulume dan Luas Permukaan Prisma Segitiga" <<endl;
	cout << "-------------------------------------------------------------" <<endl;

	cout << "masukkan alas prisma: ";
	cin>>alas; 
	cout << "masukkan tinggi alas: ";
	cin>>tinggi;
	cout << "masukkan tinggi prisma: ";
	cin>>tinggiP;
	cout << "masukkan sisi sisi prisma: ";
	cin>>sisi;

	//memulai operator
	hasil = volume(alas, tinggi, tinggiP);
	cout << "hasil hitung Volumenya adalah = " <<hasil <<endl;

	hasil = luasPermukaan(alas, tinggi, sisi, tinggiP);
	cout << "hasil hitung luas permukaannya adalah = " <<hasil <<endl;

	return 0;
}

//fungsi volume
float volume(float alas, float tinggi, float tingPris){
	float hitungVolume;
	hitungVolume = ((alas * tinggi)/2) * tingPris;
	return hitungVolume;
}

//fungsi Luas Permukaan
double luasPermukaan(double alas, double tinggi, double sisi, double tingPris){
	double hitungLuasper;
	hitungLuasper = (2 * (0.5 * alas * tinggi)) + (sisi + sisi + sisi * tingPris);
	return hitungLuasper;
}