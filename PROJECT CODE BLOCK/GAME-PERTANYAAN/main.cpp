#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main(){
	string pertanyaan[10] = {
		"Sifat atau ciri dari makhluk hidup, kecuali !",
		"Di bawah ini yang bukan termasuk golongan makhluk hidup yaitu ?",
		"Ikan bernafas memakai ?",
		"Cocor bebek merupakan jenis tanaman yang berkembang biak dengan cara ?",
		"Tumbuhan memanfaatkan cahaya matahari untuk membantu proses ?",
		"Gerak jatuh yang disebabkan oleh gaya gravitasi bumi disebut sebagai gerak ?",
		"Sebuah Energi yang dapat menimbulkan gerakan disebut ?",
		"Di bawah ini ciri-ciri dari sebuah energi yaitu, kecuali !",
		"Kincir air bisa berputar karena mendapatkan energi ?",
		"Benda dibawah ini yang menggunakan energi gerak yaitu ?"
	};
	string pilihan[10][4] = {
		{"Bernafas", "Bergerak", "Berkembang biak", "Berwarna kuning"},
		{"Hewan", "Bunga", "Batu", "Manusia"},
		{"Insang", "Paru-paru", "Trakea", "Hidung"},
		{"Tunas", "Bertelur", "Stek daun", "Biji"},
		{"Hidup", "Berkembang biak", "Fotosintesis", "Bergerak"},
		{"Menggelinding", "Berputar", "Jatuh", "Mengalir"},
		{"Energi gerak", "Gaya gerak", "Gerak energi", "Energi gaya"},
		{"Tidak bisa dilihat", "Bisa dilihat", "Bisa dirasakan", "Dimanfaatkan"},
		{"Kinetik", "Panas", "Baterai", "Angin"},
		{"Terompet", "Setrika", "Kipas angin", "Termos"},
	};

	string koreksiPilihan[10] = {
		"Berwarna kuning", "Batu", "Insang", "Tunas", "Fotosintesis", "Berputar", "Energi gerak", "Bisa dilihat", "Kinetik", "Kipas angin"
	};

	int pilihanUser[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalPertanyaan = 10;
	int opsi;

	for(int i=0; i<totalPertanyaan; i++){
		cout << "Pertanyaan # " <<(i+1) <<endl;
		cout <<pertanyaan[i] <<endl;
		cout << "1. " <<pilihan[i][0] <<endl;
		cout << "2. " <<pilihan[i][1] <<endl;
		cout << "3. " <<pilihan[i][2] <<endl;
		cout << "4. " <<pilihan[i][3] <<endl <<endl;

		cout << "Pilih Pilhan (1 - 4) atau 0 untuk skip lalu masuk: ";
		cin>>pilihanUser[i];
		cout <<endl <<"------------------------------------" <<endl <<endl;
	}

	//Mengkoreksi Pilihan
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Koreksi Pilihan ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for(int i=0; i<totalPertanyaan; i++){
		cout << "Pertanyaan # " <<(i+1) <<endl;
		cout <<pertanyaan[i] <<endl;
		cout << "1. " <<pilihan[i][0] <<endl;
		cout << "2. " <<pilihan[i][1] <<endl;
		cout << "3. " <<pilihan[i][2] <<endl;
		cout << "4. " <<pilihan[i][3] <<endl;

		if(pilihanUser[i] == 0){
			cout << "Kamu Melompati Pertanyaan Ini." <<endl;
		}else{
			cout << "Kamu Memilih : " <<pilihan[i][pilihanUser[i]-1] <<endl;
		}
		cout << "Koreksi Pilihan : " <<koreksiPilihan[i] <<endl <<endl;
		cout << "Press any key to continue..." <<endl;
		getch();
		cout <<endl << "----------------------" <<endl;
	}
	 //print hasil koreksi
	 cout<<endl<<endl;
	 cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Hasil      ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int benar = 0;
	int salah = 0;
	int skip = 0;
	for(int i=0; i<totalPertanyaan; i++){
		if(pilihanUser[i] != 0){
			if(koreksiPilihan[i] == pilihan[i][pilihanUser[i]-1]){
				benar++;
			}else{
				salah++;
			}
		}else{
			skip++;
		}
	}
	cout << "Total Pertanyaan : " <<totalPertanyaan <<endl;
	cout << "Benar : " <<benar <<endl;
	cout << "Salah : " <<salah <<endl;
	cout << "Dilewati : " <<skip <<endl;
	getch();
	return 0;
}
