#include <iostream>
#include "rumus.h"
using namespace std;
//prototype
double luas(double alas, double tinggi);
void printL(float x);
void printK(double y);
int main(){
	double a,t,s,out;
	char lanjut;
	system("cls");
	labelLanjut:
	cout << "\nProgram Menghitung Luas & Keliling Segitiga" <<endl;
	cout << "===========================================" <<endl;
	cout <<endl;
	cout << "1. Masukkan Alasnya: ";
	cin>>a;
	cout << "2. Masukkan Tingginya: ";
	cin>>t;
	cout << "3. Masukkan Sisinya: ";
	cin>>s;
	//memulai operator
	out = luas(a,t);
	cout << "===========================================" <<endl;
	printL(out);
	printK(KELILING(s,s,s));
	cout << "===========================================" <<endl;
	cout << "Terus Lanjut (y / n): ";
	cin>>lanjut;
	if(lanjut == 'y' || lanjut == 'Y'){
		goto labelLanjut;
	}else if(lanjut == 'n' || lanjut == 'N'){
		cout << "Terimakasih Telah Mencoba" <<endl;
	}
 	return 0;
}