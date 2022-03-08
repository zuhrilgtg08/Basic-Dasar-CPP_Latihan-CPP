//LAYANG - LAYANG
#include <iostream>
#include <string>
using namespace std;

//function
float luas(float d1, float d2){
	return 0.5 * d1 * d2;
}

double keliling(double s1, double s2){
	return 2 * (s1 + s2);
}

int main(){
	double d1,d2,s1,s2,out;
	string terus;
	system("cls");
	labelLanjut:
	cout << "\nProgram Menghitung Luas & Keliling Layang - Layang" <<endl;
	cout << "==================================================" <<endl;
	cout << "- Masukkan Diagonal 1 nya: ";
	cin>>d1;
	cout << "- Masukkan Diagonal 2 nya: ";
	cin>>d2;
	cout << "- Masukkan Sisi Pertamanya: ";
	cin>>s1;
	cout << "- Masukkan Sisi Keduanya: ";
	cin>>s2;
	cout << "==================================================" <<endl;

	//memulai operator
	out = luas(d1,d2);
	cout << "Hasil Luasnya = " <<out <<endl;

	out = keliling(s1,s2);
	cout << "Hasil Kelilingnya = " <<out <<endl;
	cout << "==================================================" <<endl;

	//lanjutkan ?
	cout << "Mau Lanjut ? [iya / tidak] : ";
	cin>>terus;
	if(terus == "iya" || terus == "IYA"){
		goto labelLanjut;
	}else if(terus == "tidak" || terus == "TIDAK"){
		cout << "Terimakasih Sudah Mencoba Program Ini :)" <<endl;
	}

	return 0;
}