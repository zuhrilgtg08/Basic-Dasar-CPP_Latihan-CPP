//c = celcius , r = reamure, f = farentHeit, k = kelvin;
#include <iostream>
#include <string>
using namespace std;

//fungsi
double hitungR(double c){
	double r;
	r = c * 4/5;
	return r;
}

double hitungK(double c){
	double k;
	k = c + 273;
	return k;
}

double hitungF(double c){
	double f;
	f = (c * 9/5) + 32;
	return f;
}
//void
void printConvert(double c){
	double r, k, f;
	r = hitungR(c);
	k = hitungK(c);
	f = hitungF(c);
	cout <<c <<" derajat (celcius) : " <<endl;
	cout <<"#. " <<r <<" derajat (reamure)" <<endl;
	cout <<"#. " <<k <<" derajat (kelvin)" <<endl;
	cout <<"#. " <<f <<" derajat (farentheit)" <<endl;
}

int main(){
	double c, r, f, k;
	string lanjut;
	do{
		system("cls");
		cout << "konversi suhu" <<endl;
		cout << "masukkan suhu (celcius) : ";
		cin>>c;
		printConvert(c);
		cout << "lanjut kah ? <y/n> : ";
		cin>>lanjut;
	}while(lanjut == "y");
	system("cls");
	cout << "Terimakasih!!! Program telah selesai" <<endl;

	
	return 0;
}