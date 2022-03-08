#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Mahasiswa{
	int NIS;
	string nama;
	string jurusan;
};

int main(){
	Mahasiswa hasilBaca;

	//Membaca Data
	fstream myFile;
	myFile.open("data.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&hasilBaca),sizeof(Mahasiswa));

	cout <<hasilBaca.NIS <<endl;
	cout <<hasilBaca.nama <<endl;
	cout <<hasilBaca.jurusan <<endl;

	myFile.close();
	return 0;
}