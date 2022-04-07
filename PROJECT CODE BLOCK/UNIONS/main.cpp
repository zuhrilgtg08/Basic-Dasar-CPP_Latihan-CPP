//tipe data unions
//jika menggunakan tipe data unions jika salah satu komponen data kita ubah komponen yang lain juga ikut berubah
//unions mempunyai 2 buah bentuk yang berbeda berdasarkan tipe data yang diberikan
//tipe datanya itu bersifat dynamic
#include <iostream>
using namespace std;

union data{
	int a;
	char b[4];
};

int main(){
	data dataUnion;

	dataUnion.a = 10;
	dataUnion.b[0] = 'A';
	dataUnion.b[1] = 'B';
	dataUnion.b[2] = 'C';
	dataUnion.b[3] = 'D';

	cout << "data a: " <<dataUnion.a <<endl;
	cout << "data b: " <<dataUnion.b <<endl;
	return 0;
}
