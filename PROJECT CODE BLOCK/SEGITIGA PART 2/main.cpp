#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan Panjang Pola Segitiga : ";
    cin >> n;

        cout << "Pola 5\n";

    for(int i = 1; i <= n; i++){
       for(int a = n; a > i; a--){
        cout << " ";
       }
       for(int u = 1; u <= (2*i - 1); u++){
        cout << "*";
       }
       cout << endl;
    }
    cout<<endl;


    cout << "Pola 6\n";

    for(int i = 1; i <= n; i++){
       for(int a = 1; a < i; a++){
        cout << " ";
       }
       for(int k = n; k >= (2*i - n); k--){
        cout << "*";
       }
       cout << endl;
    }
    cout<<endl;


     cout << "Pola 7\n";

    for(int i = 1; i <= n; i++){
       for(int a = n; a > i; a--){
        cout << " ";
       }
       for(int u = 1; u <= (2*i - 1); u++){
        cout << "*";
       }
       cout << endl;
    }

    for(int i = 2; i <= n; i++){
       for(int a = 1; a < i; a++){
        cout << " ";
       }
       for(int k = n; k >= (2*i - n); k--){
        cout << "*";
       }
       cout << endl;
    }
    cout<<endl;


    return 0;
}
