//Preprocessing Direction #Include
// apa itu #include ?
// #include itu hanya meng copy kan sebuah file dari luar
// extensi file.h artinya h = HEADERS FILE
#include <iostream>
#include "library.h"
using namespace std;

int main(){
	cout << "berhasil" <<endl;
	cout << "ini nilai PI: " <<PI <<endl;
	cout << "ini Opearsi KUADRAT: " <<KUADRAT(17) <<endl;
	cout << "ini Operasi PENGURANGAN: " <<KURANG(22,4) <<endl;
	cout << "ini operasi PEMBAGIAN: " <<BAGI(18,2) <<endl;
	cout << "Ini nilai Max: " <<NILAI(4,7) <<endl;
	cout << "Nama saya adalah: " <<nama <<endl;
	return 0;
}
