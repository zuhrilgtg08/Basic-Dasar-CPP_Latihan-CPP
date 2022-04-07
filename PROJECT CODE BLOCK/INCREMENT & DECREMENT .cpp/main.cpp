#include <iostream>
using namespace std;

int main(){
    //increment dan decrement bertambah dengan bertahap dan juga pengurangan secara bertahap
    //preincrement dan postincrement pre (sebelum) maupun sesudah;
    int a = 5;
    int b = 5;
    //postincrement
    cout << a<<endl;
    cout << a++ <<endl;// itu a = a +1; artinya dia print dulu baru nambah
    cout << a<< endl;
    cout<<endl;

    //preincrement
    cout << b <<endl;
    cout << ++b <<endl; //ini tambah dulu baru print keluarannya
    cout << b <<endl;
    return 0;
}
