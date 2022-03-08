#include <iostream>
#include <string>
using namespace std;
//void
void printData(int val){
	cout <<val <<endl;
}
int main(){
	//membuat comma operator
	//(ekspresi1, ekspresi2);
	int a;
	int b;
	int c;
	//comma operator
	a = (b = 4, printData(b), c = 6, printData(c), (b + c));
	cout <<a <<endl;

	
	
	return 0;
}