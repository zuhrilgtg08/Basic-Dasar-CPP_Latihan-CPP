#include <iostream>
using namespace std;

int main(){
	//rumus luas lingkaran + keliling lingkaran;
	//L = phi x r x r.
	//K = phi x d atau phi x 2 x r.
	const double phi = 3.14;
	double r, d, L, K;
	cout << "============================================================" <<endl;
	cout << "	LUAS DAN KELILING LINGKARAN  " <<endl;
	cout << "============================================================" <<endl;
	cout<<endl;
	cout << "Masukkan Jari - Jari Lingkaran : ";
	cin>>r;
	L = phi * (r * r);
	d = 2 * r;
	K = phi * d;
	cout << "Hasil Luas Lingkaran : " <<L <<"  cm2" <<endl;
	cout << "Hasil Keliling Lingkaran : " <<K <<"	cm" <<endl;
	return 0;
}

