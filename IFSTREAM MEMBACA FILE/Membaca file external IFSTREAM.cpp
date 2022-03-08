//membaca file external dengan ifstream
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream myFile;
	string output, buffer;
	bool isData = false;
	int no;
	string nama;

	//untuk membaca file
	//ifstream ada 3
	//ios::in = ini awal atau defaultnya
	//ios::ate = mulai dari akhir file
	//ios::binary = ini untuk membaca file binner
	
	myFile.open("data.txt", ios::in);

	while(!isData){
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if(buffer == "data"){
			isData = true;
		}
	}
	cout <<output <<endl;

	getline(myFile, buffer);
	cout <<buffer <<endl;
	int jumlahData = 0;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> nama;

		cout <<no <<"\t" <<nama <<endl;
		jumlahData++;
	}
	cout << "jumlah data = " <<jumlahData <<endl;



	return 0;
	//eof = adalah singkatan dari end of file/akhir dari filenya
	/*getline(myFile, buffer);
	output.append(buffer);*/
	//getline(myFile, data);//dia akan ambil satu baris dari data.txt
	/*myFile >> data;//ini membaca data.txt
	myFile >> data;//ini diambil setelahnya*/
}