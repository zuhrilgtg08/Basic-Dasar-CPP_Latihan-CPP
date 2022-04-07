//Preprocessing Directive IF ELSE
#include <iostream>

#define KODE 12
#if KODE == 12
    #define CEK "Kode yang dimasukkan Benar"
#else
    #define CEK "Kode yang dimasukkan Salah"
#endif

using namespace std;
int main(){
    cout << "Cek Kode yang dimasukkan : " <<CEK <<endl;
    return 0;
}
