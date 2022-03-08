#include <iostream>
#include <string>
#include "rumus.h"
using namespace std;

void hasil(double hasil);

double lusin(double input){
    return 12 * input;
}

double gross(double input){
    return input * 144;
}

int main(){
    cout << "____________________________" <<endl;
    cout << "Program Convert Satuan Berat" <<endl;
    cout << "____________________________" <<endl;
    double input, output;
    cout << "Masukkan Angka: ";
    cin>>input;
    output = lusin(input);
    hasil(output);
    output = gross(input);
    cout << "hasilnya adalah: " <<output <<endl;
    //cout << "Hasilnya Adalah: " <<KUADRAT(input) <<endl;
    cin.get();
    return 0;
}

void hasil(double hasil){
    cout << "Hasilnya Dalam Satuan Lusin: ";
    cout <<hasil << " Buah" <<endl;
}