#include <iostream>
using namespace std;
int main(){
	int jam, menit, hasil;
	int jamDetik = 3600;
	int jamMenit = 60;

	cout << "program konversi jam, menit ke detik" <<endl;
	cout<<endl;
	cout << "masukkan jumlah jam = ";
	cin>>jam;
	cout << "masukkan jumlah menit = ";
	cin>>menit;

	//memulai perhitungan
	hasil = jam * jamDetik + menit * jamMenit;
	cout << "hasilnya adalah = " <<hasil << " Detik " <<endl;
	return 0;
}
