#include <iostream>
using namespace std;
int main(){
	double r,d;
	char tanya;
	system("cls");
	labelContinue:
	cout << "\nProgram Menghitung Luas & Keliling Lingkaran" <<endl;
	cout << "==============================================" <<endl;
	cout << "Masukkan Jari - Jari Lingkaran: ";
	cin>>r;
	cout << "Masukkan Diameter Lingkaran: ";
	cin>>d;
	cout << "==============================================" <<endl;
	cout << "Hasil Luasnya: " <<3.14 * r * r <<endl;
	cout << "Hasil Kelilingnya: " <<3.14 * d <<endl <<endl;
	cout << "==============================================" <<endl;
	cout << "Lanjut ? {y / n} : ";
	cin>>tanya;
	if(tanya == 'y' || tanya == 'Y'){
		goto labelContinue;
	}else if(tanya == 'n' || tanya == 'N'){
		cout << "Terimakasih Sudah Mencoba :)" <<endl;
	}
  	return 0;
}