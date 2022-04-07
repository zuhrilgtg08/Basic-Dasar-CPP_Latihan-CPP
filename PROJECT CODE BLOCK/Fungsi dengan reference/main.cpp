#include <iostream>
using namespace std;

//prototipe
void fungsi(int &);
void kuadrat(int &);

int main(){
	int a = 5;
	cout << "ini address si a : " <<&a <<endl;
	cout << "ini nilai si a : " <<a <<endl;
	fungsi(a);//hanya diisi value nya aja;
	kuadrat(a);
	cout << "nilai dari si a : " <<a <<endl;
	return 0;
}

//fungsi reference
void fungsi(int &b){
	b = 10;
	cout << "ini address si b : " <<&b <<endl;
	cout << "ini nilai si b : " <<b <<endl;
}

void kuadrat(int &valueRef){
	valueRef = valueRef * valueRef;
}
