#include <iostream>
#include <string>

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

		void pencarian(perpustakaan daftar[10]) { //Nomer 1
		string cari, keluar;
		int pilih, a = 0;

			while(true) {

					cout << "\nApa yang Anda cari? : \n";
					cout << "1. Penulis" << endl;
					cout << "2. Judul" << endl;
					cout << "3. Tidak Jadi Memilih" << endl;
					cout << "Silahkan Memilih : "; cin >> pilih;

					if(pilih == 1) {
						cout << "Siapa penulis yang Anda cari? : "; cin >> cari;

						for(int i = 0; i < 10; i++) {
							if(daftar[i].buku::penulis == cari) {
								cout << daftar[i].buku::penulis << endl;
								a++;
							}

							if(i+1 == 10 && a == 0) {
								cout << "Maaf pencarian hanya untuk penulis " << cari << " tidak ada" << endl;
							}
						}
					}

					if(pilih == 2) {
						cout << "Judul buku apa yang Anda cari? : "; cin >> cari;

						for(int i = 0; i < 10; i++) {
							if(daftar[i].buku::judul == cari) {
								cout << daftar[i].buku::judul << endl;
								a++;
							}
							if(i+1 == 10 && a == 0) {
								cout << "Maaf pencarian hanya untuk judul buku " << cari << " tidak ada" << endl;
							}
						}
					}

					else {
						break;
					}

				cout << "Anda ingin keluar? [y|t] : "; cin >> keluar;
				if(keluar == "T" || keluar == "t") {
					continue;
					a++;
				}
				else if (keluar == "Y" || keluar == "y"){
					break;
				}
		}

	}
};

int main() {
	cout << "Testing" << endl;
return 0;
}
