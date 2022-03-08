//latihan binary dengan data kompleks
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Mahasiswa{
	int NIS;
	string nama;
	string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi - 1)*sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
	return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile){
	myFile.write(reinterpret_cast<char*>(&data),sizeof(Mahasiswa));
}

void menulisPos(int posisi, Mahasiswa &bufferData, fstream &myFile){
	myFile.seekg((posisi - 1) * sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
}

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	
	//struktur data STRUCT Mahasiswa
	Mahasiswa siswa1, siswa2, siswa3, output;

	siswa1.NIS = 2407;
	siswa1.nama = "Akmal Luthfi";
	siswa1.jurusan = "Rekayasa Perangkat Lunak";

	siswa2.NIS = 2408;
	siswa2.nama = "Ahmad Zuhril Fahrizal";
	siswa2.jurusan = "Teknik Elektro";

	siswa3.NIS = 2409;
	siswa3.nama = "Nando Septian";
	siswa3.jurusan = "Teknik Pemesinan";

	menulisData(siswa1, myFile);
	menulisData(siswa2, myFile);
	menulisData(siswa3, myFile);

	siswa3.nama = "Wahyu Laksono";
	menulisPos(3, siswa3, myFile);

	output = ambilData(2, myFile);
	cout <<output.NIS <<endl;
	cout <<output.nama <<endl;
	cout <<output.jurusan <<endl;

	myFile.close();

	
	return 0;
}