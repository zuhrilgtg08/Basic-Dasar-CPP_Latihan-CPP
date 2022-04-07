#include <iostream>
using namespace std;

int main(){
	//input
	int input;
	cout << "Masukkan Jumlah Batas : ";
	cin>>input;
	cout<<endl;

	//baris
	for(int i = 0; i < input; i++){
		//kolom
		for(int j = 0; j < 2*input; j++){
			cout << "*";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;

	//pola 2
	for(int x = 0; x < 2*input; x++){
		//kolom
		for(int y = 0; y < input; y++){
			cout << "*";
		}
		cout<<endl;
	}
	return 0;
}
