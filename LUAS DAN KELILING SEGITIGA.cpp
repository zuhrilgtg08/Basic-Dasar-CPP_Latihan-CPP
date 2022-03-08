//program menghitung luas dan keliliing segitiga
#include <iostream>
using namespace std;

//prototipe
double luasSegitiga(double a, double t);
double kelilingSegitiga(double a, double b, double c);

int main(){
	double sisi, tinggi, output, s1, s2, s3;
	cout << "-----------------------------------------------------------" <<endl;
	cout << " 	PROGRAM MENGHITUNG LUAS DAN KELILING SEGITIGA" <<endl;
	cout << "-----------------------------------------------------------" <<endl <<endl;

	cout << "Masukkan Sisi Segitiga : ";
	cin>>sisi;
	cout << "Masukkan Tinggi segitiga : ";
	cin>>tinggi;
	cout << "Masukkan Sisi 1 Segitiga : ";
	cin>>s1;
	cout << "Masukkan Sisi 2 Segitiga : ";
	cin>>s2;
	cout << "Masukkan Sisi 3 Segitiga : ";
	cin>>s3;

	//memulai operator
	output = luasSegitiga(sisi, tinggi);
	cout << "Luasnya Adalah : " <<output <<endl;

	output = kelilingSegitiga(s1, s2, s3);
	cout << "Kelilingnya adalah : " <<output <<endl;


	return 0;
}

//fungsi
double luasSegitiga(double a, double t){
	double luas;
	luas = 0.5 * a * t;
	return luas;
}

double kelilingSegitiga(double a, double b, double c){
	double keliling;
	keliling = a + b + c;
	return keliling;
}