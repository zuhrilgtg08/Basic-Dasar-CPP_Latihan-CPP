#include <iostream>

using namespace std;

int main()
{
    int a=4;//operator assigment
    int b=4;
    bool hasil1, hasil2;
    //nilai sebanding
    hasil1 = (a==b);
    cout << hasil1 << endl;
    //tidak sebanding (!)/not
    hasil2 = (a!=b);
    cout << hasil2 << endl;
    //tanda kurang dari (<)
    hasil1 = (a < b);
    cout << hasil1 << endl;
    //tanda lebih dari (>)
    hasil2 = (a > b);
    cout << hasil2 << endl;
    //kurang dari samadengan
    hasil1 = (a <= b);
    cout << hasil1 << endl;
    //lebih besar dari samadengan
    hasil2 = (a >= b);
    cout << hasil2 << endl;
    return 0;
}
