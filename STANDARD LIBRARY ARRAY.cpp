#include <iostream>
#include <array>//standard library array cpp;
//#include <algorithm> //berguna untuk shorting, searching, menghitung nilai maksimum dsb;

using namespace std;

int main(){
	//tata cara membuat array menggunakan standard library
	//array<int, jumlah array> nama array;
	
	array <int, 5> nilai;
	for(int i=0; i <= 4; i++){
		nilai[i] = i;
		cout << "nilai [" <<i << "] = " <<nilai[i];
		cout << " address : " <<&nilai[i] <<endl;
	}

	cout<<endl;
	//melihat ukuran array
	cout << "ukuran array : " <<nilai.size() <<endl;
	//address awal dari array
	cout << "awal address array : " <<nilai.begin() <<endl;
	//addres akhir dari array
	cout << "akhir address array : " <<nilai.end() <<endl;
	//mengambil nilai dengan index
	cout << "nilai ke 2 : " <<nilai.at(2) <<endl;
	
	return 0;
}