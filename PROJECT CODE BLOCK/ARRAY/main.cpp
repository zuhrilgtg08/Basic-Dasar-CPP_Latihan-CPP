//ARRAY (kumpulan data);
//index array diawali dari 0 bukan dari 1 (index pertama);
//membua array di cpp
//ukuran dari array dia tidak punya fungsi internal untuk melihat ukuran besarnya member dalam si array;
#include <iostream>
using namespace std;

int main(){
	//membuat array ada 2 cara
	//cara 1
	int nilai[5];
	nilai[0] = 0;
	nilai[1] = 1;
	nilai[2] = 2;
	nilai[3] = 3;
	nilai[4] = 4;

	//cara 2
	//int nilai[5] = {0, 1, 2, 3, 4,};
	cout <<&nilai[0] << " nilainya adalah : " <<nilai[0] <<endl;
	cout <<&nilai[1] << " nilainya adalah : " <<nilai[1] <<endl;
	cout <<&nilai[2] << " nilainya adalah : " <<nilai[2] <<endl;
	cout <<&nilai[3] << " nilainya adalah : " <<nilai[3] <<endl;
	cout <<&nilai[4] << " nilainya adalah : " <<nilai[4] <<endl;

	//mengakses nilainya
	int *ptr = nilai;
	*(ptr + 2) = 6;
	nilai[3] = 7;
	cout<<endl;
	cout <<&nilai[0] << " nilainya adalah : " <<nilai[0] <<endl;
	cout <<&nilai[1] << " nilainya adalah : " <<nilai[1] <<endl;
	cout <<&nilai[2] << " nilainya adalah : " <<nilai[2] <<endl;
	cout <<&nilai[3] << " nilainya adalah : " <<nilai[3] <<endl;
	cout <<&nilai[4] << " nilainya adalah : " <<nilai[4] <<endl;
	cout<<endl;

	//mengambil ukuran dari si array
	cout << "ukuran array = " <<sizeof(nilai) << " byte" <<endl;
	//mengambil jumlah member dari si array
	cout << "jumlah member si array = " <<sizeof(nilai)/sizeof(int) <<endl;
	return 0;
}
