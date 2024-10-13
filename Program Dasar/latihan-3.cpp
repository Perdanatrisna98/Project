#include <iostream>
using namespace std;

int main() {
//	Belajar menginput data cin
	
//	deklarasi Variabel
	string nama;
	int umur;
	char Y;
	
	
//	kode imput
	cout<<"Masukan nama anda : "; getline(cin, nama);
	cout<<"Masukan umur anda : "; cin>>umur;
	cout<<"Masukan golongan darah anda : "; cin>>Y; 
	
	cout<<"===========Hasil==========="<<endl;

//	kode output
	cout<<"Nama anda adalah "<<nama<<" umur anda "<<umur<<" golongan darah anda "<<Y;
	
	return 0;
}
