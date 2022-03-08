//Preprocessing Direction #Include
// apa itu #include ?
// #include itu hanya meng copy kan sebuah file dari luar
// kalau kita mengincludkan sesuatu menggunakan tanda <> ini tandanya mengincludkan file dari compilernya
// sedangkan tanda "" ini mengincludekan dari file external dalam satu folder
#include <iostream>

using namespace std;
int main(){
	#include "library.h"
	return 0;
}