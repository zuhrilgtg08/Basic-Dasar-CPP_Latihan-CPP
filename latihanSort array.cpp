#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
const size_t jumlahIndex = 15;

void cetakArray(array <int, jumlahIndex> &angka){
	cout << "Array sort: ";
	for(int &n : angka){
		cout <<n << " ";
	}
	cout<<endl;
}

void cetakArray(array <char, jumlahIndex> &abjad){
	cout << "Array sort: ";
	for(char &h : abjad){
		cout <<h << " ";
	}
	cout<<endl;
}

int main(){
	array <int, jumlahIndex> nomor = {8,5,6,7,0,14,1,4,9,3,2,11,10,13,12};
	array <char, jumlahIndex> huruf = {'e', 'z', 'd', 'r', 'y', 'k', 'w', 'u', 'i', 'o', 'p', 'f', 'h', 'a', 'q'};
	cetakArray(nomor);
	cetakArray(huruf);
	cout<<endl;
	sort(nomor.begin(), nomor.end());
	cetakArray(nomor);
	sort(huruf.begin(), huruf.end());
	cetakArray(huruf);

	return 0;
}