#include <iostream>
#include "FUP.h"
#include "bar.h"
#include "bersama.h"

//gimana cara nya kita mau menjaga si FUP makainya 2x
//#define FUP "Fup-baru"//nggak bisa nih 
/*ifdef
//adalah untuk mengecek bahwa sesuatu itu sudah di define atau belum
#ifdef FUP
	#define TES "FUP_ada"
#else
	#define TES "FUP_tidak-ada"
#endif
//ifndef
//jika tidak terdefinisi atau si FUP tidak terdefinisi
#ifndef FUP//cara bacanya juka si FUP tidak ada
	#define FUP "FUP-BARU"//maka definisikan si FUP
#else 
	#define FUP "memakai-Fup-lama"//ini deisebutnya processing directive gard(garding)
	jika kita define nya dua kali dengan define yang sama maka akan eror
#endif
*/

//pragma once
//jangan buat lagi duplikatnya kita hanya mau segala sesuatunya di include kan sekali saja
//setiap file bersama.h di include pastikan bahwa data ini tidak ada duplikatnya
using namespace std;
int main(){
	data saya;
	saya.nomor = 13;
	cout << "nomor saya: " <<saya.nomor <<endl;
	return 0;
}