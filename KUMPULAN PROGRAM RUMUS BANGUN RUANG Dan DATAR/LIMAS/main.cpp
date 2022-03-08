//LIMAS SEGITIGA
#include <iostream>
#include "rumus.h"
using namespace std;


int main(){
	double s,a,t,ts,keluaran;
	string lanjut;
	labelTerus:
	system("cls");
	cout << "\nProgram Menghitung Limas Segitiga" <<endl;
	cout << "===================================" <<endl;
	cout << " - Masukkan Sisi Alas Limas: ";
	cin>>s;
	cout << " - Masukkan Tinggi Sisi Limas: ";
	cin>>ts;
	cout << " - Masukkan Alas Segitiga: ";
	cin>>a;
	cout << " - Masukkan Tinggi Alas Segitiga: ";
	cin>>t;
	cout << "===================================" <<endl <<endl;

	//memulai operator
	keluaran = volume(s,ts);
	cout <<V <<keluaran <<endl;
	keluaran = luas(s,a,t);
	cout <<L <<keluaran <<endl;
	cout << "===================================" <<endl;

	//mau dilanjutkan ?
	cout <<T;
	cin>>lanjut;
	if(lanjut == "iya" || lanjut == "IYA"){
		goto labelTerus;
	}else if(lanjut == "tidak" || lanjut == "TIDAK"){
		cout <<S <<endl;
	}
	return 0;
}