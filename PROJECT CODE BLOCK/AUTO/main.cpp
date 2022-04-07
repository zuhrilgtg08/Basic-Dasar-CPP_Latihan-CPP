#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//auto digunakan jika kita nggak tahu ini nilai nya berapa ? atau ini itu tipe datanya apa si ?
//si auto akan otomatis mendeteksi si nilainya
//dimana kita menggunakan keyword auto ? yaitu ketika kita bikin template function yang nilainya berubah ubah
//jadi auto akan otomatis menegluarkan tipe data apa yang akan dikeuarkan dan cari yang paling aman;

template<typename T, typename Y>
auto max(T data1, Y data2){
	return (data1 > data2) ? T(data1) : Y(data2);//data1 : data2;
}


int main(){
	int a = 17;
	string b = "Saya";
	double c = 12.47;
	float d = 27.8f;
	auto e = max(c, a);

	cout <<a << " tipenya: " <<typeid(a).name() <<endl;
	cout <<b << " tipenya: " <<typeid(b).name() <<endl;
	cout <<c << " tipenya: " <<typeid(c).name() <<endl;
	cout <<d << " tipenya: " <<typeid(d).name() <<endl;
	cout <<e << " tipenya: " <<typeid(e).name() <<endl;




	cin.get();
	return 0;
}
