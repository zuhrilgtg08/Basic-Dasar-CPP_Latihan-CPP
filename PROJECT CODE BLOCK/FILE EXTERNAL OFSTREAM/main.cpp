//saving database
#include <iostream>
#include <fstream>//ini artinya stream ke file external ada 3 jenisnya ofstream, ifstream, fstream.
using namespace std;

int main(){
	/*ada 3 mode/cara
	//ios::out = ini operasi output, jadi dia akan menuliskan output ini bentuk defaultnya;
	//ios::app(append) = menuliskan pada akhir baris.
	//ios::trunc = yang ini dia akan membuat file jika tidak ada dan jika ada akan dihapus dan dibuat baru ini default juga;
	//cara pakai
	//ofstream myFile;
	myFile.open("data1.txt", ios::out);
	//mamsukkan input ke data1.txt
	myFile <<"penulisan pada data1";
	//beda dengan cout
	//cout <<"halo zuhril" <<endl;//ini akan keluar ke console
	myFile.close(); //harus diclose setelah membuka/open;*/
	ofstream myFile;

	myFile.open("data3.txt", ios::app);
	myFile <<"\nmenuliskan baris baru pada data3";
	myFile.close();

	myFile.open("data1.txt", ios::out);
	myFile <<"\nmenuliskan baris baru pada data1";
	myFile.close();

	myFile.open("data2.txt", ios::trunc);
	myFile <<"\nmenuliskan baris baru pada data2";
	myFile.close();
	return 0;
}

