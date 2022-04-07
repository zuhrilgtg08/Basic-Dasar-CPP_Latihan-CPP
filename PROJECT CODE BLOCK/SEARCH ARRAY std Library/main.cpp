#include <iostream>
#include <algorithm>
#include <array>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout <<a << " ";
	}
	std::cout <<std::endl;
}

int main(){
	std::array <int, arraySize> angka = {9,4,2,5,8,0,1,7,6,3};
	printArray(angka);
	//mecari int angka yang dicari
	//ada 2 step unutk mencarinya
	//pertama kita sort dulu baru kita search -> binary_search;
	int angkaCari;
	bool ketemu;
	std::cout << "mencari angka dalam array diatas: ";
	std::cin>>angkaCari;
	std::sort(angka.begin(), angka.end());
	printArray(angka);
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);
	if(ketemu){
		std::cout << "ketemu ni angkanya" <<std::endl;
	}else{
		std::cout << "angka tidak ditemukan" <<std::endl;
	}
	std::cout <<ketemu <<std::endl;




	return 0;
}
