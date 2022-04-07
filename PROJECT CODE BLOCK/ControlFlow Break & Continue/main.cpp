#include <iostream>
using namespace std;
//control FLOW
int main(){
   // for(int i =0; i <= 10; i++){
        //if(i ==5){
            //break; //fungsinya digunakan untuk memberhentikan (jeda) dari statement berikutnya.
            //continue; //fungsinya digunakan untuk men skip statement yang selanjutnya (yang ada dibawahnya) dan dilanjutkan langsung ke atasa lagi
       // }
        //cout << i << endl;
    //}
    int i = 0;
    while (i <= 10){
        i++;
        if(i == 5){
            //break;
            continue;//jika menggunakan continue dalam loop while, incrementnya hati-hati harus diletakkan di atas;
        }
        cout << i <<endl;
    }
    cout << "akhir program" <<endl;
    return 0;
}
