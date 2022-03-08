//POINTER hanyalah alamat yang bisa kita gunakan untuk mengambil/menaruh sebuah variable 
//kegunaan pointer untuk menimalisir memori
//berguna mengakses alamat memori yang sama;
//untuk mengambil sebuah alamat menggunakan tanda &.misal int a = &a;
//dan unutk memberikan alamat ke sebuah variable menggunakan tanda *; misal int *a(namaVariable) = value;

#include <iostream>
using namespace std;

int main(){
	int a = 5;
	//pointer
	//pointer akan selalu bertipe data integer
	int *aPtr = nullptr;
	aPtr = &a;
	//int a memiliki nilai dan adress (alamat)
	cout << "ini adalah nilai dari a : " <<a <<endl;
	cout << "alamat dari si a : " <<aPtr <<endl;
	//cout <<sizeof(int) <<endl;
	//mengambil nilai si a
	//dereferencing, mengambil data dari sebuah pointer
	
	cout << "mengambil nilai si pointer aPtr : " <<*aPtr <<endl;
	

	return 0;
}