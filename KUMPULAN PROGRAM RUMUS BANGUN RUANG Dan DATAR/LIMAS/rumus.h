#define V "Hasil Volumenya Adalah: "
#define L "Hasil Luasnya Adalah: "
#define T "Lanjutkan Program ? (iya / tidak) : "
#define S "Terimakasih Sudah Mencoba Program Ini :)"

double volume(double sisi, double tinggiSisi){
	double hitungVolume;
	hitungVolume = 3 * sisi * sisi * tinggiSisi;
	return hitungVolume;
}

double luas(double sisi, double a, double t){
	double hitungLuas;
	hitungLuas = (sisi * sisi) + (4 * 0.5 * a * t);
	return hitungLuas; 
}