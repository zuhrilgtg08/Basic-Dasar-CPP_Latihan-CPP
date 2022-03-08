#include <iostream>
using namespace std;

int main(){
	//variable
	int a = 5;
	cout << "adrees dari si a : " <<&a <<endl;
	cout << "nilai dari a : " <<a <<endl;

	//ini adalah reference 
	int &b = a;
	cout << "nilai dari b : " <<b <<endl;
	cout << "adrees dari b : " <<&b <<endl;

	b = 10;
	cout << "nilai dari a : " <<a <<endl;
	cout << "nilai dari b : " <<b <<endl;

	a = 20;
	cout << "nilai dari a : " <<a <<endl;
	cout << "nilai dari b : " <<b <<endl;
	return 0;
}