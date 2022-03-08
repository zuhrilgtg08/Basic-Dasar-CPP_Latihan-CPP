#include <iostream>
using namespace std;

//prototipe
double hitungLuas(double p, double l);
//prototipe
void println(double x);

int main(){
	int panjang, lebar, luas;
	cout << "masukkan panjang : ";
	cin>>panjang;
	cout << "masukkan lebar : ";
	cin>>lebar;
	luas = hitungLuas(panjang, lebar);
	println(luas);
	return 0;
}

double hitungLuas(double p, double l){
	return p * l;
}

void println(double x){
	cout << "hasil luas : " <<x <<endl;
}
