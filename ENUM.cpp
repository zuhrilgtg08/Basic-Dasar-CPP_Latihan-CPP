#include <iostream>
using namespace std;

enum warna{merah, putih, hitam, coklat = 5, kuning, biru};
int main(){
	warna kain;

	kain = hitam;

	if(kain == hitam){
		cout <<"warna kain adalah hitam" <<endl;
	}else{
		cout << "warna kain salah" <<endl;
	}
	cout <<kain <<endl;
	return 0;
}