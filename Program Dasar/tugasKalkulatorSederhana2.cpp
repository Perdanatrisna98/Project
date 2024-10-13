#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a,b,c;
	float hasil;
	string operasi;
	
	cout<<"=================================================="<<endl;
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"=================================================="<<endl;
	
	cout<<"Masukan pilihan: "; cin>>c;
	
	cout<<"Masukan Bilangan Pertama:"; cin>>a;
	cout<<"Masukan Bilangan Kedua: "; cin>>b;
	
	
	switch(c) {
		case 1 : hasil=a+b;
				operasi='+';
				break;
		case 2 : hasil=a-b;
				operasi='-';
				break;
		case 3: hasil=a*b;
				operasi='*';
				break;
		case 4 : hasil=a/b;
				operasi='/';
				break;
		case 5 : hasil=a%b;
				operasi='%';
				break;
		default : cout<<"Salah Memasukan Operator"<<endl;
	}
	
	cout<<"=================================================="<<endl;
	cout<<"Hasil Dari "<<a<<operasi<<b<<" Adalah "<<hasil<<endl;
	cout<<"==================================================";
	
	
	return 0;
}
