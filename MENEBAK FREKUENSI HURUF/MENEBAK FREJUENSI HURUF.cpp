#include <iostream>
#include <fstream>
using namespace std;

struct hitung{
	char cek[52] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 
		'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
	};

	int jumlah[52] = {0};
};

int main(){
	ifstream file;
	hitung alpabet;
	char x;
	file.open("input.txt");

	int i = 0;

	while(!file.eof()){
		file.get(x);

		for(int j = 0; j < 52; j++){
			if(x == alpabet.cek[j]){
				alpabet.jumlah[j]++;
			}
		}

		i++;
	}

	for(int i = 0; i < 52; i++){
		if(alpabet.jumlah[i] != 0){
			cout << "jumlah " <<alpabet.cek[i] << " = " <<alpabet.jumlah[i] <<endl;
		}
	}
	return 0;
}