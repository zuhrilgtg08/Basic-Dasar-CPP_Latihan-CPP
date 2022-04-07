#include <iostream>

using namespace std;

int main()
{
    //operator logika AND OR NOT
    int a =3;
    int b = 2;
    bool hasil;

    //opeartor not simbol ! mengembalikan nilai menjadi sebaliknya!!
    hasil = !(a == 3);
    cout << hasil << endl;

    //operator and simbol &&: kedua nilai benar untuk menghasilkan nilai 1 atau true
   cout << "ini operator AND \n";
    hasil = (a == 3) && (b == 2); //true and true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 4); //true and false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2); //false and true
    cout << hasil << endl;
    hasil = (a == 4) && (b == 4); //false and false
    cout << hasil << endl;

    //operator OR: || jika salah satu ada yang bernilai 1 atau true maka hasilnya true juga sebaliknya

    cout << "ini operator OR \n";
    hasil = (a == 3) || (b == 2); //true and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 4); //true and false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 2); //false and true
    cout << hasil << endl;
    hasil = (a == 4) || (b == 4); //false and false
    cout << hasil << endl;








    return 0;
}
