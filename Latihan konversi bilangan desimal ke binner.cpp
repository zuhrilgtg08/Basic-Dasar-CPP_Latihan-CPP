//program konversi desimal ke binary
#include <iostream>
#include <sstream>
using namespace std;
int main(){
	int desimal, sisa;
	string hasil, temp;
	cout << "program konversi bilangan desimal ke binner" <<endl;
	cout <<endl;
	cout << "masukkan nilai desimal : ";
	cin>>desimal;

	for(int a = desimal; a > 0; a /= 2){
		stringstream bit;
		sisa = a % 2;
		bit<<sisa;
		bit >>temp;
		hasil += temp;
	}
	for(int b = hasil.length()-1; b >= 0; b--){
		cout<<hasil[b];
	}
	return 0;
}