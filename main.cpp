// rahma = Menampilkan Object nomer 2
// zakki = Mencari Data  nomer 1
// dwiki = Membuat Class
// yulias = Memasukan Kategori nomer 4
// mei = Memasukan Judul nomer 3

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

		void tampil(){ //Nomer 4
			cout << "Kategori\t:" << this->kategori << endl;
			cout << "Penulis\t\t:" << this->penulis << endl;
			cout << "Tahun\t\t:" << this->tahun << endl;
			cout << "Judul\t\t:" << this->judul << endl;
			cout << "Kota\t\t:" << this->kota << endl;
			cout << "Penerbit\t:" << this->penerbit << endl;
			cout << "Halaman\t\t:" << this->hal << endl;
			cout << "Deskripsi\t:" << this->deskripsi << endl;
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

					cout << "\nSilahkan Pilih Pencariannya : \n";
					cout << "1. Penulis" << endl;
					cout << "2. Judul" << endl;
					cout << "3. Tidak Jadi Memilih" << endl;
					cout << "Silahkan Memilih : "; cin >> pilih;

					if(pilih == 1) {
						cout << "Masukan Siapa penulisnya : "; cin >> cari;

						for(int i = 0; i < 10; i++) {
							if(daftar[i].buku::penulis == cari) {
								cout << daftar[i].buku::penulis << endl;
								a++;
							}

							if(i+1 == 10 && a == 0) {
								cout << "Maaf pencarian untuk penulis " << cari << " tidak ada" << endl;
							}
						}
					}

					if(pilih == 2) {
						cout << "Masukan Judul Buku : "; cin >> cari;

						for(int i = 0; i < 10; i++) {
							if(daftar[i].buku::judul == cari) {
								cout << daftar[i].buku::judul << endl;
								a++;
							}
							if(i+1 == 10 && a == 0) {
								cout << "Maaf pencarian untuk penulis " << cari << " tidak ada" << endl;
							}
						}
					}

					else {
						break;
					}

				cout << "mau keluar [y|t] : "; cin >> keluar;
				if(keluar == "T" || keluar == "t") {
					continue;
					a++;
				}
				else if (keluar == "Y" || keluar == "y"){
					break;
				}
		}

	}

		void cek_data_judul(string kategori, string judul, string penulis, string deskripsi, string penerbit, string kota, int hal, int tahun, perpustakaan *daftar) { //Nomer 2
			int a = 0;
			string tandah;
			for(int i = 0; i < 10; i++) {
				if(daftar[i].buku::judul == judul) {
					tandah = daftar[i].buku::judul;
					a++;
				}
			}
			if(a == 0) {
				memasukan_data(kategori, judul, penulis, deskripsi, penerbit, kota, hal, tahun, daftar);
			}
			else {
				cout << "Sudah ada " << a << " Judul " << tandah << " yang sama" << endl;
			}
		}

		void cek_data_kategori(string kategori, string judul, string penulis, string deskripsi, string penerbit, string kota, int hal, int tahun, perpustakaan *daftar) { //Nomer 3
			int a = 0;
			string tandah;

			for(int i = 0; i < 10; i++) {
				if(daftar[i].buku::kategori == kategori) {
					tandah = daftar[i].buku::kategori;
					a++;
				}
			}
			if(a == 0) {
				memasukan_data(kategori, judul, penulis, deskripsi, penerbit, kota, hal, tahun, daftar);
			}
			else {
				cout << "Sudah ada " << a << " kategori " << tandah << " yang sama" << endl;
			}
		}

		void menampilkan(perpustakaan *daftar) { //Nomer 4
			for(int i = 0; i < 10; i++) {
				daftar[i].buku::tampil();
				cout << endl;
			}
		}
};

