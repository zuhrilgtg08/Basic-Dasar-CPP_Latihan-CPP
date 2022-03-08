#include <iostream>
#include <string>
#include "hitung.h"
using namespace std;

template <typename D>
void display(D print);
double jarak(double kecepatan, double waktu);
float kecepatan(float jarak, float waktu);
double waktu(double jarak, double kecepatan);

int main(int argc, char const *argv[]){
	double j, k, w, out;	
	cout << "\nProgram Menghitung Jarak, Kecepatan & Waktu" <<endl;
	cout << "=============================================" <<endl <<endl;
	cout << "Masukkan Jarak Yang Ditempuh : ";
	cin>>j;
	cout << "Masukkan Kecepatan Yang Dipakai : ";
	cin>>k;
	cout << "Masukkan Waktu Yang Akan Ditmpuh : ";
	cin>>w;

	//operasi perhitungan
	out = jarak(k,w);
	display(out);

	out = kecepatan(j,w);
	display(out);

	out = waktu(j,k);
	display(out);
	return 0;
}