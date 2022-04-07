#include <iostream>
using namespace std;

void nama_fungsi(){
	/*void itu tidak menguunakan return atau nilai kembalian karena tidak mengembailkkan nilai apa pun banyak orang yang
	menyebutnya dengan worker (menjalankan aja tanpa memberikan feedback*/
	//kapan kita perlu menggunakan void ?
	//untuk melakukan sesuatu yang tidak ada nilai kembalian;
	//misal kita mau menampilkan sebuah nilai
}

//contoh penggunaan void
void tampilkan(int input){
	cout << "Menampilkan Dengan Fungsi VOID" <<endl;
	cout<<input <<endl;
}
//fungsi ini biasanya disebut dengan reporter
int tambah (int a){
	int c;
	c = a + a;
	return c;
}

int main(){
	int hasil, input;
	cout<< "nilai tambah dari : ";
	cin>>input;

	hasil = tambah(input);
	tampilkan(hasil);

	cin.get();
	return 0;
}
