#include <iostream>
#include <string>
using namespace std;
int main(){
	string nama("ariko");
	cout << "tebak nama siapa nih : ";
	cin>>nama;

	//memulai operator
	if(nama == "ariko"){
		cout << "selamat tebakan anda benar !";
	}else{
		cout << "tebakan anda salah mohon coba lagi";
	}

	return 0;
}