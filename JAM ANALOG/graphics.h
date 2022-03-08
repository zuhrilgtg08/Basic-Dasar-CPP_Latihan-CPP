void secondPoints(int xr, int midx, int midy, int x[60], int y[60]){
	int j = 45;
	for(int i = 360; i >= 0; i -= 6){
		x[j] = midx - (xr * cos((i * 3.14) / 180));
		y[j] = midy - (xr * cos((i * 3.14) / 180));
		j--;
			if( j == -1){
				j = 59;
			}
	}
	return;
}

void findPoints(int angleRad, int midx, int midy, int x[12], int y[12]){
	int x1, y1;
	x[0] = midx, y[0] = midy - angleRad;
	x[6] = midx, y[6] = midy + angleRad;
	x[3] = midx + angleRad, y[3] = midy;
	x[9] = midx - angleRad, y[9] = midy;

	x1 = (int) ((angleRad / 2) * sqrt(3));
	y1 = (angleRad / 2);
	x[2] = midx + x1, y[2] = midy - y1;
	x[4] = midx + x1, y[4] = midy + y1;
	x[8] = midx - x1, y[8] = midy + y1;
	x[10] = midx - x1, y[10] = midy - y1;

	x1 = angleRad / 2;
	y1 = (int) ((angleRad / 2) * sqrt(3));
	x[1] = midx + x1, y[1] = midy - y1;
	x[5] = midx + x1, y[5] = midy + y1;
	x[7] = midx - x1, y[7] = midy + y1;
	x[11] = midx - x1, y[11] = midy - y1;
	return;
}