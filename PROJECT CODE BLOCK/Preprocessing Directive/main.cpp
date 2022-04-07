//Preprocessing Directive
//preprocessing directive selalu menggunakan tanda crash (#).
//apa itu preprocessing directive ?
//jadi setiap ada tanda (#) akan diproses oleh si preprocessing baru ke compiler dan tidak ada hubungannya dengan memori
#include <iostream>
#define PI 3.14159265359
#define SAYA 2004//(ini adalah macro directive) apa itu macro ? macro itu artinya mendefinisikan
double pi = 3.14159265359;
using namespace std;
int main(){
	cout << "ini nilai pi tipe data double = " <<pi <<endl;
	cout << "ini addres dari memori tipe data double = " <<&pi <<endl;
	//cout <<&PI <<endl; ini tidak menggunakan memori ataupun adress.
	cout << "ini tahun saya lahir = " <<SAYA <<endl;
	cout << "ini adalah nilai PI : " <<PI <<endl; //dan si PI ini bersifat literal sama aja kita menuliskan isinya saja tanpa menggunakan adress.
	return 0;
}
