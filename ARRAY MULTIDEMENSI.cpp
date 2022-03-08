#include <iostream>
using namespace std;
//print
void printArray(int *ptrArray, int baris, int kolom){
	int index = 0;
	for(int i = 0; i < baris; i++){;
		cout << "[";
		for(int j = 0; j < kolom; j++){
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << "]" <<endl;
	}
}

int main(){
	//array multidemensi
	//array[baris] [kolom]
	const int baris = 2;
	const int kolom = 2;
	int arrayMD[baris][kolom] = {1,2,3,4};
	//cout <<arrayMD[0][0] << " " <<arrayMD[0][1] <<endl;
	//cout <<arrayMD[1][0] << " " <<arrayMD[1][1] <<endl;
	printArray(*arrayMD, baris, kolom);
	return 0;
}