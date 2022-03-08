#include <iostream>
#include <array>

using namespace std;

int main(){

	//looping untuk cpp 11 keatas
	/*
		for(variable_deklarasinya : array){
			statement;
		}
	 */
	
	/*int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};
	for(int i = 0; i < 10; i++){
		cout <<arrayNilai[i] <<endl;
	}*/

	array<int, 10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};
	for(int nilai : arrayNilai){
		cout << "address " <<&nilai <<" nilainya: " <<nilai <<endl;
		nilai = 1;//ini tidak merubah nilai array yang sudah ditetapkan;
	}
	cout<<endl;
	//memanipulasi array dengan menggunakan referencing
	for(int &nilaiRef : arrayNilai){
		nilaiRef *= 2;
		cout << "address array sebenarnya " <<&nilaiRef <<" nilainya: " <<nilaiRef <<endl;
		//jadi ini akan merubah nilai dari si array nya
	}

	cout<<endl;
	for(int &nilaiRef : arrayNilai){
		cout << "address array sebenarnya " <<&nilaiRef <<" nilainya: " <<nilaiRef <<endl;
	}
	return 0;
}