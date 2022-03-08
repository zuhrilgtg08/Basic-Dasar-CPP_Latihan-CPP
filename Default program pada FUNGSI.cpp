#include <iostream>
using namespace std;

//fungsi prototipe
double volumeBalok(double p = 5, double l = 3, double t = 2);//ini default argumen

int main(){
	cout << "Volume Balok : " <<volumeBalok(3,4,5) <<endl;
	cout << "Volume Balok : " <<volumeBalok(3,4) <<endl;
	cout << "Volume Balok : " <<volumeBalok(3) <<endl;
	cout << "Volume Balok : " <<volumeBalok() <<endl;
	return 0;
}

//default argumen
double volumeBalok(double p, double l, double t){
	return p * l * t;
}