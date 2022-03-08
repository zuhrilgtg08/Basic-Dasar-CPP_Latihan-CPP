//struct adalah sebuah data yang dibentuk oleh beberapa data
//kita bisa menggunakan struct kita bikin sebuah tipe data yang mempunyai sub data dan mempunyai komponen pada sub data;
//memudahkan membuah tipe data yang punya banyak komponen;
#include <iostream>
#include <string>
using namespace std;
//template untuk membuat tipe data struct
struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	buah apel;
	buah jeruk;

	apel.warna = "merah";
	apel.berat = 150.50f;
	apel.harga = 20000;
	apel.rasa = "manis kasat";

	jeruk.warna = "oranye";
	jeruk.berat = 250.50f;
	jeruk.harga = 25000;
	jeruk.rasa = "manis asam";

	cout << "ini apel" <<endl;
	cout <<"- " <<apel.warna <<endl;
	cout <<"- " <<apel.berat <<endl;
	cout <<"- " <<apel.harga <<endl;
	cout <<"- " <<apel.rasa <<endl;
	cout<<endl;

	cout << "ini jeruk" <<endl;
	cout <<"- " <<jeruk.warna <<endl;
	cout <<"- " <<jeruk.berat <<endl;
	cout <<"- " <<jeruk.harga <<endl;
	cout <<"- " <<jeruk.rasa <<endl;



	cin.get();
	return 0;
}