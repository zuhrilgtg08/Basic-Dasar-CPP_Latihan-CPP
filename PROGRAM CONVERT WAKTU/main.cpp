#include <iostream>
using namespace std;

//prototype
double jam_menit();
double jam_detik();
double menit_jam();
double menit_detik();
double detik_menit();
double detik_jam();
int option();
template<typename P>
void out( P convert);

int main(){
	char lanjut;
	int pilihan = option();

	enum opsi{
		JAMMENIT = 1,
		JAMDETIK,
		MENITJAM,
		MENITDETIK,
		DETIKMENIT,
		DETIKJAM,
		FINISH
	};

	//memulai perulangan
	while(pilihan != FINISH){
		switch(pilihan){
			case JAMMENIT:
				cout << "Masukkan Waktu Jamnya: ";
				out(jam_menit());
				break;
			case JAMDETIK:
				cout << "Masukkan Waktu Jamnya: ";
				out(jam_detik());
				break;
			case MENITJAM:
				std::cout << "Masukkan Waktu Menitnya: ";
				out(menit_jam());
				break;
			case MENITDETIK:
				cout << "Masukkan Waktu Menitnya: ";
				out(menit_detik());
				break;
			case DETIKMENIT:
				cout << "Masukkan Waktu Detiknya: ";
				out(detik_menit());
				break;
			case DETIKJAM:
				cout << "Masukkan Waktu Detiknya: ";
				out(detik_jam());
				break;
			default:
				cout << "Pilihan Anda Tidak Ditemukan" <<endl;
				break;
		}

		labelReturn:

		cout << "Lanjutkan ? (y / n): ";
		cin>>lanjut;

		if((lanjut == 'y') | (lanjut == 'Y')){
			pilihan = option();
		}else if((lanjut == 'n') | (lanjut == 'N')){
			break;
		}else{
			goto labelReturn;
		}
	}

	cout << "Akhir Program" <<endl;
	return 0;
}

//function jam -> menit
double jam_menit(){
	double inputJam;
	cin>>inputJam;
	return inputJam * 60;
}

//function jam -> detik
double jam_detik(){
	double inputJam;
	cin>>inputJam;
	return inputJam * 3600;
}

//function menit -> jam
double menit_jam(){
	double inputMenit;
	cin>>inputMenit;
	return inputMenit / 60;
}

//function menit -> detik
double menit_detik(){
	double inputMenit;
	cin>>inputMenit;
	return inputMenit * 60;
}

//function detik -> menit
double detik_menit(){
	double inputDetik;
	cin>>inputDetik;
	return inputDetik / 60;
	//return (inputDetik / 60) * 60;
}

//function detik -> jam
double detik_jam(){
	double inputDetik;
	cin>>inputDetik;
	return inputDetik / 3600;
	// return (inputDetik / 3600) * 60;
}

//void output
template<typename P>
void out( P convert){
	cin.ignore();
	cout <<"Hasil Convert: " <<convert <<endl;
}

//fungsi user input
int option(){
	system("cls");
	int input;
	cout << "\nPROGRAM CONVERT WAKTU" <<endl;
	cout << "=======================" <<endl <<endl;
	cout << "1. Convert Jam -> Menit" <<endl;
	cout << "2. Convert Jam -> Detik" <<endl;
	cout << "3. Convert Menit -> Jam" <<endl;
	cout << "4. Convert Menit -> Detik" <<endl;
	cout << "5. Convert Detik -> Menit" <<endl;
	cout << "6. Convert Detik -> Jam" <<endl;
	cout << "7. Selesai" <<endl;
	cout << "=============================" <<endl;
    cout << "Pilih Sesuai Nomor [1 - 7] : ";
    cin>>input;
    cin.ignore();
    return input;
}