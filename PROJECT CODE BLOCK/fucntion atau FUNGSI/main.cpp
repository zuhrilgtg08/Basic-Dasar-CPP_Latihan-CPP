#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //tipe tipe function
    //apa gunanya fungsi pada pemrograman
    //funsi / function (method)
    //input - fingsi - output
    //apa si gunanya fungsi ? function dapat digunakan berulang kali dengan memanggil fungsi tersebut
    //kenapa harus membuat fungsi ? kita membuat suatu program yang sufatnya sama lebih baik menggunakan fungsi daripada melakukan memprogram suatu hal yang sama secara terulang
    // DRY ? (DONT REPEAT YOUR SELF)
    int x;
    cout << "Menghitung Akar dari X : ";
    cin>>x;

    double y = sqrt(x);
    cout << "Akar dari x adalah : " <<y <<endl;
    return 0;
}
