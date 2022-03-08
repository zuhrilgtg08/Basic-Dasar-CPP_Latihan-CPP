//apa itu template function?
//jadi template itu adalah kita bisa bikin sebuah fungsi yang berlaku secara umum apa pun itu tipe datanya
//yang kita masukin didalam argumen
//oke kita pakai template function yang berfungsi secara umum
/*
void print(int data){
	cout <<data <<endl;
}

void print(double data){
	cout <<data <<endl;
}

void print(char data){
	cout <<data <<endl;
}
*/

#include <iostream>
#include <string>
using namespace std;

//void print(int data){
	//cout <<data <<endl;
//}

template<typename T>
void print(T data){
	cout <<data <<endl;
}

template<typename T>
int toInt(T data){
	return int(data);
}

template<typename T, typename Y>
T max(T data1, Y data2){
	return (data1 > data2) ? data1 : data2;
}

template<typename T, typename Y>//karena yang T dan Y hanya berfungsi untuk argumen saja, jadi yang P tidak berfungsi
T min(T a, Y b){
	return (a < b) ? a : b;
}


int main(){
	//print int
	//print(25);
	//print dengan template function
	print(24);
	print(4.75);
	print("halo");
	//print dengan casting
	cout <<toInt(18.75) <<endl;
	cout <<max(10, 12.65) <<endl;
	cout <<min(95, 18.35) <<endl;
	//print double
	//print(2.75);
	//print char
	//print('c');
	print<double>(10.15);//langsung convert to integer; otomatis berubah jadi integer, karena <int> ini termasuk esplisit
	cout <<max<double,int>(25.35, 12) <<endl;//explisit argumen
	cin.get();
	return 0;
}