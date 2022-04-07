//cara membandingkan duah buah kata
#include <iostream>
#include <string>
using namespace std;

int main(){
	//program untuk membandingkan kata
	//membandingkan dua buah data yang bertipe string
	string input;
	string kataRahasia("zuhrilGtg");
	while(true){
		cout << "tebak nama : ";
		cin>>input;
		if(input == kataRahasia){
			cout << "tebakan anda benar !" <<endl;
			break;
		}else{
			cout << "tebakan anda salah !!!" <<endl;
		}
	}
	cout << "program telah selesai" <<endl;
	return 0;
}
