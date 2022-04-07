#include <iostream>

using namespace std;

int main()
{
    //cara melakukan assigment
    int a = 10;//ini cara standard
    //cara memanipulasi assigment (self manipulation)
   // a = a + 3;
    cout << "Nilai awal dari a assigment operator : " << a <<endl;

    //cara yang lebih mudah dengan assigment operator
    //ada 2 rumus
    //variable = variable operator ekspresinya
    //misal a  =   a        -        3;
    //atau yang kedua
    //variable operator = ekspresinya
    //  a      +        = 3;

    a += 3;
    cout << "ditambah +3 menjadi : "<<a <<endl;

    a -= 3;
    cout << "dikurangi -3 menjadi : " <<a <<endl;

    a /= 3;
    cout << "dibagi /3 menjadi : " <<a <<endl;

    a *= 3;
    cout << "dikalikan *3 menjadi : " <<a <<endl;

    a %= 3;
    cout << "modulus %3 menjadi : " <<a <<endl;

    return 0;
}
