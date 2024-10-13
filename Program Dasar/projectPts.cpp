#include <iostream>
using namespace std;

int main () { 
	string nama;
	string kelas;
	string jurusan;
	string nama_buku;
	string penerbit;
	string petugas;
	
	cout<<"=====================SELAMAT DATANG===================="<<endl;
	cout<<"============APLIKASI PEMINJAMAN BUKU ONLINE============"<<endl<<endl;
	
	cout<<"================LENGKAPI DATA DIRI ANDA================"<<endl<<endl;

	cout<<"Masukan Nama Peminjam: "; getline(cin, nama);
	cout<<"Masukan Kelas: "; getline(cin, kelas);
	cout<<"Masukan Jurusan: "; getline(cin, jurusan);
	cout<<"Masukan Nama Buku: "; getline(cin, nama_buku);
	cout<<"Masukan Nama Penerbit: "; getline(cin, penerbit);
	cout<<"Masukan Nama Petugas: "; getline(cin, petugas);
	
	cout<<"================DATA PEMINJAM HARI INI================="<<endl<<endl;
	
	cout<<"Nama Peminjam:            "<<nama<<endl;
	cout<<"Kelas:                    "<<kelas<<endl;
	cout<<"Jurusan:                  "<<jurusan<<endl;
	cout<<"Nama Buku:                "<<nama_buku<<endl;
	cout<<"Nama Penerbit:            "<<penerbit<<endl;
	cout<<"Nama Petugas:             "<<petugas<<endl; 

	return 0;
}
