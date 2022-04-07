#include <iostream>
#include <string>

using namespace std;
int main(){
	string kata("cat");
	//meanmpilkan data string
	cout <<kata <<endl;

	//mengambil karakter berdasarkan index
	cout << "index ke 0 : " <<kata[0] <<endl;
	cout << "index ke 1 : " <<kata[1] <<endl;
	cout << "index ke 2 : " <<kata[2] <<endl;

	//merubah karater pada index terntentu
	kata[1] = 'e';
	cout <<kata <<endl;

	//menyambung atau concatenation
	string kata2(kata + "ar");//beroperasi langsung ke pembuatan kata;
	cout <<kata2 <<endl;

	//cara yang kedua untuk menyambung karakter
	string kata3("membahana");
	kata2.append(" " + kata3);//ini akan menyambung ke belakangnya
	cout <<kata2 <<endl;

	//cara yang ke 3
	string kata4("ahay!!!!!!");
	kata2 += " " + kata4;
	cout <<kata2 <<endl;
	return 0;
}
