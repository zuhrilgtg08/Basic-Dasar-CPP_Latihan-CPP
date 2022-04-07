//program menampilkan KPK FPB
#include <iostream>
using namespace std;
int main(){
	//input angka
	int a,b;
	cout << "Masukkan angka : ";
	cin>>a;
	cout << "Masukkan angka Kedua : ";
	cin>>b;

	//FPB(Faktor Persekutuan Terbesar)
	for(int i=a; i>0; i--){
		if(a%i==0 && b%i==0){
			cout << "Nilai FPB nya adalah : " <<i <<endl;
			break;
		}
	}

	//KPK(Faktor Persekutuan Terkecil)
	for(int i=a; i; i++){
		if(i%a==0 && i%b==0){
			cout << "Nilai KPK nya adalah : " <<i <<endl;
			break;
		}
	}

	return 0;
}
