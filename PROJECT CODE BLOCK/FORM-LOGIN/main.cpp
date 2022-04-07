#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void login();
void registr();
void forgot();

main()
{
        int choice;
        cout<<"*******************************************************************"<<endl;
        cout<<"-------------------------FORM LOGIN--------------------------------"<<endl;
        cout<<"**********************      MENU        ***************************"<<endl;
        cout<<"*******************************************************************"<<endl;
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT MY PASSWORD AND MY USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Terimakasih Telah Mengunjungi Form Login Ini\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"Anda Telah Melakukan Kesalahan, Coba Lagi\n"<<endl;
                        main();
        }

}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"silakan masukkan rincian berikut"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHallo\n" <<user <<"\nLOGIN SUKSES\nKami senang bahwa Anda berada di sini.\nThanks for login\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nSilakan periksa nama pengguna dan kata sandi Anda\n";
                main();
        }
}

void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Input username :";
        cin>>reguser;
        cout<<"\nInput password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistrasi Sukses\n";
        main();


}

void forgot()
{
        int ch;
        system("cls");
        cout<<"Lupa? Kami di sini untuk meminta bantuan\n";
        cout<<"1.cari account username"<<endl;
        cout<<"2.cari account password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nMasukkan nama pengguna yang di ingat :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHore, your account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, UserID Anda tidak ditemukan di database kami\n";
                                cout<<"\nSilakan hubungi administrator sistem Anda untuk info lebih lanjut \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nMasukkan kata sandi yang di ingat :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nHore, Your password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, Kami tidak dapat menemukan kata sandi Anda di database kami \n";
                                cout<<"\nsilakan hubungi administrator Anda untuk informasi lebih lanjut\n";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, Anda memasukkan pilihan yang salah. Silakan coba lagi"<<endl;
                        forgot();
        }
}
