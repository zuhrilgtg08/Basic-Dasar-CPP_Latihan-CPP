//namespace itu apa sih?
//jadi namespace itu sebenarnya hanya memberikan scope buat sesuatu yang kita mau gunakan
//jadi si namespace ini membuat si fungsi dan deklarasi yang kita buat itu ada di dalam di namespace nya otong
//apa kegunaan nya si namesapce?
//kegunaannya biar kita lebih rapi kalau kita lagi bikin program
//misal kalau kita mau bikin sebuah fungsi dalam c++
//namespace kita gunakan supaya isi dari program kita nggak ambigu
#include <iostream>
#include "otong.h"

void fungsi2(){
	std::cout << "ini adalah fungsi dari si VOID" <<std::endl;
}

using namespace otong;
//using namespace std;


int main(){
	fungsi2();
	std::cout <<b <<std::endl;
	fungsi();
	cout(100);
	//std::cout <<otong::b <<std::endl;
	//otong::fungsi();
	//otong::cout(100);
	return 0;
}