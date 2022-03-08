#include <iostream>
#include <string>
#include "data.h"
int main(){
	float input, hasil;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
	std::cout << "PROGRAM CONVERT SATUAN JUMLAH" <<std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<std::endl;
	std::cout <<std::endl;
	std::cout << "MASUKKAN JUMLAH: ";
	std::cin>>input;
	hasil = convert::lusin(input);
	convert::print(hasil);
	hasil = convert::kodi(input);
	convert::print(hasil);
	hasil = convert::gross(input);
	convert::print(hasil);
	hasil = convert::rem(input);
	convert::print(hasil);
	std::cin.get();
	return 0;
}
