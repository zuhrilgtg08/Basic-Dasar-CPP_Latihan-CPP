#include <iostream>
using namespace std;
int main(){
	int a = 5;
	float b = 6.67f;
	char c = 'd';
	float hasil;
	//int hasil;//karena kita meninginkan hasilnya adalah integer
	hasil = (float)a + b;
	cout <<hasil <<endl;
	//cout <<a+b <<endl;//implisit casting dimana dibelakang layar yang b dicek saja;
	//cout <<(int)c <<endl;
	cout <<(char)(c + a) <<endl;
	//pindah ke i dikarenakan pindah jarak;
	return 0;
}
