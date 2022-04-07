#include <iostream>
#include <string>

#define UMUR 16

#if UMUR == 16
	#define KATA "iya benar umur saya 16 tahun"
#else
	#define KATA "umur saya bukan 16"
#endif

using namespace std;
int main(){
	cout << "status Umur: " <<KATA <<endl;
	return 0;
}
