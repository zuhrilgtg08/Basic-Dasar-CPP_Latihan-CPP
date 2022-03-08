#include <iostream>
using namespace std;
int main(){
	int nilai[100], jumlah;
	char nama[100][100], terus;
	labelReturn:
	system("cls");
	cout << "\nProgram Menentukan Kelulusan Siswa" <<endl;
	cout << "====================================" <<endl;
	cout << "Masukkan Jumlah Siswa : ";
	cin>>jumlah;

	//loop jumlah
	for(int i = 0; i < jumlah; i++){
		cout << " # Masukkan Nama Siswa : ";
		cin>>nama[i];
		cout << " = Masukkan Nilai Siswa : ";
		cin>>nilai[i];
	}
	cout << "\n======Tampilkan Data======\n\n";

	//loop nilai
	for(int i = 0; i < jumlah; i++){
		cout <<nama[i] << " Nilai : " <<nilai[i] <<endl;
	}
	cout << "\n====Tentukan Kelulusan====\n\n";

	//loop kelulusan
	for(int i = 0; i < jumlah; i++){
		if(nilai[i] < 75){
			cout <<nama[i] << " Dengan Nilai : " <<nilai[i] << " Dinyatakan Tidak Lulus\n";
		}else{
			cout <<nama[i] << " Dengan Nilai : " <<nilai[i] << " Selamat Anda Lulus\n" <<endl;;
		}
	}

	//sesi tanya lanjut ?
	cout << "Mau Lanjut ? (y / n) : ";
	cin>>terus;
	if(terus == 'y' | terus == 'Y'){
		goto labelReturn;
	}else if(terus == 'n' | terus == 'N'){
		cout << "Terimakasih Sudah Mencoba" <<endl;
	}
	return 0;
}