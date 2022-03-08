#include <iostream>
using namespace std;

//function
double volume(double r, double t){
	return 3.14 * 3 * r * r * t;
}

double luas(double r, double d, double t){
	return (3.14 * r * r) + (3.14 * d * t);
}

int main(){
	double r,d,t,hasil;
	char lanjut;
	labelReturn:
	system("cls");
	cout << "\nProgram Menghitung Kerucut Volume & Luas" <<endl;
	cout << "==========================================" <<endl;
	cout << "Masukkan Jari - jari nya : ";
	cin>>r;
	cout << "Masukkan Diameter nya : ";
	cin>>d;
	cout << "Masukkan Tinggi Nya : ";
	cin>>t;
	cout << "==========================================" <<endl;
	cout <<endl;

	//memulai perhitungan
	hasil = volume(r,t);
	cout << "Volumenya Adalah : " <<hasil <<endl;
	hasil = luas(r,d,t);
	cout << "Luasnya Adalah : " <<hasil <<endl;
	cout << "==========================================" <<endl;

	//pertanyaan
	cout << "Lanjut ? (y / n): ";
	cin>>lanjut;
	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelReturn;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout << "Program Selesai" <<endl;
	}
	return 0;
}