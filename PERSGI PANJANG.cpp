#include <iostream>
using namespace std;

//menghitung luas persegi panjang
double hitungLuas(double p, double l){
	double luas;
	luas = p * l;
	return luas;
}


//menghitung keliling persegi panjang
double hitungKeliling(double p, double l){
	double keliling;
	keliling = 2 * (p + l);
	return keliling;
}

//hasil dengan menampilkan dengan Fungsi VOID
void tampilkanLuas(double p, double l){
	cout << "Menampilkan dengan Void\n";
	cout << "Luasnya Adalah : ";
	cout << hitungLuas(p, l) <<endl;
}

void tampilkanKeliling(double p, double l){
	cout << "Menampilkan dengan Void\n";
	cout << "Kelilingnya Adalah : ";
	cout << hitungKeliling(p, l) <<endl;
}

int main(){
	double panjang, lebar, hasilLuas, HasilKeliling;

	cout<< "Program Menghitung Luas dan Keliling Persegi Panjang" <<endl;
	cout<<endl;
	cout<< "Masukkan Panjang : ";
	cin>>panjang;
	cout<<endl;
	cout<< "Masukkan Lebar : ";
	cin>>lebar;
	cout<<endl;

	tampilkanLuas(panjang, lebar);
	cout<<endl;
	tampilkanKeliling(panjang, lebar);
	cin.get();
	return 0;

}
