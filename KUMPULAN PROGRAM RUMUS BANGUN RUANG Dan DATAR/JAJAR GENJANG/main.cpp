//JAJAR GENJANG
#include <iostream>
using namespace std;

//function hitung Luas
double hitung_luas(double alas, double tinggi){
	return alas * tinggi;
}

//function hitung keliling
double hitung_keliling(double alas){
	return (2 * alas) + (2 * 4);
}

template<typename H>
void print(H hasil){
	cout <<"Hasilnya Adalah: " <<hasil <<endl;
}

int main(){
	double a,t,hasil;
	char terus;
	system("cls");
	labelReturn:
	cout << "\nProgram Hitung Luas & Keliling Jajar Genjang" <<endl;
	cout << "==============================================" <<endl;
	cout << "Masukkan Alasnya: ";
	cin>>a;
	cout << "Masukkan Tingginya: ";
	cin>>t;

	//output
	hasil = hitung_luas(a,t);
	print(hasil);
	hasil = hitung_keliling(a);
	print(hasil);

	//mau lanjut ?
	cout << "Lanjutkan ? [y / n] : ";
	cin>>terus;
	if(terus == 'y' | terus == 'Y'){
		goto labelReturn;
	}else if(terus == 'n' | terus == 'N'){
		cout << "Terimakasih !!" <<endl;
	}
	return 0;
}