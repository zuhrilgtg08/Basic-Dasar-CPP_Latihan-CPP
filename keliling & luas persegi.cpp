#include <iostream>
using namespace std;
int main(){
	float sisi1;
	float hasil;
	int s=4;

	//pembukaan program
	cout << "====================================================================="<<endl;
	cout << "			PROGRAM KELILING & LUAS PERSEGI "<<endl;
	cout << "====================================================================="<<endl;
	cout<<endl;
	cout << "Masukkan Sisi Persegi : ";
	cin >> sisi1;

	//memulai operator
	hasil = s * sisi1;
	cout << "Hasil Keliling Persegi = " <<hasil <<endl;
	hasil = sisi1 * sisi1;
	cout << "Hasil Luas Persegi = " <<hasil <<endl;

	cin.get();
	return 0;
}