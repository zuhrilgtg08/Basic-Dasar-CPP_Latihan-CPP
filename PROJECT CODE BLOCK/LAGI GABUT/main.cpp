#include <iostream>
#define MOTIVASI "semangat"
#define RUMUS(S) (S*S)
using namespace std;
int main(){
	int s;
	cout << "program meghitung Luas Persegi" <<endl;
	cout << "masukkan sisi persegi: ";
	cin>>s;
	cout << "hasilnya adalah: " <<RUMUS(s) <<endl;
	return 0;
}
