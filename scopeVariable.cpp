#include <iostream>
using namespace std;

//global scope
int x = 10;//ini berlaku untuk global tapi saat didalam sebuah fungsi dia ada local si x 8 yang di akses setelahnya akan jadi 8;

//membuat fungsi globalScope
int globalScope(){
	return x;
}

//membuat fungsi localScope
int localScope(){
	int x = 5;//saat memanggil si localScope ini teryata tidak merubah nilai dai x yang berada di local main;
	return x;
}

int main(){
	cout << "1. Variable global : " <<x <<endl;
	int x = 8;//local main
	cout << "2. Variable local main : " <<x <<endl;
	cout << "3. Variable globalScope : " <<globalScope() <<endl;
	cout << "4. Variable local main : " <<x <<endl;
	cout << "5. Variable localScope : " <<localScope() <<endl;
	cout << "6. Variable local main : " <<x <<endl;
	cout << "7. Variable local main : " <<x <<endl; 
	{//berarti ini tidak mempengaruhi nilai yang ada didalam local main
		cout << "8.variable local main : " <<x <<endl;
		//block scope
		int x = 1;
		cout << "9.variable local dai block scope : " <<x <<endl;
		cout << "10.Variable global scope : " <<globalScope() <<endl;
	}
	cout << "11.variable local main : " <<x <<endl;
	return 0;
}