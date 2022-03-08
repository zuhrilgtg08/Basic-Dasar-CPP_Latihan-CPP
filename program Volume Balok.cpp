#include <iostream>
using namespace std;

//rumus volume Balok
double volume(double p, double l, double t){
	double hitungVolume;
	hitungVolume = p * l * t;
	return hitungVolume;
}

//rumus Luas Permukaan Balok
double luasPermukaan(double p, double l, double t){
	double hitungLuaspermukaan;
	hitungLuaspermukaan = 2 * ((p*l) + (p*t) + (l*t));
	return hitungLuaspermukaan;
}

//memulai operator
int main(){
	double panjang, lebar, tinggi, hasilVolume, hasilLp;
	cout << "Masukkan Panjang : \t";
	cin>>panjang;
	cout << "Masukkan Lebar : \t";
	cin>>lebar;
	cout << "Masukkan Tinggi : \t";
	cin>>tinggi;
	cout<<endl;

	//memulai rumus
	hasilVolume = volume(panjang, lebar, tinggi);
	cout << "Hasil Dari Volume Balok : " <<hasilVolume <<endl;

	hasilLp = luasPermukaan(panjang, lebar, tinggi);
	cout << "Luas Permukaan Dari Balok : " <<hasilLp <<endl;
	cout<<endl;

	//akhir program
	cout << "Program Selesai" <<endl;
	cin.get();
	return 0;
}
