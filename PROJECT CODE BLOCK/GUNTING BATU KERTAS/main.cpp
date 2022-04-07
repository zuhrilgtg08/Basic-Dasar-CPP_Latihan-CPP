#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
main()
{
            int acak, pilih;
            srand(time(NULL));
            awal:
                        acak = rand()%3;
                        cout<<"-------------- Permainan Batu Gunting Kertas --------------\n\n";
                        cout<<"\t--- Pilihan ---\n";
                        cout<<" [1]. Batu\n";
                        cout<<" [2]. Kertas\n";
                        cout<<" [3]. Gunting\n";
                        cout<<" [4]. Keluar\n\n";
                        cout<<" Masukan Pilihan Anda : "; cin>>pilih;
                        cout<<endl;
                        if(pilih == 1)
                        {
                                    cout<<"Pilihan Kamu\t\t: Batu\n";
                                    if(acak == 0)
                                    {
                                                cout<<"Pilihan Komputer\t: Batu\n\n";
                                                cout<<"\t- DRAW -";
                                    }
                                    else if(acak == 1)
                                    {
                                                cout<<"Pilihan Komputer\t: Kertas\n\n";
                                                cout<<"\t - KAMU KALAH :P :P :P :P -";
                                    }
                                    else if(acak == 2)
                                    {
                                                cout<<"Pilihan Komputer\t: Gunting\n\n";
                                                cout<<"\t - KAMU MENANG T_T T_T T_T -";
                                    }
                        }
                        else if(pilih == 2)
                        {
                                    cout<<"Pilihan Kamu\t\t: Kertas\n";
                                    if(acak == 0)
                                    {
                                                cout<<"Pilihan Komputer\t: Batu\n\n";
                                                cout<<"\t- KAMU MENANG T_T T_T T_T -";
                                    }
                                    else if(acak == 1)
                                    {
                                                cout<<"Pilihan Komputer\t: Kertas\n\n";
                                                cout<<"\t - DRAW -";
                                    }
                                    else if(acak == 2)
                                    {
                                                cout<<"Pilihan Komputer\t: Gunting\n\n";
                                                cout<<"\t - KAMU KALAH :P :P :P :P -";
                                    }
                        }
                        else if(pilih == 3)
                        {
                                    cout<<"Pilihan Kamu\t\t: Gunting\n";
                                    if(acak == 0)
                                    {
                                                cout<<"Pilihan Komputer\t: Batu\n\n";
                                                cout<<"\t- KAMU KALAH :P :P :P :P -";
                                    }
                                    else if(acak == 1)
                                    {
                                                cout<<"Pilihan Komputer\t: Kertas\n\n";
                                                cout<<"\t - KAMU MENANG T_T T_T T_T -";
                                    }
                                    else if(acak == 2)
                                    {
                                                cout<<"Pilihan Komputer\t: Gunting\n\n";
                                                cout<<"\t - DRAW -";
                                    }
                        }
                        else if(pilih == 4)
                        {
                                    cout<<"\n\n TERIMA KASIH TELAH BERMAIN, KAPAN-KAPAN MAIN LAGI YA ";
                                    getch();
                                    return 0;
                        }
                        else if(pilih > 4)
                        {
                                    cout<<"\n Pilihan Yang Anda Pilih Tidak Tersedia\n";
                                    getch();
                                    goto awal;
                        }
            getch();
            system("cls");
            goto awal;
}
