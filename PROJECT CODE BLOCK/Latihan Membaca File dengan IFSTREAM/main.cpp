#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream nilai;
	string output, data;
	bool isData = false;
	int no;
	string nama;

	nilai.open("myData.txt");

	while(!isData){
		getline(nilai, data);
		output.append("\n" + data);
		if(data == "list"){
			isData = true;
		}
	}
	cout <<output <<endl;


	getline(nilai, data);
	cout <<data <<endl;
	int jumlah = 0;
	while(!nilai.eof()){
		nilai >> no;
		nilai >> nama;
		cout <<no << " \t" <<nama <<endl;
		jumlah++;
	}
	cout << "jumlahnya adalah: " <<jumlah <<endl;
	return 0;
}
