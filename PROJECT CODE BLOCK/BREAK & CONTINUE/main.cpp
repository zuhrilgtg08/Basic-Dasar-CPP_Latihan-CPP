//control flow
#include <iostream>
using namespace std;

int main(){
    int i =0;
    /*for(int i=0; i<=10; i++){
        //break artinya itu berhenti;
        //continue menskip perulangan dan melanjutkan kebawahnya atau setelahnya;
        if(i == 5){
            continue;
        }
        cout << i <<endl;
    }*/
    while(i <= 10){
        i++;
        if(i == 5){
            //break;
            //continue jika menggunakan continue dalam while harus meletakkan increment diatasnya / sebelum continue maupun (kondisi)
            continue;
        }
        cout << i <<endl;
    }
    cout << "akhir program" <<endl;
    return 0;

}
