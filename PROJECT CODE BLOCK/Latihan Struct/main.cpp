#include <iostream>
#include <string>
using namespace std;

//struct
struct data{
	string nama;
	string jurusan;
	int noAbsen;
	int noId;
	string status;
};

int main(){
	data siswa;
	siswa.nama = "Ahmad Zuhril Fahrizal";
	siswa.jurusan = "Rekayasa Perangkat Lunak";
	siswa.noAbsen = 4;
	siswa.noId = 240767435009;
	siswa.status = "Lulus dan Naik Kelas 11 RPL";

	cout << "Data Siswa : " <<endl;
	cout << "* " << "Nama Siswa : " <<siswa.nama <<endl;
	cout << "* " << "Jurusan : " <<siswa.jurusan <<endl;
	cout << "* " << "No Absen : " <<siswa.noAbsen <<endl;
	cout << "* " << "No ID Siswa : " <<siswa.noId <<endl;
	cout << "* " << "Status : " <<siswa.status <<endl;
	return 0;
}
