#define VOLUME(P,L,T) (P*L*T) 

double keliling_balok(double p, double l, double t){
	double keliling;
	keliling = 4 * (p + l + t);
	return keliling;
}

double luas_permukaan(double p, double l, double t){
	return 2 * ((p * l) + (p * t) + (l * t));
}

void cetak(double l){
	std::cout << "Hasil Luas Permukaan Balok Adalah: " <<l <<std::endl;
}

void print(double k){
	std::cout << "Hasil Keliling Balok Adalah: " <<k <<std::endl;
}