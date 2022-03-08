#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include "graphics.h"
#include <time.h>
#include <dos.h>

void secondPoints(int xr, int midx, int midy, int x[60], int y[60]);
void findPoints(int angleRad, int midx, int midy, int x[12], int y[12]);

int main(){
	int gd = DETECT, gm, err, tmp;
	initgraph(&gd, &gm, "C:\\tc\\bgi");

	int i, j, midx, midy, angleRad, hr, min, sec;
	int x[12], y[12], minx[60], miny[60];
	int hrx[12], hry[12], secx[60], secy[60];
	int secx1, secy1;
	char label[256];
	time_t t1;
	struct tm * data;

	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	angleRad = 200;

	findPoints(angleRad - 30, midx, midy, x, y);
	findPoints(angleRad - 90, midx, midy, hrx, hry);

	secondPoints(angleRad - 50, midx, midy, minx, miny);
	secondPoints(angleRad - 70, midx, midy, secx, secy);

	while(!kbhit()){
		setlinestyle(SOLID_LINE, 1, 3);
		settextstyle(SANS_SERIF_FONT, 0, 3);

		circle(midx, midy, angleRad);

		for(i = 0; i < 12; i++){
			if(i == 0){
				sprintf(label, "%d", 12);
			}else{
				sprintf(label, "%d", i);
			}
			settextjustify(CENTER_TEXT, CENTER_TEXT);
			moveto(x[i], y[i]);
			outtext(label);
		}

		t1 = time(NULL);
		data = localtime(&t1);

		sec = data-> tm_sec % 60;
		line(midx, midy, secx[sec], secy[sec]);

		min = data-> tm_min % 60;
		line(midx, midy, minx[min], miny[min]);

		hr = data-> tm_hour % 12;
		line(midx, midy, hrx[hr], hry[hr]);
		delay(1000);
		cleardevice();
	}

	getch();
	closegraph();
	return 0;
}

