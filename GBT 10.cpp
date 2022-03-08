#include <iostream>
#include <string>

using namespace std;

class Player{
public:
	string nama;
	int nomor;
	string status;

	Player(const char* inputNama, int inputNomor, const char* inputStatus){
		Player::nama = inputNama;
		Player::nomor = inputNomor;
		Player::status = inputStatus;
	}
};

int main(){

Player data1 = Player("zuhril", 12, "Sudah Di Vaksin");
cout << "Data 1 : " <<Player data1 <<endl;
	return 0;
}