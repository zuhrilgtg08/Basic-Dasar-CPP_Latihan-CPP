//string adalah kumpulan dari sebuah char(character);
#include <iostream>
#include <string>
using namespace std;
int main(){
	//char kata[5] = {'m', 'o', 'b', 'i', 'l'};
	//array karakter tidak bisa kita tambah, karena fiks array nya;
	string kata("zuhril");
	cout <<kata <<endl;

	string data;
	cout << "masukkan kata : ";
	cin>>data;
	cout << "data yang dimasukkan adalah : ";
	cout <<data <<endl;
	return 0;
}