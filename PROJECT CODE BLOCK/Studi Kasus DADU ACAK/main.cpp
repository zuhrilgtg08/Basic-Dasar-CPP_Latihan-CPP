#include <iostream>
#include <cstdlib> //mengandung fungsi random
using namespace std;

int main(){

    cout << "==========================================================" <<endl;
    cout << "                 PROGRAM LEMPAR DADU                 " <<endl;
    cout << "==========================================================" <<endl;
    cout<<endl;
    char lanjut;
    while(true){
        cout << "Lempar Dadu y/n : ";
        cin>>lanjut;

        if(lanjut == 'y'){
            cout << 1 + rand() % 6<<endl;
        }else if(lanjut == 'n'){
            cout << "Terimakasih Telah Bermain :)" <<endl;
            break;
        }else{
            cout << "WARNING !!! Hanya ada 2 pilihan Yaitu y/n. Harus Pilih salah satu kak :)" <<endl;
        }
    }
    return 0;
}
