#include <iostream>
#include <string>
using namespace std;

//struct A
struct aktor{
	string nama;
	int tahunLahir;
};

//struct B
struct film{
	string judul;
	string genre;
	int tahun;
	//struct si A (struct aktor)
	aktor pemeran1;
	aktor pemeran2;
};

int main(){
	aktor aktor1, aktor2;
	film film1, film2;

	//membuat aktor1
	aktor1.nama = "Kenny Ackerman";
	aktor1.tahunLahir = 1999;

	//membuat aktor2
	aktor2.nama = "Uzumaki Boruto";
	aktor2.tahunLahir = 1997;

	//membuat film1
	film1.judul = "Attack On Titan";
	film1.genre ="Action";
	film1.tahun = 2013;
	film1.pemeran1 = aktor1;

	//membuat film2
	film2.judul = "Boruto The Movie";
	film2.genre ="Adventure";
	film2.tahun = 2016;
	film2.pemeran2 = aktor2;

	//keluaran Program
	cout <<"Daftar Movie Anda yang ditonton !" <<endl;
	cout<<endl;

	//keluaran film1
	cout << "# " << "Judul Movie: " <<film1.judul <<endl;
	cout << "1. "<< "Genre Movie: " <<film1.genre <<endl;
	cout << "2. "<< "Tahun Rilis: " <<film1.tahun <<endl;
	cout << "3. "<< "Tokoh Movie: " <<film1.pemeran1.nama <<endl;
	cout << "4. "<< "Tahun Lahir: " <<film1.pemeran1.tahunLahir <<endl;
	cout<<endl;

	//keluaran film2
	cout << "# " << "Judul Movie: " <<film2.judul <<endl;
	cout << "1. "<< "Genre Movie: " <<film2.genre <<endl;
	cout << "2. "<< "Tahun Rilis: " <<film2.tahun <<endl;
	cout << "3. "<< "Tokoh Movie: " <<film2.pemeran2.nama <<endl;
	cout << "4. "<< "Tahun Lahir: " <<film2.pemeran2.tahunLahir <<endl;
	return 0;
}