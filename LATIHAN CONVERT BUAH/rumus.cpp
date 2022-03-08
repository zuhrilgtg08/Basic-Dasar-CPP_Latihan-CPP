#include <iostream>
#include <string>
#include "data.h"
void convert::print(float cetak){
	std::cout << "HASILNYA ADALAH: ";
	std::cout <<cetak << " BUAH" <<std::endl;
}

double convert::lusin(double userinput){
	return userinput * 12;
}

double convert::kodi(double userinput){
	return userinput * 20;
}

double convert::gross(double userinput){
	return userinput * 144;
}

double convert::rem(double userinput){
	return userinput * 500;
}