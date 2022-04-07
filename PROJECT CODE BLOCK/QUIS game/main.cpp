#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    system("CLS");
	string jawaban;
	cout << "--------------------------------------------" <<endl;
	cout << "----SELAMAT DATANG DI GAME CERDAS CERMAT----" <<endl;
	cout << "--------------BY: Ahmad Zuhril--------------" <<endl;
	cout << "Jika kalian salah menjawab soal, maka akan ulang dari awal" <<endl;
	cout<<endl;
	cout << "tekan yes untuk memulai" <<endl;
	cout << "Atau tekan no untuk keluar Game : ";
	cin>>jawaban;

		if(jawaban == "yes"){
            cout<<endl;
			cout << "1. Berkembang biak bertujuan untuk ?" <<endl;
			cout<<endl;
			cout << "A. Melestarikan keturunan" <<endl;
			cout << "B. Memperbanyak anak" <<endl;
			cout << "C. Menambah teman" <<endl;
			cout << "D. Membentuk kelompok" <<endl;
			cout<<endl;
			cout << "masukkan jawaban anda : ";
			cin>>jawaban;
		}if(jawaban == "A"){
            cout << "Jawaban Anda Benar" <<endl;
		}else{
		    cout << "Jawaban Anda Salah" <<endl;
		}if(jawaban == "no"){
			cout << "keluar game" <<endl;
		}
	return 0;
}
