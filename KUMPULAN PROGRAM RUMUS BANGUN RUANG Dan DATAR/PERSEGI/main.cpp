//PERSEGI
#include <iostream>
using namespace std;
#define LUAS(S) (S*S)
#define KELILING 4
#define SELESAI "Terimakasih Sudah Mencoba"
int main(){
	float sisi;
	char lanjut;
	system("cls");
	labelReturn:
	cout << "\nProgram Menghitung Luas & Keliling Persegi" <<endl;
	cout << "============================================" <<endl <<endl;
	cout << "Masukkan Sisinya: ";
	cin>>sisi;
	cout <<endl;
	cout << "Hasil Luasnya Adalah: " <<LUAS(sisi) <<endl;
	cout << "Hasil Kelilingnya Adalah: " <<KELILING * sisi <<endl;
	cout << "============================================" <<endl;
	//mau lanjut ? 
	cout << "Terus Lanjut ? [y / n]: ";
	cin>>lanjut;

	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelReturn;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout <<SELESAI <<endl;
	}
	return 0;
}