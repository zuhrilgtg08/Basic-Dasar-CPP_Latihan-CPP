#include <iostream>
using namespace std;
#define LUAS(R) (R*R)
#define VOLUME(R) (R*R*R)
// prototype
double luas_permukaan(double r);
double keliling(double r);
int main(){
	double rusuk,hasil;
	char terus;
	labelBack:
	system("cls");
	cout << "\nProgram Menghitung Kubus" <<endl;
	cout << "==========================" <<endl;
	cout << " - Masukkan Rusuk Kubus: ";
	cin>>rusuk;
	cout <<endl;
	cout << "==========================" <<endl;
	hasil = luas_permukaan(rusuk);
	cout << "Hasil Volumenya Adalah: " <<VOLUME(rusuk) <<endl;
	cout << "Hasil Luas Permukaanya: " <<hasil <<endl;
	cout << "Hasil Luas Salah Satu Sisinya: " <<LUAS(rusuk) <<endl;
	hasil = keliling(rusuk);
	cout << "Hasil Hitung Kelilingnya: " <<hasil <<endl;
	cout << "==========================" <<endl;
	//teruskan ?
	cout << "Mau Lanjut Terus ? {y / n} : ";
	cin>>terus;
	if(terus == 'y' || terus == 'Y'){
		goto labelBack;
	}else if(terus  == 'n' || terus == 'N'){
		cout << "Terimakasih Sudah Mampir :)" <<endl;
	}
	return 0;
}
// function
double luas_permukaan(double r){
	return 6 * r * r;
}

double keliling(double r){
	return 12 * r;
}