void membuat_daftar_buku() {
	perpustakaan daftar_buku[10];
	int pilih = 0;

	daftar_buku[0].buku::isi_buku("Teknologi", "C++", "Dwiki Nuridhuha", "Ini buku tentang pemrograman C++", "Informatika", "Mojokerto", 627, 2018);
	daftar_buku[1].buku::isi_buku("Agama", "Dilan 2", "Pidi Baiq", "Kisah Dilan tahun 1990 jilid 2", "PT Mizan Pustaka", "Bandung", 342, 2015);
	daftar_buku[2].buku::isi_buku("Sejarah", "Menemukan Sejarah:wacana pergerakan Islam di Indonesia", "Ahmad Mansur Suryanegara", "Ini buku tentang wacana pergerakan Islam di Indonesia", "Mizan", "Jakarta", 335, 1995);
	daftar_buku[3].buku::isi_buku("Agama", "Penghapus Dosa-Dosa Wanita", "Majdi Fathi As-Sayyid", "Menjelaskan penghapus dosa-dosa wanita", "Al-Maktabah At-Taufiqiyah", "Jakarta Timur", 251, 2002);
	daftar_buku[4].buku::isi_buku("Pyscologi", "Psychology", "Yulius", "Ini buku bembelajaran Psychology untuk pemula ", "YuliusP", "Blitar", 710, 2030);

	while(true) {
		cout << "\nSilahkan Memilih : \n";
		cout << "1. Pencarian Buku" << endl;
		cout << "2. Mengisikan Judul Buku" << endl;
		cout << "3. Mengisikan Kategori Buku" << endl;
		cout << "4. Menampilkan Buku" << endl;
		cout << "Masukan Apapun Untuk Keluar" << endl;
		cout << "Silahkan Memilih : "; cin >> pilih;

		if(pilih == 1) {
			daftar_buku->pencarian(daftar_buku);
		}
		else if(pilih == 2) {
			string judul, penulis, deskripsi, penerbit, kota, kategori;
			int hal = 0, tahun = 0;

			cout << "\nMasukan Judul Yang Anda Ingin : "; cin >> judul;
			cout << "\nMasukan penulis Yang Anda Ingin : "; cin >> penulis;
			cout << "\nMasukan deskripsi Yang Anda Ingin : "; cin >> deskripsi;
			cout << "\nMasukan penerbit Yang Anda Ingin : "; cin >> penerbit;
			cout << "\nMasukan kota Yang Anda Ingin : "; cin >> kota;
			cout << "\nMasukan kategori Yang Anda Ingin : "; cin >> kategori;
			cout << "\nMasukan hal Yang Anda Ingin : "; cin >> hal;
			cout << "\nMasukan tahun Yang Anda Ingin : "; cin >> tahun;

			daftar_buku->cek_data_judul(kategori, judul, penulis, deskripsi, penerbit, kota, hal, tahun, daftar_buku);
		}
		else if(pilih == 3) {
			string judul, penulis, deskripsi, penerbit, kota, kategori;
			int hal = 0, tahun = 0;

			cout << "\nMasukan Judul Yang Anda Ingin : "; cin >> judul;
			cout << "\nMasukan penulis Yang Anda Ingin : "; cin >> penulis;
			cout << "\nMasukan deskripsi Yang Anda Ingin : "; cin >> deskripsi;
			cout << "\nMasukan penerbit Yang Anda Ingin : "; cin >> penerbit;
			cout << "\nMasukan kota Yang Anda Ingin : "; cin >> kota;
			cout << "\nMasukan kategori Yang Anda Ingin : "; cin >> kategori;
			cout << "\nMasukan hal Yang Anda Ingin : "; cin >> hal;
			cout << "\nMasukan tahun Yang Anda Ingin : "; cin >> tahun;

			daftar_buku->cek_data_kategori(kategori, judul, penulis, deskripsi, penerbit, kota, hal, tahun, daftar_buku);
		}
		else if(pilih == 4) {
			daftar_buku->menampilkan(daftar_buku);
		}
		else{
			break;
		}
	}

}

int main()
{
	cout << "==================================================" << endl;
    cout << "=                 LIST DATA BUKU                 =" << endl;
   	cout << "=                THE DREAMER TEAM                =" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << endl;


	membuat_daftar_buku();

    	return 0;
}
