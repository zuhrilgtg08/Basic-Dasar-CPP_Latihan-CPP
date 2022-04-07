//deret fibonacci
#include <iostream>
using namespace std;

int main(){
    //RUMUS deret fibonacci
    //fn = fn1 + fn2
    int n, fn, fn1, fn2;
    cout << "=========================================================================" <<endl;
    cout << "                     Program Deret Fibonacci          " << endl;
    cout << "=========================================================================" <<endl;
    cout<<endl;
    cout << "Masukkan Nilai ke -n : ";
    cin>>n;

    //memulai operator
    fn1 = 1;
    fn2 = 0;
    fn = fn1 + fn2;
    cout << fn << " ";

    //memulai integer i dengan angka 1;
    for(int i=1; i < n; i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout << fn << " ";
    }
    cout << "\n";
    return 0;
}
