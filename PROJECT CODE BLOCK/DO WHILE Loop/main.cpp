#include <iostream>

using namespace std;

int main()
{
    //do{
        //aksi;
    //}while(syarat);

    int a = 1;
    do{
        cout << "apa kabar";
        cout << a <<endl;
        a++;//increment
    }while(a <= 10);
    cout << "program selesai" <<endl;
    //aksi dilakukan minimal sekali
    return 0;
}
