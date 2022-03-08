//penulisan syntax bitset cout <<bitset<8>(a) <<endl;//menghitungnya mulai dari akhir;
//binary (bitset mengubah nilai/angka ke binary number);
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

//voidBinary
void printBinary(unsigned short val, string nama){
	cout <<nama << " = " <<bitset<8>(val) <<endl;
}

int main(){
	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << ">> = Bitwise SHR" <<endl;//operasi shift right bitwise memindahkan nilai binernya ke kanan;
	c = b >> 2;//salah satu variable yang dikasih;
	//printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;
	cout<<endl;

	cout << "<< = Bitwise SHL" <<endl;//operasi shift left bitwise memindahkan nilai binernya ke kiri;
	c = a << 2;//salah satu variable yang dikasih;
	printBinary(a, "a");
	//printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;
	cout<<endl;

	cout << "~ = Bitwise NOT" <<endl;
	c = ~a;//berarti salah satu variable yang di NOT kan
	printBinary(a, "a");
	//printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;
	cout<<endl;

	cout << "^ = Bitwise XOR" <<endl;
	c = a ^ b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;
	cout<<endl;

	cout << "| = Bitwise OR" <<endl;
	c = a | b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;
	cout<<endl;

	cout << "& = Bitwise AND" <<endl;
	c = a & b;
	printBinary(a, "a");
	printBinary(b, "b");
	printBinary(c, "c");
	cout << "c = " <<c <<endl;

	//printBinary(a, "a");
	
	
	return 0;
}

/*
	BITWISE Operator
	& AND Bitwise AND
	| OR Bitwise inclusive OR
	^ XOR Bitwise exclusive OR
	~ NOT
	<< SHL Shift bits left
	>> SHR Shift bits Right
 */