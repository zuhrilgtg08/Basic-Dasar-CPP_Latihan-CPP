//antrian pengambilan obat
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 1000 //maksimal nomor antrian

using namespace std;
//deklarasi variable
int nomor[MAX];
int head= -1;
int tail= -1;

//fungsi
bool isEmpty(){
	if(tail == -1){
		return true;
	}else{
		return false;
	}
}
bool isFull(){
	if(tail == MAX-1){
		return true;
	}else{
		return false;
	}
}

//memasukkan antrian kedalam array
void antrianMasuk(int no){
	if(isEmpty()){
		head = tail =0;
	}else{
		tail++;
	}
	nomor[tail]=no;
}

//menghapus antrian dalam array
void antrianKeluar(){
	if(isEmpty()){
		cout << "Antrian Sudah Kosong !";
		getch();
	}else{
		for(int a=head; a<tail; a++){
			nomor[a]=nomor[a+1];
		}
		tail--;
		if(tail == -1){
			head = -1;
		}
	}
}

//mengecek antrian yang ada
void view(){
	if(isEmpty()){
		cout << "Antrian Kosong !";
	}else{
		system("cls");
		for(int a=head; a<=tail; a++){
			cout << "===========================" <<endl;
			cout <<" No. Antri : [" << nomor[a] << "]";
			cout << "===========================" <<endl;
		}
	}
}

//menghapus / mereset semua nomor antrian
void clear(){
	head=tail= -1;
}

//jalannya program
int main(){
	int choose, p=1, urut;

	do{
		system("cls");
		cout << "===============================================================================" <<endl;
		cout << "	   PROGRAM ANTRIAN PENGAMBILAN OBAT	" <<endl;
		cout << "===============================================================================" <<endl;
		cout<<endl;

		cout << "===============================================================================" <<endl;
		cout << "1. Tambah Antrian Pengambilan Obat " <<endl;
		cout << "2. Panggilan Antrian Pengambil Obat " <<endl;
		cout << "3. Lihat Daftar Antrian " <<endl;
		cout << "4. Format " <<endl;
		cout << "5. Exit " <<endl;
		cout << "===============================================================================" <<endl;
		cout<<endl;
		cout << "Pilihlah Berdasarkan Nomor : ";
		cin>>choose;
		cout<<"\n\n";

		if(choose == 1){
			if(isFull()){
				cout << "Antrian Sudah Penuh, Mohon Untuk Tunggu Sebentar";
			}else{
				urut=p;
				antrianMasuk(urut);
				cout << "============================================" <<endl;
				cout << "         NO. ANTRIAN       " <<endl;
				cout << "(" << p << ")" <<endl;
				cout << "============================================" <<endl;
				cout << "      Silahkan Mengantri   " <<endl;
				cout << "Menunggu\n"     <<tail <<"\n" << "Antrian" <<endl;
				cout << "============================================" <<endl;
				p++;
			}
		}else if(choose == 2){
			cout << "============================================" <<endl;
			cout << "  No. Antri : "  <<nomor[head] <<endl;
			cout << "============================================" <<endl;
			antrianKeluar();
			cout << "Silahkan Dipanggil !" <<endl;
		}else if(choose == 3){
			view();
		}else if(choose == 4){
			clear();
			cout << "Antrian Telah Kembali Kosong !";
		}else if(choose == 5){
			cout << "Terimakasih" <<endl;
		}else{
			cout << "Nomor Antrian yang Anda Masukkan Salah !" <<endl;
		}
		getch();
	}while(choose != 5);
	return 0;
}
