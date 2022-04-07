#include <iostream>
using namespace std;
int main(){
    //for(ada 3 step: inisialisasi, loopKondisi, increment){
     //   statement
   // }
   cout << "ini adalah forLoop 1\n";
   for(int i=1; i<=10; i++){
    cout << i <<endl;
   }
   cout << "\nini loop 2\n";
   for(int a=1; a<=10; a+=2){
    cout << a <<endl;
   }
   cout << "\nini Loop 3\n";
   for(int b=1; b>= -10; b--){
    cout << b <<endl;
   }
   cout << "\nini for Loop 4\n";
   int total=0;
   for(int c=1; c<=10; total += c, c++){
    cout << c <<" || " <<total <<endl;
   }
   cout << "\nfor Loop 5\n";
   for(int d=1; d<=10; d-=2){
    cout << d << " dikali dengan 2" <<endl;
   }

  cout << "\nfor Loop 6\n";
   for(int d=9; d<=10; d%=2){
    cout << d << " nilai modulus  dengan 2" <<endl;
   }
    return 0;
}
