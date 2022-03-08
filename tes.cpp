#include <iostream>
#include <string>

using namespace std;

class Data{
public:
	string nama;
	string alamat;

	Data(const char* inputNama, const char* inputAlamat){
		this->nama = inputNama;
		this->alamat = inputAlamat;
	}
};

int main(){
	Data* myData = new Data("Zuhril", "Jl Margodadi 1/24");
	cout << "Nama : " << myData->nama << endl;
	cout << "Alamat : " << myData->alamat << endl;
	return 0;
}
