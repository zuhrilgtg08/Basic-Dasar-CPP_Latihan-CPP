#include <iostream>
#include <exception>
using namespace std;

int pembagian(int &num, int &denum);

int main(){
	int a, b, c;

	while(true){
		cout << "masukkan num: ";
		cin>>a;
		cout << "masukkan denum: ";
		cin>>b;

			try{
				c = pembagian(a, b);
				cout << "hasil: " <<c <<endl;

			//}catch(exception &e)
			}catch(const char* e){
				cout <<e <<endl;


			//cout <<e.what() <<endl;

		}
	}

	cout << "akhir dari program" <<endl;
	cin.get();
	return 0;
}

int pembagian(int &num, int &denum){
	if(denum == 0){
		//throw overflow_error("ERORR:: PEMBAGI 0");
		throw "Error:: Pembagi 0";
	}
	return num/denum;

}
























































/*
	dengan menggunakan metode
	try{

	}catch(){

	}untuk menghadling si runtime erorr
 */

/*int main(){
	array <int, 5> a = {0, 1, 2, 3, 4};

	try{
		cout <<a.at(5) <<endl;
	}catch(exception &e){
		cout <<e.what() <<endl;

	}

	cout << "akhir program" <<endl;

	return 0;
}*/































//#include <string>
//#include <array>
//#include <exception>










































/*int pembagian(int &num, int &denum){
	return num/denum;
}

int main(){
	//4. contoh runtime erorr
	//array<int, 5> a = {0, 1, 2, 3, 4};
	cout <<a.at(5) <<endl;
	int a, b, hasil;
	char isLanjut;
	while(true){
		cout << "masukkan angka num: ";
		cin>>a;
		cout << "masukkan angka denum: ";
		cin>>b;

		hasil = pembagian(a,b);
		cout << "hasil: " <<hasil <<endl;

		cout << "Lanjutkan (y / n) ?";
		cin>>isLanjut;

		if(isLanjut == 'n' || isLanjut == 'N'){
		break;
		}

	}

	return 0;
}*/















































//1. sintaks erorr adalah erorr yang terjadi karena kita salah tulis / masukin sintaks
//2. linking eror ini kadang - kadang akan dikasih tahu ileh compiler, kadang - kadang tidak
//	 erorr saat kita melinking struktur program. erorr nya bukan di syntax erorr nya terjadi ketika sedang melinking proses
//3. non-eror jadi saat dicompile itu nggak erorr tetapi justru program kita yang jadi eror (program kita jadi ambigu);
//   jadi erorr dari si programnya;
//4. runtime erorr adalah erorr yang terjadi saat berjalannya program

/*int luas(int &panjang, int &lebar);
int kuadrat(int &value);
void print(char b);

int main(){
	//1. contoh sintaks eror
	int a = 10;// ini kurang tanda (;)
	cout <<a <<endl;

	//2. contoh linking erorr
	int c = kuadrat(a);
	cout <<c <<endl;
	print('Z');

	//3. contoh non-erorr
	int b = -5;
	int d = luas(a,b);
	cout <<d <<endl;


	return 0;
}

int kuadrat(int &value){
	return value * value;
}

void print(char b){
	cout <<b <<endl;
}

int luas(int &panjang, int &lebar){
	return panjang * lebar;
}*/

