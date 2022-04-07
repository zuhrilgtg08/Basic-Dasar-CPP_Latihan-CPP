#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
#define phd 0.10 //phd sebesar 10%
const int diskon = 25000;

int main()
{
   char nama[50], menu[20], back;
   int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian,
        harga[5]={20000, 10000, 15000, 25000, 30000}, i=0;
    bool saldo;

    do{
        system("CLS");
        cout << "===============================RESTORAN JAYA=============================="<<endl;
        cout << "==========================RESTORANNYA ORANG ELITE========================="<<endl;
        cout << "===========================Jl.Semarang Surabaya==========================="<<endl;
        cout << "================================Im Lovin It !============================="<<endl;
        cout << endl;
        cout << "Masukkan Nama Anda  : ";cin>>nama;
        cout << "Menu Yang Tersedia--"<<endl;
        cout << "--------------------------------------------------------------------------"<<endl;
        cout << "[1] Gulai Kambing                          : Rp 20.000                    "<<endl;
        cout << "[2] Sate Kelinci Bakar                     : Rp 10.000                    "<<endl;
        cout << "[3] Nasi Penyetan Istimewa                 : Rp 15.000                    "<<endl;
        cout << "[4] Bakmi Iblis + Daging Asli              : Rp 25.000                    "<<endl;
        cout << "[5] Nasi Uduk + Bebek Goreng Istimewa      : Rp 30.000                    "<<endl;
        cout << "--------------------------------------------------------------------------"<<endl;

        cout << "(Masukkan Menu Berdasarkan Nomor :)"<<endl;
        cout << "Silahkan Pilih Makanan Anda  : "; cin>>makanan;

        //Percabangan
        switch(makanan){
            case 1:
                strcpy(menu,"Gulai Kambing");
                break;
            case 2:
                strcpy(menu,"Sate Kelinci Bakar");
                i=1;
                break;
            case 3:
                strcpy(menu,"Nasi Penyetan Istimewa");
                i=2;
                break;
            case 4:
                strcpy(menu,"Bakmi Iblis + Daging Asli");
                i=3;
                break;
            case 5:
                strcpy(menu,"Nasi Uduk + Bebek Goreng Istimewa");
                i=4;
                break;
            default:
                cout << "Pilihan Menu yang Anda Pilih Tidak Ada...." <<endl;
                goto ulang;
        }
        cout << " Anda Memilih " <<menu <<endl;
        cout << endl;
        cout << "Jumlah Makanan yang Di Beli : "; cin>>jumlah;

        makan = jumlah * harga[i];
        pajak = makan * phd;
        total = pajak + makan;
        cout << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "                           RESTORAN JAYA                             " << endl;
        cout << "---------------------------------------------------------------------------" << endl;
        cout << "\tNama Pemesan :  " <<nama  << endl;
        cout << "\tMenu Makanan :  " <<menu <<endl;
        cout << "\tJumlah Pesanan : " <<jumlah <<"porsi" <<endl;
        cout << "\tHarga Makanan : " <<harga[i]<< " * "<<jumlah <<endl;
        cout << "\tPajak Restoran : " <<pajak <<endl;
        cout << "\tTotal Pembayaran : Rp " <<total <<endl;

        if(jumlah>=4){
            bonus = total - diskon;
            total = bonus;
            cout << endl;
            cout << "% Anda Mendapat Diskon Potongan Harga : Rp" <<diskon <<" $" << endl;
            cout << "Total Pembayaran Setekah Diskon : Rp"<< total << endl;
        }

        cout << "---------------------------------------------------------------------------" << endl;
        cout << "Silahkan Bayar Disini     : Rp.";  cin>>bayar;
        cout<<endl;

        //perulangan
        while(saldo=bayar<total){
            cout << "Saldo Anda Kurang. Silahkan Bayar Lagi : Rp. "; cin>>kurang;
            bayar+=kurang;
        };
         kembalian=bayar-total;
         cout << "Uang Yang Anda Bayar \t\t\t Rp. " << bayar <<endl;
         cout << "Kembalian \t\t\t\t Rp. "  << kembalian <<endl;
         cout << "##########################################################################"<<endl;

         ulang:
             cout << " [Y = Iya / T = Tidak] "<<endl;
             cout << " Apakah Anda ingin Pesan Lagi ? [Y / T] = "; cin>>back;
    }while (back== 'Y'||back== 'y');
    cout << endl;
    cout << "   Terimakasih Telah Memesan Makanan DI RESTORAN JAYA "<<endl;
    cout << "               SELAMAT MENIKMATI      "<<endl;

    return 0;
    }
