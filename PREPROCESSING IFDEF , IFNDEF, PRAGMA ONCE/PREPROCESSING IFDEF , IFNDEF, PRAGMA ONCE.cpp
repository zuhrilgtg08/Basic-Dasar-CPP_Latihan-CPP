#include <iostream>
//biasanya si compiler tidak mau ada 2 define atau 2 definisi dengan nama yang sama
#define YUP "YUP lawas"
#define YUP "YUP baru"
//1. #ifdef salah satu preprocessing directive untuk mengecek bahwa si sesuatu itu sudah di define atau belum
//#ifdef artinya jika itu sudah terdefinisi
//#ifdef YUP
	//#define ADA "si YUP sudah ADA"
//#else
	//#define ADA "si YUP tidak ADA"
//#endif

//2. #ifndef artinya adalah jika si YUP tidak terdefinisi
//atau bisa disebut dengan directive garding. Fungsinya untuk
//#ifndef YUP
	//#define YUP "YUP baru"
//#endif
//3. #pragma once




using namespace std;
int main(){
	cout <<YUP <<endl;
	return 0;
}
