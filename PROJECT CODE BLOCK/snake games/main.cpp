#include  <iostream>             // Header Files
#include  <conio.h>
#include   <cstdlib>
#include   <windows.h>
#include  <time.h>


using namespace std;
void gotoxy (int x, int y)
    {
         COORD coordinates;     // coordinates is declared as COORD
         coordinates.X = x;     // defining x-axis
         coordinates.Y = y;     //defining  y-axis
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }
int main()
{
    int i;
    int lakonx,lakony,musuhx,musuhy,buahx,buahy,skorlakon=0,skormusuh=0;
    char ch;

    srand(time(NULL));

for (i=0;i<=79;i++)
    {   gotoxy(i,0);      cout<<"#";
        gotoxy(i,40);      cout<<"#";

        if(i<40) {gotoxy(0,i);      cout<<"#";
        gotoxy(79,i);      cout<<"#";
        }
    }

    lakonx=rand()%40+ 20;
    lakony =rand()%20 +10;
    gotoxy(lakonx,lakony); cout << '\2';

    musuhx=rand()%40+ 20;
    musuhy =rand()%20 +10;
    gotoxy(musuhx,musuhy); cout << '\1';

    buahx=rand()%74+ 3;
    buahy =rand()%35 +2;
    gotoxy(buahx,buahy); cout << '@';

    int arah=0;

    int delay=0,limit=5000;
    while(true)
    {
        delay++;

        if(delay>limit)
        {
            gotoxy(0,0);  cout<<" You : "<< skorlakon<< "   Enemy : "<< skormusuh<< "  ";
            delay=0;
                gotoxy(lakonx,lakony);cout << ' ';
                gotoxy(musuhx,musuhy);cout << ' ';
                switch(arah)
                {
                    case 72: lakony--;break;
                    case 75: lakonx--;break;
                    case 80: lakony++;break;
                    case 77: lakonx++;break;
                }

             if(arah)
             {
                   if(buahx==musuhx)
                    {
                        if(buahy>musuhy) musuhy++;else if(buahy<musuhy) musuhy--;
                    }
                  if(buahx>musuhx) musuhx++;else if(buahx<musuhx) musuhx--;

             }
                gotoxy(musuhx,musuhy);cout << '\1';
                gotoxy(lakonx,lakony);cout << '\2';

             if(musuhx==buahx&&musuhy==buahy)
             {
                buahx=rand()%74+ 3;
                buahy =rand()%35 +2;
                gotoxy(buahx,buahy); cout << '@';
                skormusuh+=100;
                limit-=100;

             }
             if(lakonx==buahx&&lakony==buahy)
             {
                buahx=rand()%74+ 3;
                buahy =rand()%35 +2;
                gotoxy(buahx,buahy); cout << '@';
                skorlakon+=100;
                limit-=100;
             }

        }

       if(lakonx>78||lakonx<1||lakony>39||lakony<1)
       {
           gotoxy(40,20);cout<< "GAME OVER ! ";
           if(skorlakon>skormusuh)
             cout << "You Win " ;else if (skorlakon<skormusuh) cout << "You Lose"; else cout << "Draw!";

          break;
       }


       if (kbhit())
       { //penekanan tombol
           ch=getch();

           if(ch==32)
           {gotoxy(lakonx,lakony);cout << ' ';
                 switch(arah)
                {
                    case 72: lakony-=5;break;
                    case 75: lakonx-=5;break;
                    case 80: lakony+=5;break;
                    case 77: lakonx+=5;break;
                }

           }

           if(ch<0)
           {
               ch=getch();
               if(ch==72 || ch==80||ch==75||ch==77)
               {
                 if(ch%2 && !(arah%2) )arah=ch;
                 if(!(ch%2) && arah%2 )arah=ch;

               }






           }


       }
    }

   // return EXIT_SUCCESS;
}
