#include <iostream>
#include <string>
#include "data.h"

using namespace std;
int main(){
	system("CLS");
	string jawab;
	cout <<SOAL <<endl;
	cout << "masukkan jawaban: ";
	cin>>jawab;
	cout << "jawaban anda: " <<jawab <<endl;

	if(jawab != "jokowi"){
		cout << "maaf jawaban anda salah" <<endl;
	}else if(jawab == "jokowi"){
		cout << "jawaban anda benar" <<endl;
	}
	cin.get();
	return 0;
}
