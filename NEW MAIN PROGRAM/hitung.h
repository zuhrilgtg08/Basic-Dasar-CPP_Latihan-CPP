double jarak(double kecepatan, double waktu){
	double hitungJarak;
	hitungJarak = kecepatan * waktu;
	return hitungJarak;
}

float kecepatan(float jarak, float waktu){
	float hitungKecepatan;
	hitungKecepatan = jarak / waktu;
	return hitungKecepatan;
}

double waktu(double jarak, double kecepatan){
	return jarak * kecepatan;
}

template <typename D>
void display(D print){
	std::cout << "Hasil Perhitungannya Adalah : " <<print <<std::endl;
}