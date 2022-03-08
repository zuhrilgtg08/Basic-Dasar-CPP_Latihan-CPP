#include <iostream>
using namespace std;
int main(){
	//type def
	//adalah memberikan alias untuk tipe data;
	
	typedef int I;
	typedef int Ivector2d[3];
	typedef unsigned long panjang;
	typedef double vector[2];
	typedef string nama;

	using numbers = double;
	//ini cara penulisan alias nya miasl kita memiliki sebuah program dengan tipe data yang misalnya
	//int nah supaya lebih singkat kita typedef tipe_datanya aliasnya. typedef int I;
	//juga bisa merubah definisi kita bisa ubah itu semua dengan typedef;
	I a = 10;
	Ivector2d b = {1, 2,  3};
	panjang c = 124563647;
	vector d = {13.5, 15.5};
	nama e = "zuhril";
	numbers f = 3.14;

	cout << "nilai a: " <<a <<endl;
	cout << "nilai b: " <<b[0] << " dan " <<b[1] << " " <<b[2] <<endl;
	cout << "nilai c: " <<c <<endl;
	cout << "nilai d: " <<d[0] <<" dan " <<d[1] <<endl;
	cout << "nilai e: " <<e <<endl;
	cout << "nilai f: " <<f <<endl;
 	cin.get();
	return 0;
}