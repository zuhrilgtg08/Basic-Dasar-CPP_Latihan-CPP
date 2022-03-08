#include <iostream>
#include "size.h"
using namespace std;
int main(){
	double r,t,d,out;
	string tanya;
	labelLanjut:
	system("cls");
	cout << "\nProgram Menghitung Tabung" <<endl;
	cout << "===========================" <<endl;
	cout << "1. Masukkan Jari - Jari Tabung : ";
	cin>>r;
	cout << "2. Masukkan Tinggi Tabung : ";
	cin>>t;
	cout << "3. Masukkan Diameter Tabung : ";
	cin>>d;
	cout << "===========================" <<endl <<endl;

	//Keluaran Nilai
	out = volume(r,t);
	cout <<V <<out <<endl;
	out = luas(r,d,t);
	cout <<L <<out <<endl;
	cout << "===========================" <<endl;

	//tanya lanjut kah ?
	cout <<T;
	cin>>tanya;
	if(tanya == "iya" || tanya == "IYA"){
		goto labelLanjut;
	}else if(tanya == "tidak" || tanya == "TIDAK"){
		cout <<N <<endl;
	}
	return 0;
}