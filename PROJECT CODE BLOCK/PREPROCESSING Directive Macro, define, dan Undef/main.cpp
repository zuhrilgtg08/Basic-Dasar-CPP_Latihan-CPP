//Preprocessing Directive Mcro Define, dan Undef
//preprocessing tidak melulu ditaruh diatas. dai juga bisa kita taruh kedalam body program kita
//setiap ada tanda # (hash) berarti itu adalah preprocessing directive
//Apa itu macro ?
//macro itu adalah mengganti definisi atau menambahkan sesuatu yang sudah kita jabarkan di awal
//juga kita akan menambahkan aturan pada program kita
//dan bersifat literal
//setiap kita mendefine sesuatu biasakan dengan huruf KAPITAL agar bisa membedakan antara variable dan juga DEFINE

//Ini macro merubah nilai dengan nama
#include <iostream>
#define PI 3.14159265359
#define NAMA "Zuhril"

//macro juga bisa digunakan untuk Fungsi
#define KUADRAT(A) (A*A)

//biasanya dengan tipe inline kita bisa menggunakan fungsi MACRO
//misal operasi TERNARY
#define NILAIMAX(A,B) ((A>B) ? A:B)





using namespace std;
int main(){
    cout << "ini adalh nilai PI DEFINE = " <<PI <<endl;
    cout << "Nama Saya Adalah : " <<NAMA <<endl;
    cout << "Ini Define Kuadrat : " <<KUADRAT(12) <<endl;
    cout << "Ini Perbandingan nilai Max : " <<NILAIMAX(8,11) <<endl;

    #undef NAMA
    #define NAMA "Nando"
    cout  << "Meng UNDEFINE nama saya jadi : " <<NAMA <<endl;
    return 0;
}
