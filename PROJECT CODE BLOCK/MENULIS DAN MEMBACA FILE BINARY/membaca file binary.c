//membaca file binary
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	fstream myFile;
	int hasil;

	myFile.open("data.bin", ios::in | ios::binary);
	myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
	cout << "besar nilai integer = " <<sizeof(hasil) <<endl;
	cout <<hasil <<endl;
	myFile.close();
	return 0;
}
