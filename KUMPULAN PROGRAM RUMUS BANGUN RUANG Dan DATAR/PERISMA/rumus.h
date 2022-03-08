#define V "Hasil Volumenya Adalah: "
#define L "Hasil Luas Prismanya: "
#define LS "Hasil Luas Selimutnya Adalah: "
#define LT "Hasil Luas Alasnya Adalah: "

double luas_prisma(double a, double t, double sisi){
	return (2 * (0.5 * a * t)) + (sisi + sisi + sisi * t);
}

double luas_selimut(double sisi, double tinggi){
	return (sisi + sisi + sisi) * tinggi;
}

double luas_segitiga(double a, double t){
	return 0.5 * a * t;
}

double volume(double a, double t, double tinggiPrisma){
	return 0.5 * a * t * tinggiPrisma;
}