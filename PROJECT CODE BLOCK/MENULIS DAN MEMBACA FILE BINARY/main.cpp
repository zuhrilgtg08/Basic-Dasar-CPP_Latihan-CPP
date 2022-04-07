//menulis dan membaca binary file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myFile;
	int hasil;
	float cetak;


	myFile.open("data.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
	myFile.read(reinterpret_cast<char*>(&cetak), sizeof(cetak));
	cout << "besar nilai memori integer = " <<sizeof(hasil) <<endl;
	cout << "hasil nilainya adalah " <<hasil <<endl;
	cout << "hasil nilainya adalah " <<cetak <<endl;
	return 0;
}







	//menulis file binary
    //fstream myFile;
        //int number = 12345;
        //float angka = 3.50;
        //myFile.open("data.bin", ios::out | ios::binary);

        //myFile.write(reinterpret_cast<char*>(&number),sizeof(number));
        //myFile.write(reinterpret_cast<char*>(&angka),sizeof(angka));
        //myFile.close();




