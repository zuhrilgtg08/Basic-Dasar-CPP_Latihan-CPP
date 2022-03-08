#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;
int main(){
	int jam, menit, detik;
	time_t rawtime;
	tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	//proses pemindahan data waktu sesuai dengan format ke dalam variable
	jam = timeinfo->tm_hour;
	menit = timeinfo->tm_min;
	detik = timeinfo->tm_sec;

	while(true){
		system("cls");
		cout << "==========================================\n";
		cout << "||\t\t\t\t\t||\n";
		cout << "||\t\t JAM DIGITAL\t\t||\n";
		cout << "||\t\t";
		cout <<jam << " : " <<menit << " : " <<detik;
		cout <<"\t\t||\n";

		cout << "||\t\t\t\t\t||\n==========================================\n\n";
		Sleep(1000);
		detik = detik + 1;

		if(detik > 59){
			detik = 0;
			menit = menit +1;

			if(menit > 59){
			menit = 0;
			jam = jam + 1;

			if(jam > 23){
			jam = 0;
			}
		}
	}
} 
	return 0;
}