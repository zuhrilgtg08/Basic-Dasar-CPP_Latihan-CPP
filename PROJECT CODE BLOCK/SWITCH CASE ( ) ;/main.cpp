#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "masukkan nilai : ";
    cin >> a;
    switch (a){
    case 1:
        cout << "nilai yang kamu masukkan benar 1 :)" << endl;
        break;//meloncati switch
    case 2:
        cout << "nilai ini adalah angka 2 :)" <<endl;
        break;
    case 3:
        cout << "nilai ini adalah angka 3 :)" <<endl;
        break;
    case 4:
        cout << "nilai ini adalah angka 4 :)" <<endl;
        break;
    case 5:
        cout << "nilai ini adalah angka 5 :)" <<endl;
        break;
    default:
        cout << "angka tidak ditemukan :(" <<endl;
        break;
    }

    cout << "program selesai" <<endl;

    cin.get();
    return 0;
}
