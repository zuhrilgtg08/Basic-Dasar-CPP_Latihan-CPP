#include <iostream>
#include <string>
using namespace std;

/* 	1 lustrum = 5 tahun
	1 windu = 8 tahun
	1 dekade = 10 tahun
	1 abad = 100 tahun
	1 masehi = 1000 tahun
*/

//Prototype
int lustrum(int input);
int windu(int input);
int dekade(int input);
int abad(int input);
int masehi(int input);


int main(){
	int inputUser, output;
	cout << "============================" <<endl;
	cout << "PROGRAM CONVERT SATUAN TAHUN" <<endl;
	cout << "============================" <<endl <<endl;
	cout << "Masukkan Umur Anda: ";
	cin>>inputUser;
	cout <<endl;

	output = lustrum(inputUser);
	cout << "Hasil Convert Umur Anda Ke Lustrum: " <<output << " Tahun" <<endl;

	output = windu(inputUser);
	cout << "Hasil Convert Umur Anda Ke Windu: " <<output << " Tahun" <<endl;

	output = dekade(inputUser);
	cout << "Hasil Convert Umur Anda Ke Dekade: " <<output << " Tahun" <<endl;

	output = abad(inputUser);
	cout << "Hasil Convert Umur Anda Ke Abad: " <<output << " Tahun" <<endl;

	output = masehi(inputUser);
	cout << "Hasil Convert Umur Anda Ke Masehi: " <<output << " Tahun" <<endl;
	return 0;
}

//function
int lustrum(int input){
	return input * 5;
}

int windu(int input){
	return input * 8;
}

int dekade(int input){
	return input * 10;
}

int abad(int input){
	return input * 100;
}

int masehi(int input){
	return input * 1000;
}
