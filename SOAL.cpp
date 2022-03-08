#include <iostream>
using namespace std;
int main(){
	//membuat rumus volume kubus
	float r, hasil;
	cout << "==============================" <<endl;
	cout << "Program Menghitung Rusuk Kubus" <<endl;
	cout << "==============================" <<endl;
	cout<<endl;
	cout << "Masukkan Rusuk Kubus : ";
	cin>>r;

	//memulai operator
	hasil = r * r * r;
	cout << "hasilnya adalah : " <<hasil <<endl;
	return 0;
}