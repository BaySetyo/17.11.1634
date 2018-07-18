#include <iostream>
#include <string>

using namespace std;

class mobil{
	private:
	string nama_pr;
	string nama_tipe;
	string tipe_fuel;
	float jarak_tempuh;
	double harga;

	public:
	void setdata (string nmpr, string nmtp, string tpfl, float j, double h){
		nama_pr = nmpr;
		nama_tipe = nmtp;
		tipe_fuel = tpfl;
		jarak_tempuh = j;
		harga = h;
	}
	void tampildata()
	{
		cout<<"Penjualan Mobil"<<endl;
		cout<<"Nama Perusahaan Mobil = "<<nama_pr<<endl;
		cout<<"Tipe Mobil = "<<nama_tipe<<endl;
		cout<<"Tipe Bahan Bakar Mobil = "<<tipe_fuel<<endl;
		cout<<"Jarak Tempuh Mobil = "<<jarak_tempuh<<endl;
		cout<<"Harga Mobil = "<<harga<<endl;
	}
};

int main()
{
	mobil mbl1;

	mbl1.setdata("Toyota","Agya","Diesel",17.5,1750000);
	mbl1.tampildata();

	return 0;
}