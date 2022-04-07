#include <iostream>
#include <string>
using namespace std;

int main(){
	string kalimat1("aku suka kamu suka, siapa? dia!");
	string kalimat2("wakanda forevah!!!");
	cout << "1: " <<kalimat1 <<endl;
	cout << "2: " <<kalimat2 <<endl;

	//swap string untuk menukar antara dua buah kalimat ini
	kalimat1.swap(kalimat2);
	cout << "swap string" <<endl;
	cout << "1: " <<kalimat1 <<endl;
	cout << "2: " <<kalimat2 <<endl;

	//replace atau mengganti string
	kalimat2.replace(27,3,"kamu");
	//cara 1
	/*int posisi = kalimat1.find("ah");
	kalimat1.replace(posisi,2,"er");*/
	//cara 2
	kalimat1.replace(kalimat1.find("ah"),2,"er");
	cout << "replace string" <<endl;
	cout << "1: " <<kalimat1 <<endl;
	cout << "2: " <<kalimat2 <<endl;

	//insert string
	kalimat1.insert(8, "dan hatiku ");
	cout << "insert string" <<endl;
	cout << "1: " <<kalimat1 <<endl;
	cout << "2 :" <<kalimat2 <<endl;
	cin.get();
	return 0;
}
