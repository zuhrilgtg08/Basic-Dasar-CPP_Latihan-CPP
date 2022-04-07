#include <iostream>

using namespace std;
int main(){
    int a;

    cout << "input angka: ";
    cin >> a;
    if(a == 3){
        cout << "nilai yang kamu masukkan 3 benar!!" << endl;
    }else if(a == 5){
        cout << "nilai yang kamu masukkan 5 benar!!" << endl;
    }else if(a == 7){
        cout << "nilai yang kamu masukkan 7 benar!!" << endl;
    }else{
        cout << "nilai yang kamu masukkan bukan 3 , 5 ataupun 7 nilai kamu salah!!" << endl;
    }

    cout << "program berakhir!" << endl;
    cin.get();
    return 0;
}
