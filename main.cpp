#include <iostream>

using namespace std;

class buku {
	public:
		string judul, penulis, deskripsi, penerbit, kota, kategori;
		int hal = 0, tahun = 0;

		buku() {}

		void isi_buku(string kategori, string judul, string penulis, string deskripsi, string penerbit, string kota, int hal, int tahun){
			this->hal = hal;
			this->penulis = penulis;
			this->penerbit = penerbit;
			this->deskripsi = deskripsi;
			this->judul = judul;
			this->tahun = tahun;
			this->kota = kota;
			this->kategori = kategori;
		}
};

class perpustakaan : public buku {
	private :
		void memasukan_data(string kategori, string judul, string penulis, string deskripsi, string penerbit, string kota, int hal, int tahun,perpustakaan *sip ){ // bantuan Nomer 2
			for(int i = 0; ;i++) {
				if(sip[i].buku::tahun == 0) {
					sip[i].buku::judul = judul;
					sip[i].buku::deskripsi = deskripsi;
					sip[i].buku::kota = kota;
					sip[i].buku::penerbit = penerbit;
					sip[i].buku::tahun = tahun;
					sip[i].buku::hal = hal;
					sip[i].buku::kategori = kategori;
					sip[i].buku::penulis = penulis;

					break;
				}
			}
		}

	public:
		perpustakaan(){}

};

int main() {
	cout << "Testing" << endl;
return 0;
}
