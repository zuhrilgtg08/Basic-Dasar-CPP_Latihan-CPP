#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan Panjang Pola Segitiga : ";
    cin >> n;

    cout << "Pola 1\n";

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
       cout << endl;
    }
    cout<<endl;


    cout << "Pola 2\n";

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
       cout << endl;
    }
    cout<<endl;


    cout << "Pola 3\n";

    for(int i = 1; i <= n; i++){
       for(int a = 1; a < i; a++){
        cout << " ";
       }
       for(int k = n; k >= i; k--){
        cout << "*";
       }
       cout << endl;
    }
    cout<<endl;

     cout << "Pola 4\n";

    for(int i = 1; i <= n; i++){
       for(int a = n; a > i; a--){
        cout << " ";
       }
       for(int u = 1; u <= i; u++){
        cout << "*";
       }
       cout << endl;
    }
    cout<<endl;
    return 0;
}
