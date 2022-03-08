//cara mengambil sub string mengambil string berada di tengah - tengah komponen string yang panjang dan juga letak posisinya;
#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat1("dayat suka olahraga supaya sehat");
	string kalimat2("ucup suka makan pisang di pagi hari");
	cout << "1: " <<kalimat1 <<endl;
	cout << "2: " <<kalimat2 <<endl;

	//SUB string (mengambil string di tengah tengah);
	//substr() memiliki 2 input. pertama index dan juga panjnag.
	cout <<kalimat1.substr(11,8) <<endl;
	cout <<kalimat2.substr(16,6) <<endl;

	//mencari posisi dari sub string
	cout << "ini adalah posisi kata olahraga : ";
	cout <<kalimat1.find("olahraga") <<endl;
	cout << "ini adalah posisi kata pisang  : ";
	cout <<kalimat2.find("pisang") <<endl;

	//menaruh index ke dalam sebuah variable
	int a = kalimat1.find("ya");
	cout <<a <<endl;
	cout <<kalimat1.find("ya", a + 1) <<endl;

	//mencari posisinya dari belakang menggunakan rfind();
	cout <<kalimat2.rfind("i") <<endl;
	

	return 0;
}