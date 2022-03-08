#include <iostream>
using namespace std;
//membuat pointer di dalam sebuah fungsi
//prototipe
void fungsi(int *);
void kuadrat(int *);

int main(){
	int a = 5;
	cout << "address a : " <<&a <<endl;
	cout << "nilai si a : " <<a <<endl;
	fungsi(&a); //fungsi dengan input pointer
	kuadrat(&a);
	cout << "nilai dari si a : " <<a <<endl;
	return 0;
}

//fungsi
void fungsi(int *b){
	cout << "address b : " <<b <<endl;
	cout << "nilai si b : " <<*b <<endl; //dereferencing
}

void kuadrat(int *valPtr){
	*valPtr = (*valPtr) * (*valPtr);
}