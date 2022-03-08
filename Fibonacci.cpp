#include <iostream>
using namespace std;

int main(){
	int n, sn, sn1, sn2;
	cout << "=========================================================================" <<endl;
    cout << "                     Program Deret Fibonacci          " << endl;
    cout << "=========================================================================" <<endl;
    cout<<endl;
    cout << "Masukkan Nilai / Suku ke -n : ";
    cin>>n;

    //operator
    sn1 = 1;
    sn2 = 0;
    sn = sn1 + sn2;
    cout << sn << " ";

    //loop
    for(int i = 1; i < n; i++){
    	sn = sn1 + sn2;
    	sn2 = sn1;
    	sn1 = sn;
    	cout << sn << " ";
    }
    cout << "\n";
    return 0;
}

