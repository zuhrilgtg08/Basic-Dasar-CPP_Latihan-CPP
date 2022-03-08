//ternary operator adalah = ?(tanda tanya);
//si ? berfungsi untuk mengecek kondisi kita itu benar apa tidak;
//misal = kondisi ? nanti ada hasil1 atau hasil2. jika si kondisi hasilnya true maka akan ngambil hasil1, dan jika si kondisi hasilnya false maka akan nagmbil hasil2;
// kondisi ? hasil1 : hasil2;
#include <iostream>
#include <string>
using namespace std;

int main(){
	int a, b;
	string hasil1, hasil2, output;

	hasil1 = "ini kurang dari";
	hasil2 = "ini lebih dari";
	cout << "masukkan angka: ";
	cin>>a;
	b = 10;

	output = (a < b) ? hasil1 : hasil2;
	//ternary semplifikasi dari pengkondisian
	/*if(a < b){
		output = hasil2;
	}else{
		output = hasil1;
	}*/
	cout <<output <<endl;
	return 0;
}
