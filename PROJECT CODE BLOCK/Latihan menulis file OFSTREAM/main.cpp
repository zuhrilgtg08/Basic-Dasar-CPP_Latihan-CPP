#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string profileA("1. Nama : Akmal Luthfi\n   Kelas : X - RPL\n   Agama : Islam");
	string profileZ("2. Nama : Ahmad Zuhril Fahrizal\n   Kelas : X - RPL\n   Agama : Islam");
	string proflieN("3. Nama : Nando Septian Prisandy\n   Kelas : X - RPL\n   Agama : Islam");
	string data;
	int nomor;
	string alamat;
	int angka;
	ofstream dataSaya;

	cout << "masukkan angka : ";
	cin>>angka;

	dataSaya.open("myData1.txt");
	dataSaya <<profileA;
	dataSaya.close();

	dataSaya.open("myData2.txt");
	dataSaya <<profileZ;
	dataSaya.close();

	dataSaya.open("myData3.txt");
	dataSaya <<proflieN;
	dataSaya.close();

	dataSaya.open("myData4.txt");
	dataSaya <<angka;
	dataSaya.close();

	cout << "masukkan nama anda : ";
	cin>>data;
	cout << "masukkan nomor NIK anda : ";
	cin>>nomor;
	cout << "masukkan almat rumah anda : ";
	cin>>alamat;

	dataSaya.open("coba.txt");
	dataSaya <<data <<"\n" <<nomor <<"\n" <<alamat;
	dataSaya.close();


	return 0;
}
