#include <iostream>
using namespace std;
//overloading adalah berarti menimpa

//membuat fungsi untuk bisa menghitung luas persegi & persegi panjang
//ini basic function nya
int luasKotak(int panjang, int lebar){
	int luas;
	luas = panjang * lebar;
	return luas;
}

//ini overloading nya function
int luasKotak(int sisi){
	int luas;
	luas = sisi * sisi;
	return luas;
}

double luasKotak(double sisi){
	return sisi * sisi;
}
int main(){
	cout << "luas kotak dari 2 x 3 : " <<luasKotak(2,3) <<endl;
	cout << "luas kotak dari 2 x 2 : " <<luasKotak(2) <<endl;
	cout << "luas kotak dari 2.5 x 2.5 : " <<luasKotak(2.5) <<endl;

	return 0;
}
