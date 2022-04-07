#include <iostream>
using namespace std;

int main(){
	//input
	int input;
	cout << "Masukkan Angka : ";
	cin>>input;

	//memulai operator
	int jumlahFaktor = 0;
	for(int i = 1; i <= input; i++){
		if(input%i == 0){
			jumlahFaktor++;
		}
	}

	//mengecek bilangan
	if(jumlahFaktor == 2){
		cout << "Bilangan Ini adalah Bilangan Prima" <<endl;
	}else{
		cout << "Bukan Bilangan Prima" <<endl;
	}
	return 0;
}
