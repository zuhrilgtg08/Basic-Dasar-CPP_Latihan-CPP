#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	string jawaban,a;
	cout << "--------------------------------------------" <<endl;
	cout << "----SELAMAT DATANG DI GAME CERDAS CERMAT----" <<endl;
	cout << "--------------BY: Ahmad Zuhril--------------" <<endl;
	cout << "Jika kalian salah menjawab soal, maka akan ulang dari awal" <<endl;
	cout<<endl;
	cout << "tekan yes untuk memulai" <<endl;
	cout << "Atau tekan no untuk keluar Game : ";
	cin>>jawaban;

		if(jawaban == "yes"){
			cout << "1. Berkembang biak bertujuan untuk ?" <<endl;
			cout<<endl;
			cout << "A. Melestarikan keturunan" <<endl;
			cout << "B. Memperbanyak anak" <<endl;
			cout << "C. Menambah teman" <<endl;
			cout << "D. Membentuk kelompok" <<endl;
			cout<<endl;
			cout << "masukkan jawaban anda : ";
			cin>>jawaban;
		}else if(jawaban == "A"){
			cout << "Selamat JAWABAN ANDA BENAR !!!" <<endl;
		}else{
			cout << "JAWABAN ANDA SALAH !!!" <<endl;
		}
	return 0;
}