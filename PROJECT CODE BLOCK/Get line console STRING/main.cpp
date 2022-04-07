//mencoba mengambil data string
#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimatInput;

	//getline(cin, variable);
	cout << "masukkan kalimat  : ";
	getline(cin,kalimatInput);
	cout << "input anda adalah : ";
	cout <<kalimatInput <<endl;

	//menggabungkan dengan materi sebelumnya
	//jumlah angka dari input
	int posisi = 0;
	int jumlah = 0;

	while(true){
		posisi = kalimatInput.find(" ",posisi + 1);
		jumlah++;
		//cout << "posisinya : " <<posisi << " jumlah : " <<jumlah <<endl;
		if(posisi < 0){
			break;
		}
	}

	cout << "jumlah kata : " <<jumlah <<endl;
	return 0;
}
